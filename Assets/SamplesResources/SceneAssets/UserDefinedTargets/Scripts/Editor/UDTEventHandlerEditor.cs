/*==============================================================================
Copyright (c) 2016-2017 PTC Inc. All Rights Reserved.
 
Copyright (c) 2012-2015 Qualcomm Connected Experiences, Inc.
All Rights Reserved.
==============================================================================*/
using UnityEditor;
using Vuforia;

/// <summary>
/// This editor class renders the custom inspector for the UDTEventHandler MonoBehaviour
/// </summary>
[CustomEditor(typeof(UDTEventHandler))]
public class UDTEventHandlerEditor : Editor
{
    #region UNITY_EDITOR_METHODS

    // Draws a custom UI for the user defined target event handler inspector
    public override void OnInspectorGUI()
    {
        UDTEventHandler m_UDTEventHandler = (UDTEventHandler)target;

        EditorGUILayout.HelpBox(
            "Here you can set the ImageTargetBehaviour from the scene " +
            "that will be used to augment user created targets.",
            MessageType.Info
        );

        bool allowSceneObjects = !EditorUtility.IsPersistent(target);

        m_UDTEventHandler.ImageTargetTemplate =
            (ImageTargetBehaviour)EditorGUILayout.ObjectField(
                "Image Target Template",
                m_UDTEventHandler.ImageTargetTemplate,
                typeof(ImageTargetBehaviour),
                allowSceneObjects
            );
    }

    #endregion // UNITY_EDITOR_METHODS
}
