/*===============================================================================
Copyright (c) 2016-2017 PTC Inc. All Rights Reserved.

Confidential and Proprietary - Protected under copyright and other laws.
Vuforia is a trademark of PTC Inc., registered in the United States and other 
countries.
===============================================================================*/
using UnityEngine;
using UnityEngine.UI;

public class PanelShowHide : MonoBehaviour
{
    public Animator m_Animator;
    public Image m_Image;
    public Text m_Info;

    public void Hide()
    {
        m_Animator.SetTrigger("HidePanel");
    }

    public void Show(string vuMarkId, string vuMarkDataType, string vuMarkDesc, Sprite vuMarkImage)
    {
        m_Animator.ResetTrigger("HidePanel");

        m_Info.text =
            "<color=yellow>VuMark Instance Id: </color>" +
            "\n" + vuMarkId + " - " + vuMarkDesc +
            "\n\n<color=yellow>VuMark Type: </color>" +
            "\n" + vuMarkDataType;

        m_Image.sprite = vuMarkImage;

        if (!m_Animator.GetCurrentAnimatorStateInfo(0).IsName("ShowAnim"))
        {
            m_Animator.SetTrigger("ShowPanel");
        }
    }

    public void ResetShowTrigger()
    {
        m_Animator.ResetTrigger("ShowPanel");
    }
}
