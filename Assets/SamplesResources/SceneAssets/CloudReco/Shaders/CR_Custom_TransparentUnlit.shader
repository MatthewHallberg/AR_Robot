Shader "Custom/TransparentUnlit" {
    Properties {
        _BaseColor ("Base Color", Color) = (1.0,1.0,1.0,1.0)
        _MainTex ("Base (RGBA)", 2D) = "white" {}
    }

    SubShader {
        Tags  { "Queue"="Transparent" "RenderType"="Transparent" }

        Pass {
            ZWrite Off
            Blend SrcAlpha OneMinusSrcAlpha

            CGPROGRAM

            #pragma vertex vert
            #pragma fragment frag

            #include "UnityCG.cginc"

            sampler2D _MainTex;
            float4 _BaseColor;

            struct v2f {
                float4  pos : SV_POSITION;
                float2  uv : TEXCOORD0;
            };

            float4 _MainTex_ST;

            v2f vert (appdata_base v)
            {
                v2f o;
                o.pos = UnityObjectToClipPos (v.vertex);
                o.uv = TRANSFORM_TEX(v.texcoord, _MainTex);
                return o;
            }

        
            half4 frag(v2f i) : COLOR
            {
                half4 c = _BaseColor * tex2D (_MainTex, i.uv);
                return c;
            }

            ENDCG
        }
    }
     
    FallBack "Diffuse"
}

