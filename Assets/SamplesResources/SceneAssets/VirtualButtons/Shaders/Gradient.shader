Shader "Custom/Gradient"
{
    Properties
    {
        _ColorFirst("First Color", Color)   = (1, 1, 1, 1)
        _ColorSecond("Second Color", Color) = (0.5, 0.5, 0.5, 1)
        _ColorThird("Third Color", Color)   = (0, 0, 0, 1)
        _BlendValue("Blend Value", Range(0.001, 0.999)) = 0.5
    }

    SubShader
    {
        Tags{ "Queue" = "Transparent" "RenderType" = "Transparent" }
        LOD 200

        Blend SrcAlpha OneMinusSrcAlpha

        Pass
        {
            CGPROGRAM

            #pragma vertex vert Standard fullforwardshadows 
            #pragma fragment frag Standard fullforwardshadows 
            #include "UnityCG.cginc"

            fixed4 _ColorFirst;
            fixed4 _ColorSecond;
            fixed4 _ColorThird;
            float  _BlendValue;

            struct v2f 
            {
                float4 pos : SV_POSITION;
                float4 texcoord : TEXCOORD0;
            };

            fixed4 frag(v2f i) : COLOR
            {
                fixed4 gradient = lerp(_ColorThird, _ColorSecond, i.texcoord.x / _BlendValue) * step(i.texcoord.x, _BlendValue);
                gradient += lerp(_ColorSecond, _ColorFirst, (i.texcoord.x - _BlendValue) / (1 - _BlendValue)) * step(_BlendValue, i.texcoord.x);
                gradient.a = (_ColorFirst[3] + _ColorSecond[3] + _ColorThird[3]) / 3;
                return gradient;
            }

            v2f vert(appdata_full v) 
            {
                v2f o;
                o.pos = UnityObjectToClipPos(v.vertex);
                o.texcoord = v.texcoord;
                return o;
            }

            ENDCG
        }
    }
    FallBack "Standard"
}
