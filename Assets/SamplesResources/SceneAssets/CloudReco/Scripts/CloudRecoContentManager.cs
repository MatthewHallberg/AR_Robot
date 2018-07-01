/*===============================================================================
Copyright (c) 2017 PTC Inc. All Rights Reserved.
 
Vuforia is a trademark of PTC Inc., registered in the United States and other
countries.
===============================================================================*/
using System.Collections.Generic;
using UnityEngine;

public class CloudRecoContentManager : MonoBehaviour
{

    #region PRIVATE_MEMBER_VARIABLES

    [SerializeField] Transform CloudTarget;
    [SerializeField] UnityEngine.UI.Text cloudTargetInfo;

    [System.Serializable]
    public class AugmentationObject
    {
        public string targetName;
        public GameObject augmentation;
    }

    public AugmentationObject[] AugmentationObjects;

    readonly string[] starRatings = { "☆☆☆☆☆", "★☆☆☆☆", "★★☆☆☆", "★★★☆☆", "★★★★☆", "★★★★★" };

    Dictionary<string, GameObject> Augmentations;
    Transform contentManagerParent;
    Transform currentAugmentation;

    #endregion // PRIVATE_MEMBER_VARIABLES

    #region UNITY_MONOBEHAVIOUR_METHODS

    void Start()
    {
        Augmentations = new Dictionary<string, GameObject>();

        for (int a = 0; a < AugmentationObjects.Length; ++a)
        {
            Augmentations.Add(AugmentationObjects[a].targetName,
                              AugmentationObjects[a].augmentation);
        }
    }

    #endregion // UNITY_MONOBEHAVIOUR_METHODS


    #region PUBLIC_METHODS

    public void ShowTargetInfo(bool showInfo)
    {
        Canvas canvas = cloudTargetInfo.GetComponentInParent<Canvas>();

        canvas.enabled = showInfo;
    }

    public void HandleTargetFinderResult(Vuforia.TargetFinder.TargetSearchResult targetSearchResult)
    {
        Debug.Log("<color=blue>HandleTargetFinderResult(): " + targetSearchResult.TargetName + "</color>");

        cloudTargetInfo.text =
            "Name: " + targetSearchResult.TargetName +
            "\nSize: " + targetSearchResult.TargetSize +
            "\nRating: " + starRatings[targetSearchResult.TrackingRating] +
            "\nMetaData: " + ((targetSearchResult.MetaData.Length > 0) ? targetSearchResult.MetaData : "No") +
            "\nTarget Id: " + targetSearchResult.UniqueTargetId;

        GameObject augmentation = GetValuefromDictionary(Augmentations, targetSearchResult.TargetName);

        if (augmentation != null)
        {
            if (augmentation.transform.parent != CloudTarget.transform)
            {
                Renderer[] augmentationRenderers;

                if (currentAugmentation != null && currentAugmentation.parent == CloudTarget)
                {
                    currentAugmentation.SetParent(contentManagerParent);
                    currentAugmentation.transform.localPosition = Vector3.zero;
                    currentAugmentation.transform.localScale = Vector3.one;

                    augmentationRenderers = currentAugmentation.GetComponentsInChildren<Renderer>();
                    foreach (var objrenderer in augmentationRenderers)
                    {
                        objrenderer.gameObject.layer = LayerMask.NameToLayer("UI");
                        objrenderer.enabled = true;
                    }
                }

                // store reference to content manager's parent object of the augmentation
                contentManagerParent = augmentation.transform.parent;
                // store reference to the current augmentation
                currentAugmentation = augmentation.transform;

                // set new target augmentation parent to cloud target
                augmentation.transform.SetParent(CloudTarget);
                augmentation.transform.localPosition = Vector3.zero;
                augmentation.transform.localScale = Vector3.one;

                augmentationRenderers = augmentation.GetComponentsInChildren<Renderer>();
                foreach (var objrenderer in augmentationRenderers)
                {
                    objrenderer.gameObject.layer = LayerMask.NameToLayer("Default");
                    objrenderer.enabled = true;
                }

            }
        }
    }

    #endregion // PUBLIC_METHODS


    #region // PRIVATE_METHODS

    GameObject GetValuefromDictionary(Dictionary<string, GameObject> dictionary, string key)
    {
        Debug.Log("<color=blue>GetValuefromDictionary() called.</color>");
        if (dictionary == null)
            Debug.Log("dictionary is null");

        if (dictionary.ContainsKey(key))
        {
            Debug.Log("key: " + key);
            GameObject value;
            dictionary.TryGetValue(key, out value);
            Debug.Log("value: " + value.name);
            return value;
        }

        return null;
        //return "Key not found.";
    }

    #endregion // PRIVATE_METHODS
}
