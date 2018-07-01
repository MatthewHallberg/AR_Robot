/*========================================================================
Copyright (c) 2017 PTC Inc. All Rights Reserved.
 
Confidential and Proprietary - Protected under copyright and other laws.
Vuforia is a trademark of PTC Inc., registered in the United States and other
countries.
=========================================================================*/

using UnityEngine;

/// <summary>
/// Controls the opacity of an object with renderers that use the standard shader
/// </summary>
public class FadeObject : MonoBehaviour
{
    #region PUBLIC_MEMBER_VARIABLES
    public bool m_IsVisible;
    public float m_FadeDuration = 1f;
    public Renderer[] m_RenderersToFade;
    #endregion // PUBLIC_MEMBER_VARIABLES

    #region PRIVATE_MEMBER_VARIABLES
    float fadeRatio;
    bool isInitialOpacitySet;
    #endregion // PRIVATE_MEMBER_VARIABLES

    #region UNITY_MONOBEHAVIOUR_METHODS

    void Awake()
    {
        foreach (var renderer in m_RenderersToFade)
        {
            renderer.sharedMaterial = Instantiate(renderer.sharedMaterial);
        }

        //If we haven't already set the initial opacity, set it based on IsVisible bool
        if (!isInitialOpacitySet)
        {
            float opacity = m_IsVisible ? 1.0f : 0.0f;
            SetInitialOpacity(opacity);
        }
    }

    void Update()
    {
        if (m_IsVisible && fadeRatio < 1.0f)
        {
            fadeRatio += Time.deltaTime / m_FadeDuration;
            if (fadeRatio > 1.0f)
            {
                fadeRatio = 1.0f;
                SetRenderingMode(true);
            }
            SetOpacity(fadeRatio);
        }
        else if (!m_IsVisible && fadeRatio > 0.0f)
        {
            fadeRatio -= Time.deltaTime / m_FadeDuration;
            if (fadeRatio < 0.0f)
            {
                fadeRatio = 0.0f;
            }
            SetOpacity(fadeRatio);
            SetRenderingMode(false);
        }
    }

    #endregion // UNITY_MONOBEHAVIOUR_METHODS


    #region PUBLIC_METHODS
    /// <summary>
    /// Immediately changes the opacity and prevents this script from setting its on opacity on start
    /// </summary>
    public void SetInitialOpacity(float opacity)
    {
        fadeRatio = opacity;
        SetOpacity(opacity);
        SetRenderingMode(opacity >= 1.0f);
        isInitialOpacitySet = true;
    }
    #endregion // PUBLIC_METHODS


    #region PRIVATE_METHODS
    void SetOpacity(float opacity)
    {
        foreach (var renderer in m_RenderersToFade)
        {
            if(renderer.sharedMaterial.HasProperty("_Color"))
            {
                Color fadedColor = renderer.sharedMaterial.GetColor("_Color");
                fadedColor.a = opacity;
                renderer.sharedMaterial.SetColor("_Color", fadedColor);
            }
        }
    }

    /// <summary>
    /// Sets the rendering mode to either Opaque or Fade
    /// </summary>
    /// <param name="isOpaque"></param>
    void SetRenderingMode(bool isOpaque)
    {
        foreach (var renderer in m_RenderersToFade)
        {
            Material mat = renderer.sharedMaterial;
            if (isOpaque)
            {
                mat.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.One);
                mat.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.Zero);
                mat.SetInt("_ZWrite", 1);
                mat.DisableKeyword("_ALPHATEST_ON");
                mat.DisableKeyword("_ALPHABLEND_ON");
                mat.DisableKeyword("_ALPHAPREMULTIPLY_ON");
                mat.renderQueue = -1;
            }
            else
            {
                mat.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.SrcAlpha);
                mat.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.OneMinusSrcAlpha);
                mat.SetInt("_ZWrite", 0);
                mat.DisableKeyword("_ALPHATEST_ON");
                mat.EnableKeyword("_ALPHABLEND_ON");
                mat.DisableKeyword("_ALPHAPREMULTIPLY_ON");
                mat.renderQueue = 3000;
            }
        }
    }
    #endregion // PRIVATE_METHODS
}

