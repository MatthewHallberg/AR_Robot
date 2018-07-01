/*========================================================================
Copyright (c) 2017 PTC Inc. All Rights Reserved.
 
Confidential and Proprietary - Protected under copyright and other laws.
Vuforia is a trademark of PTC Inc., registered in the United States and other
countries.
=========================================================================*/

using UnityEngine;

public class Fissure : MonoBehaviour
{
    #region PUBLIC_MEMBERS
    public Gradient particleGradientNormal;
    public Gradient particleGradientPressed;
    #endregion // PUBLIC_MEMBERS

    #region PUBLIC_METHODS
    public void HandleVirtualButtonPressed()
    {
        var fissureGradient = GetComponent<ParticleSystem>().colorOverLifetime;
        fissureGradient.color = particleGradientPressed;
    }

    public void HandleVirtualButtonReleased()
    {
        var fissureGradient = GetComponent<ParticleSystem>().colorOverLifetime;
        fissureGradient.color = particleGradientNormal;
    }
    #endregion // PUBLIC_METHODS
}
