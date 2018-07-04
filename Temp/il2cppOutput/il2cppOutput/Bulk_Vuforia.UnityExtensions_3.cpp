#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// Vuforia.WebCam
struct WebCam_t2427002488;
// Vuforia.TextureRenderer
struct TextureRenderer_t3278815845;
// UnityEngine.Camera[]
struct CameraU5BU5D_t1709987734;
// System.String
struct String_t;
// System.Func`3<System.String,Vuforia.WebCamProfile/ProfileData,Vuforia.IWebCamTexAdaptor>
struct Func_3_t3440825513;
// UnityEngine.Camera
struct Camera_t4157153871;
// Vuforia.WebCamProfile
struct WebCamProfile_t4166408645;
// UnityEngine.WebCamDevice[]
struct WebCamDeviceU5BU5D_t4294070825;
// Vuforia.IWebCamTexAdaptor
struct IWebCamTexAdaptor_t3823546776;
// System.Func`3<System.Object,Vuforia.WebCamProfile/ProfileData,System.Object>
struct Func_3_t917206208;
// Vuforia.DefaultWebCamTexAdaptor
struct DefaultWebCamTexAdaptor_t2452636845;
// UnityEngine.Color32[]
struct Color32U5BU5D_t3850468773;
// UnityEngine.RenderTexture
struct RenderTexture_t2108887433;
// UnityEngine.Texture2D
struct Texture2D_t3840446185;
// Vuforia.VuforiaRenderer
struct VuforiaRenderer_t3433045970;
// UnityEngine.Texture
struct Texture_t3661962703;
// UnityEngine.Object
struct Object_t631007953;
// Vuforia.CameraDevice
struct CameraDevice_t960297568;
// Vuforia.Image
struct Image_t745056343;
// Vuforia.IVuforiaWrapper
struct IVuforiaWrapper_t2381307640;
// Vuforia.WebCamARController
struct WebCamARController_t3718642882;
// Vuforia.ARController
struct ARController_t116632334;
// Vuforia.VuforiaBehaviour
struct VuforiaBehaviour_t2151848540;
// UnityEngine.Component
struct Component_t1923634451;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// Vuforia.VuforiaConfiguration
struct VuforiaConfiguration_t1763229349;
// Vuforia.VuforiaConfiguration/WebCamConfiguration
struct WebCamConfiguration_t1101614731;
// Vuforia.WebCamARController/<>c
struct U3CU3Ec_t3582055403;
// Vuforia.WebCamTexAdaptor
struct WebCamTexAdaptor_t3430449046;
// Vuforia.IPlayModeEditorUtility
struct IPlayModeEditorUtility_t752570519;
// System.Collections.Generic.Dictionary`2<System.String,Vuforia.WebCamProfile/ProfileData>
struct Dictionary_2_t3304648224;
// System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>
struct Dictionary_2_t571830913;
// UnityEngine.WebCamTexture
struct WebCamTexture_t1514609158;
// UnityEngine.AsyncOperation
struct AsyncOperation_t1445031843;
// Vuforia.WireframeBehaviour
struct WireframeBehaviour_t1831066704;
// UnityEngine.Material
struct Material_t340375123;
// Vuforia.VuforiaManager
struct VuforiaManager_t1653423889;
// UnityEngine.Transform
struct Transform_t3600365921;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// UnityEngine.MeshFilter
struct MeshFilter_t3523625662;
// UnityEngine.Mesh
struct Mesh_t3648964284;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1718750761;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// UnityEngine.Behaviour
struct Behaviour_t1437897464;
// VuforiaMonoBehaviour
struct VuforiaMonoBehaviour_t1150221792;
// Vuforia.WireframeTrackableEventHandler
struct WireframeTrackableEventHandler_t2143753312;
// Vuforia.TrackableBehaviour
struct TrackableBehaviour_t1113559212;
// Vuforia.ITrackableEventHandler
struct ITrackableEventHandler_t1495975588;
// UnityEngine.Renderer[]
struct RendererU5BU5D_t3210418286;
// UnityEngine.Collider[]
struct ColliderU5BU5D_t4234922487;
// Vuforia.WireframeBehaviour[]
struct WireframeBehaviourU5BU5D_t4114094193;
// UnityEngine.Renderer
struct Renderer_t2627027031;
// UnityEngine.Collider
struct Collider_t1773347010;
// Vuforia.WSAUnityPlayer
struct WSAUnityPlayer_t3135728299;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t3962482529;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t964245573;
// System.String[]
struct StringU5BU5D_t1281789340;
// Vuforia.WebCamProfile/ProfileData[]
struct ProfileDataU5BU5D_t362536152;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t3954782707;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t950877179;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,Vuforia.WebCamProfile/ProfileData,System.Collections.DictionaryEntry>
struct Transform_1_t3507915164;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Void
struct Void_t1185182177;
// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_t1617499438;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t1677132599;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,Vuforia.Image>
struct Dictionary_2_t3630620928;
// System.Collections.Generic.List`1<Vuforia.Image/PIXEL_FORMAT>
struct List_1_t386988881;
// Vuforia.IWebCam
struct IWebCam_t3734514901;
// Vuforia.WorldCenterTrackableBehaviour
struct WorldCenterTrackableBehaviour_t632567575;
// Vuforia.VuMarkBehaviour
struct VuMarkBehaviour_t1178230459;
// Vuforia.TrackerData/TrackableResultData[]
struct TrackableResultDataU5BU5D_t4273811049;
// Vuforia.TrackerData/VuMarkTargetData[]
struct VuMarkTargetDataU5BU5D_t4015091482;
// Vuforia.TrackerData/VuMarkTargetResultData[]
struct VuMarkTargetResultDataU5BU5D_t2157423781;
// System.Collections.Generic.LinkedList`1<Vuforia.VuforiaManager/TrackableIdPair>
struct LinkedList_1_t3066996466;
// Vuforia.LateLatchingManager
struct LateLatchingManager_t3198550161;
// Vuforia.CameraCalibrationComparer
struct CameraCalibrationComparer_t2990055837;
// Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration
struct GenericVuforiaConfiguration_t3697830469;
// Vuforia.VuforiaConfiguration/DigitalEyewearConfiguration
struct DigitalEyewearConfiguration_t546560202;
// Vuforia.VuforiaConfiguration/VideoBackgroundConfiguration
struct VideoBackgroundConfiguration_t3392414655;
// Vuforia.VuforiaConfiguration/DeviceTrackerConfiguration
struct DeviceTrackerConfiguration_t721467671;
// Vuforia.VuforiaConfiguration/SmartTerrainConfiguration
struct SmartTerrainConfiguration_t1514074484;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t190067161;
// System.Action`1<Vuforia.VuforiaBehaviour>
struct Action_1_t2324316135;
// System.Action
struct Action_t1264377477;
// System.Action`1<System.Boolean>
struct Action_1_t269755560;
// Vuforia.Trackable
struct Trackable_t2451999991;
// System.Collections.Generic.List`1<Vuforia.ITrackableEventHandler>
struct List_1_t2968050330;

extern RuntimeClass* IWebCamTexAdaptor_t3823546776_il2cpp_TypeInfo_var;
extern const uint32_t WebCam_get_DidUpdateThisFrame_m2722596423_MetadataUsageId;
extern const uint32_t WebCam_get_IsPlaying_m2513986056_MetadataUsageId;
extern const uint32_t WebCam_ComputeResampledTextureSize_m321498482_MetadataUsageId;
extern RuntimeClass* VuforiaRuntimeUtilities_t399660591_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32U5BU5D_t385246372_il2cpp_TypeInfo_var;
extern RuntimeClass* WebCamProfile_t4166408645_il2cpp_TypeInfo_var;
extern RuntimeClass* DefaultWebCamTexAdaptor_t2452636845_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Func_3_Invoke_m2574976179_RuntimeMethod_var;
extern const uint32_t WebCam__ctor_m2427464772_MetadataUsageId;
extern const uint32_t WebCam_StartCamera_m784729827_MetadataUsageId;
extern const uint32_t WebCam_StopCamera_m1511219799_MetadataUsageId;
extern RuntimeClass* VuforiaRenderer_t3433045970_il2cpp_TypeInfo_var;
extern RuntimeClass* Object_t631007953_il2cpp_TypeInfo_var;
extern RuntimeClass* Texture2D_t3840446185_il2cpp_TypeInfo_var;
extern RuntimeClass* CameraDevice_t960297568_il2cpp_TypeInfo_var;
extern const uint32_t WebCam_RenderFrame_m2496994751_MetadataUsageId;
extern const uint32_t WebCam_OnDestroy_m332336637_MetadataUsageId;
extern RuntimeClass* VuforiaWrapper_t2763746413_il2cpp_TypeInfo_var;
extern RuntimeClass* IVuforiaWrapper_t2381307640_il2cpp_TypeInfo_var;
extern RuntimeClass* TextureRenderer_t3278815845_il2cpp_TypeInfo_var;
extern const uint32_t WebCam_Update_m3572144808_MetadataUsageId;
extern RuntimeClass* U3CU3Ec_t3582055403_il2cpp_TypeInfo_var;
extern RuntimeClass* Func_3_t3440825513_il2cpp_TypeInfo_var;
extern const RuntimeMethod* U3CU3Ec_U3C_ctorU3Eb__7_0_m3175983664_RuntimeMethod_var;
extern const RuntimeMethod* Func_3__ctor_m3165450366_RuntimeMethod_var;
extern const uint32_t WebCamARController__ctor_m751483383_MetadataUsageId;
extern RuntimeClass* WebCamARController_t3718642882_il2cpp_TypeInfo_var;
extern const uint32_t WebCamARController_get_Instance_m1980552932_MetadataUsageId;
extern const uint32_t WebCamARController_RegisterARController_m2119076139_MetadataUsageId;
extern RuntimeClass* WebCam_t2427002488_il2cpp_TypeInfo_var;
extern const RuntimeMethod* UnityComponentExtensions_GetComponentsOnlyInChildren_TisCamera_t4157153871_m2275549933_RuntimeMethod_var;
extern const uint32_t WebCamARController_InitCamera_m1118184140_MetadataUsageId;
extern RuntimeClass* VuforiaConfiguration_t1763229349_il2cpp_TypeInfo_var;
extern const uint32_t WebCamARController_Awake_m4020518652_MetadataUsageId;
extern const uint32_t WebCamARController_OnLevelWasLoaded_m3407873239_MetadataUsageId;
extern const uint32_t WebCamARController_OnDestroy_m1720525424_MetadataUsageId;
extern const uint32_t WebCamARController_Update_m2251066661_MetadataUsageId;
extern RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
extern const uint32_t WebCamARController__cctor_m3035936290_MetadataUsageId;
extern const uint32_t U3CU3Ec__cctor_m4266389493_MetadataUsageId;
extern RuntimeClass* WebCamTexAdaptor_t3430449046_il2cpp_TypeInfo_var;
extern const uint32_t U3CU3Ec_U3C_ctorU3Eb__7_0_m3175983664_MetadataUsageId;
extern RuntimeClass* IPlayModeEditorUtility_t752570519_il2cpp_TypeInfo_var;
extern const uint32_t WebCamProfile__ctor_m820471938_MetadataUsageId;
extern const RuntimeMethod* Dictionary_2_TryGetValue_m1260807329_RuntimeMethod_var;
extern const uint32_t WebCamProfile_GetProfile_m3959388229_MetadataUsageId;
extern const RuntimeMethod* Dictionary_2_ContainsKey_m4190276240_RuntimeMethod_var;
extern const uint32_t WebCamProfile_ProfileAvailable_m801322015_MetadataUsageId;
extern RuntimeClass* WebCamTexture_t1514609158_il2cpp_TypeInfo_var;
extern const uint32_t WebCamTexAdaptor__ctor_m852957585_MetadataUsageId;
extern String_t* _stringLiteral2036431799;
extern const uint32_t WebCamTexAdaptor_CheckPermissions_m4247082500_MetadataUsageId;
extern RuntimeClass* Material_t340375123_il2cpp_TypeInfo_var;
extern RuntimeClass* Debug_t3317548046_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1571861241;
extern const uint32_t WireframeBehaviour_Start_m3567912005_MetadataUsageId;
extern RuntimeClass* VuforiaManager_t1653423889_il2cpp_TypeInfo_var;
extern const RuntimeMethod* GameObject_GetComponentsInChildren_TisCamera_t4157153871_m926460427_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisMeshFilter_t3523625662_m569847836_RuntimeMethod_var;
extern String_t* _stringLiteral3957048425;
extern const uint32_t WireframeBehaviour_OnRenderObject_m913596852_MetadataUsageId;
extern RuntimeClass* Matrix4x4_t1817901843_il2cpp_TypeInfo_var;
extern const uint32_t WireframeBehaviour_OnDrawGizmos_m1837418945_MetadataUsageId;
extern const RuntimeMethod* Component_GetComponent_TisTrackableBehaviour_t1113559212_m1736119408_RuntimeMethod_var;
extern const uint32_t WireframeTrackableEventHandler_Start_m3436697873_MetadataUsageId;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Component_GetComponentsInChildren_TisRenderer_t2627027031_m2673895911_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponentsInChildren_TisCollider_t1773347010_m2667952426_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponentsInChildren_TisWireframeBehaviour_t1831066704_m2022065013_RuntimeMethod_var;
extern String_t* _stringLiteral3820270571;
extern String_t* _stringLiteral3073488411;
extern const uint32_t WireframeTrackableEventHandler_OnTrackingFound_m2813716415_MetadataUsageId;
extern String_t* _stringLiteral3483481617;
extern const uint32_t WireframeTrackableEventHandler_OnTrackingLost_m1967211472_MetadataUsageId;

struct CameraU5BU5D_t1709987734;
struct WebCamDeviceU5BU5D_t4294070825;
struct Int32U5BU5D_t385246372;
struct Color32U5BU5D_t3850468773;
struct Vector3U5BU5D_t1718750761;
struct ColliderU5BU5D_t4234922487;
struct WireframeBehaviourU5BU5D_t4114094193;
struct RendererU5BU5D_t3210418286;


#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef U3CU3EC_T3582055403_H
#define U3CU3EC_T3582055403_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.WebCamARController/<>c
struct  U3CU3Ec_t3582055403  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t3582055403_StaticFields
{
public:
	// Vuforia.WebCamARController/<>c Vuforia.WebCamARController/<>c::<>9
	U3CU3Ec_t3582055403 * ___U3CU3E9_0;
	// System.Func`3<System.String,Vuforia.WebCamProfile/ProfileData,Vuforia.IWebCamTexAdaptor> Vuforia.WebCamARController/<>c::<>9__7_0
	Func_3_t3440825513 * ___U3CU3E9__7_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t3582055403_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t3582055403 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t3582055403 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t3582055403 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9_0), value);
	}

	inline static int32_t get_offset_of_U3CU3E9__7_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t3582055403_StaticFields, ___U3CU3E9__7_0_1)); }
	inline Func_3_t3440825513 * get_U3CU3E9__7_0_1() const { return ___U3CU3E9__7_0_1; }
	inline Func_3_t3440825513 ** get_address_of_U3CU3E9__7_0_1() { return &___U3CU3E9__7_0_1; }
	inline void set_U3CU3E9__7_0_1(Func_3_t3440825513 * value)
	{
		___U3CU3E9__7_0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9__7_0_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC_T3582055403_H
#ifndef ARCONTROLLER_T116632334_H
#define ARCONTROLLER_T116632334_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.ARController
struct  ARController_t116632334  : public RuntimeObject
{
public:
	// Vuforia.VuforiaBehaviour Vuforia.ARController::mVuforiaBehaviour
	VuforiaBehaviour_t2151848540 * ___mVuforiaBehaviour_0;

public:
	inline static int32_t get_offset_of_mVuforiaBehaviour_0() { return static_cast<int32_t>(offsetof(ARController_t116632334, ___mVuforiaBehaviour_0)); }
	inline VuforiaBehaviour_t2151848540 * get_mVuforiaBehaviour_0() const { return ___mVuforiaBehaviour_0; }
	inline VuforiaBehaviour_t2151848540 ** get_address_of_mVuforiaBehaviour_0() { return &___mVuforiaBehaviour_0; }
	inline void set_mVuforiaBehaviour_0(VuforiaBehaviour_t2151848540 * value)
	{
		___mVuforiaBehaviour_0 = value;
		Il2CppCodeGenWriteBarrier((&___mVuforiaBehaviour_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARCONTROLLER_T116632334_H
#ifndef WEBCAMCONFIGURATION_T1101614731_H
#define WEBCAMCONFIGURATION_T1101614731_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaConfiguration/WebCamConfiguration
struct  WebCamConfiguration_t1101614731  : public RuntimeObject
{
public:
	// System.String Vuforia.VuforiaConfiguration/WebCamConfiguration::deviceNameSetInEditor
	String_t* ___deviceNameSetInEditor_0;
	// System.Boolean Vuforia.VuforiaConfiguration/WebCamConfiguration::flipHorizontally
	bool ___flipHorizontally_1;
	// System.Boolean Vuforia.VuforiaConfiguration/WebCamConfiguration::turnOffWebCam
	bool ___turnOffWebCam_2;
	// System.Int32 Vuforia.VuforiaConfiguration/WebCamConfiguration::renderTextureLayer
	int32_t ___renderTextureLayer_3;

public:
	inline static int32_t get_offset_of_deviceNameSetInEditor_0() { return static_cast<int32_t>(offsetof(WebCamConfiguration_t1101614731, ___deviceNameSetInEditor_0)); }
	inline String_t* get_deviceNameSetInEditor_0() const { return ___deviceNameSetInEditor_0; }
	inline String_t** get_address_of_deviceNameSetInEditor_0() { return &___deviceNameSetInEditor_0; }
	inline void set_deviceNameSetInEditor_0(String_t* value)
	{
		___deviceNameSetInEditor_0 = value;
		Il2CppCodeGenWriteBarrier((&___deviceNameSetInEditor_0), value);
	}

	inline static int32_t get_offset_of_flipHorizontally_1() { return static_cast<int32_t>(offsetof(WebCamConfiguration_t1101614731, ___flipHorizontally_1)); }
	inline bool get_flipHorizontally_1() const { return ___flipHorizontally_1; }
	inline bool* get_address_of_flipHorizontally_1() { return &___flipHorizontally_1; }
	inline void set_flipHorizontally_1(bool value)
	{
		___flipHorizontally_1 = value;
	}

	inline static int32_t get_offset_of_turnOffWebCam_2() { return static_cast<int32_t>(offsetof(WebCamConfiguration_t1101614731, ___turnOffWebCam_2)); }
	inline bool get_turnOffWebCam_2() const { return ___turnOffWebCam_2; }
	inline bool* get_address_of_turnOffWebCam_2() { return &___turnOffWebCam_2; }
	inline void set_turnOffWebCam_2(bool value)
	{
		___turnOffWebCam_2 = value;
	}

	inline static int32_t get_offset_of_renderTextureLayer_3() { return static_cast<int32_t>(offsetof(WebCamConfiguration_t1101614731, ___renderTextureLayer_3)); }
	inline int32_t get_renderTextureLayer_3() const { return ___renderTextureLayer_3; }
	inline int32_t* get_address_of_renderTextureLayer_3() { return &___renderTextureLayer_3; }
	inline void set_renderTextureLayer_3(int32_t value)
	{
		___renderTextureLayer_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEBCAMCONFIGURATION_T1101614731_H
#ifndef WEBCAMTEXADAPTOR_T3430449046_H
#define WEBCAMTEXADAPTOR_T3430449046_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.WebCamTexAdaptor
struct  WebCamTexAdaptor_t3430449046  : public RuntimeObject
{
public:
	// UnityEngine.WebCamTexture Vuforia.WebCamTexAdaptor::mWebCamTexture
	WebCamTexture_t1514609158 * ___mWebCamTexture_0;
	// UnityEngine.AsyncOperation Vuforia.WebCamTexAdaptor::mCheckCameraPermissions
	AsyncOperation_t1445031843 * ___mCheckCameraPermissions_1;

public:
	inline static int32_t get_offset_of_mWebCamTexture_0() { return static_cast<int32_t>(offsetof(WebCamTexAdaptor_t3430449046, ___mWebCamTexture_0)); }
	inline WebCamTexture_t1514609158 * get_mWebCamTexture_0() const { return ___mWebCamTexture_0; }
	inline WebCamTexture_t1514609158 ** get_address_of_mWebCamTexture_0() { return &___mWebCamTexture_0; }
	inline void set_mWebCamTexture_0(WebCamTexture_t1514609158 * value)
	{
		___mWebCamTexture_0 = value;
		Il2CppCodeGenWriteBarrier((&___mWebCamTexture_0), value);
	}

	inline static int32_t get_offset_of_mCheckCameraPermissions_1() { return static_cast<int32_t>(offsetof(WebCamTexAdaptor_t3430449046, ___mCheckCameraPermissions_1)); }
	inline AsyncOperation_t1445031843 * get_mCheckCameraPermissions_1() const { return ___mCheckCameraPermissions_1; }
	inline AsyncOperation_t1445031843 ** get_address_of_mCheckCameraPermissions_1() { return &___mCheckCameraPermissions_1; }
	inline void set_mCheckCameraPermissions_1(AsyncOperation_t1445031843 * value)
	{
		___mCheckCameraPermissions_1 = value;
		Il2CppCodeGenWriteBarrier((&___mCheckCameraPermissions_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEBCAMTEXADAPTOR_T3430449046_H
#ifndef DICTIONARY_2_T3304648224_H
#define DICTIONARY_2_T3304648224_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,Vuforia.WebCamProfile/ProfileData>
struct  Dictionary_2_t3304648224  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	StringU5BU5D_t1281789340* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	ProfileDataU5BU5D_t362536152* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::hcp
	RuntimeObject* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2::serialization_info
	SerializationInfo_t950877179 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2::generation
	int32_t ___generation_14;

public:
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t3304648224, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t3304648224, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t3304648224, ___keySlots_6)); }
	inline StringU5BU5D_t1281789340* get_keySlots_6() const { return ___keySlots_6; }
	inline StringU5BU5D_t1281789340** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(StringU5BU5D_t1281789340* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t3304648224, ___valueSlots_7)); }
	inline ProfileDataU5BU5D_t362536152* get_valueSlots_7() const { return ___valueSlots_7; }
	inline ProfileDataU5BU5D_t362536152** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(ProfileDataU5BU5D_t362536152* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t3304648224, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t3304648224, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t3304648224, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t3304648224, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t3304648224, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t3304648224, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t3304648224, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t3304648224_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t3507915164 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t3304648224_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t3507915164 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t3507915164 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t3507915164 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T3304648224_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::length
	int32_t ___length_0;
	// System.Char System.String::start_char
	Il2CppChar ___start_char_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(String_t, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_start_char_1() { return static_cast<int32_t>(offsetof(String_t, ___start_char_1)); }
	inline Il2CppChar get_start_char_1() const { return ___start_char_1; }
	inline Il2CppChar* get_address_of_start_char_1() { return &___start_char_1; }
	inline void set_start_char_1(Il2CppChar value)
	{
		___start_char_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_2;
	// System.Char[] System.String::WhiteChars
	CharU5BU5D_t3528271667* ___WhiteChars_3;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_2)); }
	inline String_t* get_Empty_2() const { return ___Empty_2; }
	inline String_t** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(String_t* value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}

	inline static int32_t get_offset_of_WhiteChars_3() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___WhiteChars_3)); }
	inline CharU5BU5D_t3528271667* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t3528271667** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t3528271667* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef TEXTURERENDERER_T3278815845_H
#define TEXTURERENDERER_T3278815845_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.TextureRenderer
struct  TextureRenderer_t3278815845  : public RuntimeObject
{
public:
	// UnityEngine.Camera Vuforia.TextureRenderer::mTextureBufferCamera
	Camera_t4157153871 * ___mTextureBufferCamera_0;
	// System.Int32 Vuforia.TextureRenderer::mTextureWidth
	int32_t ___mTextureWidth_1;
	// System.Int32 Vuforia.TextureRenderer::mTextureHeight
	int32_t ___mTextureHeight_2;

public:
	inline static int32_t get_offset_of_mTextureBufferCamera_0() { return static_cast<int32_t>(offsetof(TextureRenderer_t3278815845, ___mTextureBufferCamera_0)); }
	inline Camera_t4157153871 * get_mTextureBufferCamera_0() const { return ___mTextureBufferCamera_0; }
	inline Camera_t4157153871 ** get_address_of_mTextureBufferCamera_0() { return &___mTextureBufferCamera_0; }
	inline void set_mTextureBufferCamera_0(Camera_t4157153871 * value)
	{
		___mTextureBufferCamera_0 = value;
		Il2CppCodeGenWriteBarrier((&___mTextureBufferCamera_0), value);
	}

	inline static int32_t get_offset_of_mTextureWidth_1() { return static_cast<int32_t>(offsetof(TextureRenderer_t3278815845, ___mTextureWidth_1)); }
	inline int32_t get_mTextureWidth_1() const { return ___mTextureWidth_1; }
	inline int32_t* get_address_of_mTextureWidth_1() { return &___mTextureWidth_1; }
	inline void set_mTextureWidth_1(int32_t value)
	{
		___mTextureWidth_1 = value;
	}

	inline static int32_t get_offset_of_mTextureHeight_2() { return static_cast<int32_t>(offsetof(TextureRenderer_t3278815845, ___mTextureHeight_2)); }
	inline int32_t get_mTextureHeight_2() const { return ___mTextureHeight_2; }
	inline int32_t* get_address_of_mTextureHeight_2() { return &___mTextureHeight_2; }
	inline void set_mTextureHeight_2(int32_t value)
	{
		___mTextureHeight_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTURERENDERER_T3278815845_H
#ifndef YIELDINSTRUCTION_T403091072_H
#define YIELDINSTRUCTION_T403091072_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.YieldInstruction
struct  YieldInstruction_t403091072  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t403091072_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t403091072_marshaled_com
{
};
#endif // YIELDINSTRUCTION_T403091072_H
#ifndef WSAUNITYPLAYER_T3135728299_H
#define WSAUNITYPLAYER_T3135728299_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.WSAUnityPlayer
struct  WSAUnityPlayer_t3135728299  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WSAUNITYPLAYER_T3135728299_H
#ifndef QUATERNION_T2301928331_H
#define QUATERNION_T2301928331_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Quaternion
struct  Quaternion_t2301928331 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t2301928331_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t2301928331  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t2301928331  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t2301928331 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t2301928331  value)
	{
		___identityQuaternion_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUATERNION_T2301928331_H
#ifndef VECTOR3_T3722313464_H
#define VECTOR3_T3722313464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t3722313464 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_1;
	// System.Single UnityEngine.Vector3::y
	float ___y_2;
	// System.Single UnityEngine.Vector3::z
	float ___z_3;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}
};

struct Vector3_t3722313464_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t3722313464  ___zeroVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t3722313464  ___oneVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t3722313464  ___upVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t3722313464  ___downVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t3722313464  ___leftVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t3722313464  ___rightVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t3722313464  ___forwardVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t3722313464  ___backVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t3722313464  ___positiveInfinityVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t3722313464  ___negativeInfinityVector_13;

public:
	inline static int32_t get_offset_of_zeroVector_4() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___zeroVector_4)); }
	inline Vector3_t3722313464  get_zeroVector_4() const { return ___zeroVector_4; }
	inline Vector3_t3722313464 * get_address_of_zeroVector_4() { return &___zeroVector_4; }
	inline void set_zeroVector_4(Vector3_t3722313464  value)
	{
		___zeroVector_4 = value;
	}

	inline static int32_t get_offset_of_oneVector_5() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___oneVector_5)); }
	inline Vector3_t3722313464  get_oneVector_5() const { return ___oneVector_5; }
	inline Vector3_t3722313464 * get_address_of_oneVector_5() { return &___oneVector_5; }
	inline void set_oneVector_5(Vector3_t3722313464  value)
	{
		___oneVector_5 = value;
	}

	inline static int32_t get_offset_of_upVector_6() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___upVector_6)); }
	inline Vector3_t3722313464  get_upVector_6() const { return ___upVector_6; }
	inline Vector3_t3722313464 * get_address_of_upVector_6() { return &___upVector_6; }
	inline void set_upVector_6(Vector3_t3722313464  value)
	{
		___upVector_6 = value;
	}

	inline static int32_t get_offset_of_downVector_7() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___downVector_7)); }
	inline Vector3_t3722313464  get_downVector_7() const { return ___downVector_7; }
	inline Vector3_t3722313464 * get_address_of_downVector_7() { return &___downVector_7; }
	inline void set_downVector_7(Vector3_t3722313464  value)
	{
		___downVector_7 = value;
	}

	inline static int32_t get_offset_of_leftVector_8() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___leftVector_8)); }
	inline Vector3_t3722313464  get_leftVector_8() const { return ___leftVector_8; }
	inline Vector3_t3722313464 * get_address_of_leftVector_8() { return &___leftVector_8; }
	inline void set_leftVector_8(Vector3_t3722313464  value)
	{
		___leftVector_8 = value;
	}

	inline static int32_t get_offset_of_rightVector_9() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___rightVector_9)); }
	inline Vector3_t3722313464  get_rightVector_9() const { return ___rightVector_9; }
	inline Vector3_t3722313464 * get_address_of_rightVector_9() { return &___rightVector_9; }
	inline void set_rightVector_9(Vector3_t3722313464  value)
	{
		___rightVector_9 = value;
	}

	inline static int32_t get_offset_of_forwardVector_10() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___forwardVector_10)); }
	inline Vector3_t3722313464  get_forwardVector_10() const { return ___forwardVector_10; }
	inline Vector3_t3722313464 * get_address_of_forwardVector_10() { return &___forwardVector_10; }
	inline void set_forwardVector_10(Vector3_t3722313464  value)
	{
		___forwardVector_10 = value;
	}

	inline static int32_t get_offset_of_backVector_11() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___backVector_11)); }
	inline Vector3_t3722313464  get_backVector_11() const { return ___backVector_11; }
	inline Vector3_t3722313464 * get_address_of_backVector_11() { return &___backVector_11; }
	inline void set_backVector_11(Vector3_t3722313464  value)
	{
		___backVector_11 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_12() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___positiveInfinityVector_12)); }
	inline Vector3_t3722313464  get_positiveInfinityVector_12() const { return ___positiveInfinityVector_12; }
	inline Vector3_t3722313464 * get_address_of_positiveInfinityVector_12() { return &___positiveInfinityVector_12; }
	inline void set_positiveInfinityVector_12(Vector3_t3722313464  value)
	{
		___positiveInfinityVector_12 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___negativeInfinityVector_13)); }
	inline Vector3_t3722313464  get_negativeInfinityVector_13() const { return ___negativeInfinityVector_13; }
	inline Vector3_t3722313464 * get_address_of_negativeInfinityVector_13() { return &___negativeInfinityVector_13; }
	inline void set_negativeInfinityVector_13(Vector3_t3722313464  value)
	{
		___negativeInfinityVector_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T3722313464_H
#ifndef WEBCAMARCONTROLLER_T3718642882_H
#define WEBCAMARCONTROLLER_T3718642882_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.WebCamARController
struct  WebCamARController_t3718642882  : public ARController_t116632334
{
public:
	// System.Int32 Vuforia.WebCamARController::RenderTextureLayer
	int32_t ___RenderTextureLayer_1;
	// System.String Vuforia.WebCamARController::mDeviceNameSetInEditor
	String_t* ___mDeviceNameSetInEditor_2;
	// System.Boolean Vuforia.WebCamARController::mFlipHorizontally
	bool ___mFlipHorizontally_3;
	// Vuforia.WebCam Vuforia.WebCamARController::mWebCamImpl
	WebCam_t2427002488 * ___mWebCamImpl_4;
	// System.Func`3<System.String,Vuforia.WebCamProfile/ProfileData,Vuforia.IWebCamTexAdaptor> Vuforia.WebCamARController::mWebCamTexAdaptorProvider
	Func_3_t3440825513 * ___mWebCamTexAdaptorProvider_5;

public:
	inline static int32_t get_offset_of_RenderTextureLayer_1() { return static_cast<int32_t>(offsetof(WebCamARController_t3718642882, ___RenderTextureLayer_1)); }
	inline int32_t get_RenderTextureLayer_1() const { return ___RenderTextureLayer_1; }
	inline int32_t* get_address_of_RenderTextureLayer_1() { return &___RenderTextureLayer_1; }
	inline void set_RenderTextureLayer_1(int32_t value)
	{
		___RenderTextureLayer_1 = value;
	}

	inline static int32_t get_offset_of_mDeviceNameSetInEditor_2() { return static_cast<int32_t>(offsetof(WebCamARController_t3718642882, ___mDeviceNameSetInEditor_2)); }
	inline String_t* get_mDeviceNameSetInEditor_2() const { return ___mDeviceNameSetInEditor_2; }
	inline String_t** get_address_of_mDeviceNameSetInEditor_2() { return &___mDeviceNameSetInEditor_2; }
	inline void set_mDeviceNameSetInEditor_2(String_t* value)
	{
		___mDeviceNameSetInEditor_2 = value;
		Il2CppCodeGenWriteBarrier((&___mDeviceNameSetInEditor_2), value);
	}

	inline static int32_t get_offset_of_mFlipHorizontally_3() { return static_cast<int32_t>(offsetof(WebCamARController_t3718642882, ___mFlipHorizontally_3)); }
	inline bool get_mFlipHorizontally_3() const { return ___mFlipHorizontally_3; }
	inline bool* get_address_of_mFlipHorizontally_3() { return &___mFlipHorizontally_3; }
	inline void set_mFlipHorizontally_3(bool value)
	{
		___mFlipHorizontally_3 = value;
	}

	inline static int32_t get_offset_of_mWebCamImpl_4() { return static_cast<int32_t>(offsetof(WebCamARController_t3718642882, ___mWebCamImpl_4)); }
	inline WebCam_t2427002488 * get_mWebCamImpl_4() const { return ___mWebCamImpl_4; }
	inline WebCam_t2427002488 ** get_address_of_mWebCamImpl_4() { return &___mWebCamImpl_4; }
	inline void set_mWebCamImpl_4(WebCam_t2427002488 * value)
	{
		___mWebCamImpl_4 = value;
		Il2CppCodeGenWriteBarrier((&___mWebCamImpl_4), value);
	}

	inline static int32_t get_offset_of_mWebCamTexAdaptorProvider_5() { return static_cast<int32_t>(offsetof(WebCamARController_t3718642882, ___mWebCamTexAdaptorProvider_5)); }
	inline Func_3_t3440825513 * get_mWebCamTexAdaptorProvider_5() const { return ___mWebCamTexAdaptorProvider_5; }
	inline Func_3_t3440825513 ** get_address_of_mWebCamTexAdaptorProvider_5() { return &___mWebCamTexAdaptorProvider_5; }
	inline void set_mWebCamTexAdaptorProvider_5(Func_3_t3440825513 * value)
	{
		___mWebCamTexAdaptorProvider_5 = value;
		Il2CppCodeGenWriteBarrier((&___mWebCamTexAdaptorProvider_5), value);
	}
};

struct WebCamARController_t3718642882_StaticFields
{
public:
	// Vuforia.WebCamARController Vuforia.WebCamARController::mInstance
	WebCamARController_t3718642882 * ___mInstance_6;
	// System.Object Vuforia.WebCamARController::mPadlock
	RuntimeObject * ___mPadlock_7;

public:
	inline static int32_t get_offset_of_mInstance_6() { return static_cast<int32_t>(offsetof(WebCamARController_t3718642882_StaticFields, ___mInstance_6)); }
	inline WebCamARController_t3718642882 * get_mInstance_6() const { return ___mInstance_6; }
	inline WebCamARController_t3718642882 ** get_address_of_mInstance_6() { return &___mInstance_6; }
	inline void set_mInstance_6(WebCamARController_t3718642882 * value)
	{
		___mInstance_6 = value;
		Il2CppCodeGenWriteBarrier((&___mInstance_6), value);
	}

	inline static int32_t get_offset_of_mPadlock_7() { return static_cast<int32_t>(offsetof(WebCamARController_t3718642882_StaticFields, ___mPadlock_7)); }
	inline RuntimeObject * get_mPadlock_7() const { return ___mPadlock_7; }
	inline RuntimeObject ** get_address_of_mPadlock_7() { return &___mPadlock_7; }
	inline void set_mPadlock_7(RuntimeObject * value)
	{
		___mPadlock_7 = value;
		Il2CppCodeGenWriteBarrier((&___mPadlock_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEBCAMARCONTROLLER_T3718642882_H
#ifndef COLOR_T2555686324_H
#define COLOR_T2555686324_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color
struct  Color_t2555686324 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR_T2555686324_H
#ifndef MATRIX4X4_T1817901843_H
#define MATRIX4X4_T1817901843_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Matrix4x4
struct  Matrix4x4_t1817901843 
{
public:
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;

public:
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m00_0)); }
	inline float get_m00_0() const { return ___m00_0; }
	inline float* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(float value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m10_1() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m10_1)); }
	inline float get_m10_1() const { return ___m10_1; }
	inline float* get_address_of_m10_1() { return &___m10_1; }
	inline void set_m10_1(float value)
	{
		___m10_1 = value;
	}

	inline static int32_t get_offset_of_m20_2() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m20_2)); }
	inline float get_m20_2() const { return ___m20_2; }
	inline float* get_address_of_m20_2() { return &___m20_2; }
	inline void set_m20_2(float value)
	{
		___m20_2 = value;
	}

	inline static int32_t get_offset_of_m30_3() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m30_3)); }
	inline float get_m30_3() const { return ___m30_3; }
	inline float* get_address_of_m30_3() { return &___m30_3; }
	inline void set_m30_3(float value)
	{
		___m30_3 = value;
	}

	inline static int32_t get_offset_of_m01_4() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m01_4)); }
	inline float get_m01_4() const { return ___m01_4; }
	inline float* get_address_of_m01_4() { return &___m01_4; }
	inline void set_m01_4(float value)
	{
		___m01_4 = value;
	}

	inline static int32_t get_offset_of_m11_5() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m11_5)); }
	inline float get_m11_5() const { return ___m11_5; }
	inline float* get_address_of_m11_5() { return &___m11_5; }
	inline void set_m11_5(float value)
	{
		___m11_5 = value;
	}

	inline static int32_t get_offset_of_m21_6() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m21_6)); }
	inline float get_m21_6() const { return ___m21_6; }
	inline float* get_address_of_m21_6() { return &___m21_6; }
	inline void set_m21_6(float value)
	{
		___m21_6 = value;
	}

	inline static int32_t get_offset_of_m31_7() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m31_7)); }
	inline float get_m31_7() const { return ___m31_7; }
	inline float* get_address_of_m31_7() { return &___m31_7; }
	inline void set_m31_7(float value)
	{
		___m31_7 = value;
	}

	inline static int32_t get_offset_of_m02_8() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m02_8)); }
	inline float get_m02_8() const { return ___m02_8; }
	inline float* get_address_of_m02_8() { return &___m02_8; }
	inline void set_m02_8(float value)
	{
		___m02_8 = value;
	}

	inline static int32_t get_offset_of_m12_9() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m12_9)); }
	inline float get_m12_9() const { return ___m12_9; }
	inline float* get_address_of_m12_9() { return &___m12_9; }
	inline void set_m12_9(float value)
	{
		___m12_9 = value;
	}

	inline static int32_t get_offset_of_m22_10() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m22_10)); }
	inline float get_m22_10() const { return ___m22_10; }
	inline float* get_address_of_m22_10() { return &___m22_10; }
	inline void set_m22_10(float value)
	{
		___m22_10 = value;
	}

	inline static int32_t get_offset_of_m32_11() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m32_11)); }
	inline float get_m32_11() const { return ___m32_11; }
	inline float* get_address_of_m32_11() { return &___m32_11; }
	inline void set_m32_11(float value)
	{
		___m32_11 = value;
	}

	inline static int32_t get_offset_of_m03_12() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m03_12)); }
	inline float get_m03_12() const { return ___m03_12; }
	inline float* get_address_of_m03_12() { return &___m03_12; }
	inline void set_m03_12(float value)
	{
		___m03_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m23_14() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m23_14)); }
	inline float get_m23_14() const { return ___m23_14; }
	inline float* get_address_of_m23_14() { return &___m23_14; }
	inline void set_m23_14(float value)
	{
		___m23_14 = value;
	}

	inline static int32_t get_offset_of_m33_15() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m33_15)); }
	inline float get_m33_15() const { return ___m33_15; }
	inline float* get_address_of_m33_15() { return &___m33_15; }
	inline void set_m33_15(float value)
	{
		___m33_15 = value;
	}
};

struct Matrix4x4_t1817901843_StaticFields
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_t1817901843  ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_t1817901843  ___identityMatrix_17;

public:
	inline static int32_t get_offset_of_zeroMatrix_16() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843_StaticFields, ___zeroMatrix_16)); }
	inline Matrix4x4_t1817901843  get_zeroMatrix_16() const { return ___zeroMatrix_16; }
	inline Matrix4x4_t1817901843 * get_address_of_zeroMatrix_16() { return &___zeroMatrix_16; }
	inline void set_zeroMatrix_16(Matrix4x4_t1817901843  value)
	{
		___zeroMatrix_16 = value;
	}

	inline static int32_t get_offset_of_identityMatrix_17() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843_StaticFields, ___identityMatrix_17)); }
	inline Matrix4x4_t1817901843  get_identityMatrix_17() const { return ___identityMatrix_17; }
	inline Matrix4x4_t1817901843 * get_address_of_identityMatrix_17() { return &___identityMatrix_17; }
	inline void set_identityMatrix_17(Matrix4x4_t1817901843  value)
	{
		___identityMatrix_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATRIX4X4_T1817901843_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3528271667* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3528271667* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3528271667** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3528271667* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef AUTOROTATIONSTATE_T2150317116_H
#define AUTOROTATIONSTATE_T2150317116_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaManager/AutoRotationState
struct  AutoRotationState_t2150317116 
{
public:
	// System.Boolean Vuforia.VuforiaManager/AutoRotationState::setOnPause
	bool ___setOnPause_0;
	// System.Boolean Vuforia.VuforiaManager/AutoRotationState::autorotateToPortrait
	bool ___autorotateToPortrait_1;
	// System.Boolean Vuforia.VuforiaManager/AutoRotationState::autorotateToPortraitUpsideDown
	bool ___autorotateToPortraitUpsideDown_2;
	// System.Boolean Vuforia.VuforiaManager/AutoRotationState::autorotateToLandscapeLeft
	bool ___autorotateToLandscapeLeft_3;
	// System.Boolean Vuforia.VuforiaManager/AutoRotationState::autorotateToLandscapeRight
	bool ___autorotateToLandscapeRight_4;

public:
	inline static int32_t get_offset_of_setOnPause_0() { return static_cast<int32_t>(offsetof(AutoRotationState_t2150317116, ___setOnPause_0)); }
	inline bool get_setOnPause_0() const { return ___setOnPause_0; }
	inline bool* get_address_of_setOnPause_0() { return &___setOnPause_0; }
	inline void set_setOnPause_0(bool value)
	{
		___setOnPause_0 = value;
	}

	inline static int32_t get_offset_of_autorotateToPortrait_1() { return static_cast<int32_t>(offsetof(AutoRotationState_t2150317116, ___autorotateToPortrait_1)); }
	inline bool get_autorotateToPortrait_1() const { return ___autorotateToPortrait_1; }
	inline bool* get_address_of_autorotateToPortrait_1() { return &___autorotateToPortrait_1; }
	inline void set_autorotateToPortrait_1(bool value)
	{
		___autorotateToPortrait_1 = value;
	}

	inline static int32_t get_offset_of_autorotateToPortraitUpsideDown_2() { return static_cast<int32_t>(offsetof(AutoRotationState_t2150317116, ___autorotateToPortraitUpsideDown_2)); }
	inline bool get_autorotateToPortraitUpsideDown_2() const { return ___autorotateToPortraitUpsideDown_2; }
	inline bool* get_address_of_autorotateToPortraitUpsideDown_2() { return &___autorotateToPortraitUpsideDown_2; }
	inline void set_autorotateToPortraitUpsideDown_2(bool value)
	{
		___autorotateToPortraitUpsideDown_2 = value;
	}

	inline static int32_t get_offset_of_autorotateToLandscapeLeft_3() { return static_cast<int32_t>(offsetof(AutoRotationState_t2150317116, ___autorotateToLandscapeLeft_3)); }
	inline bool get_autorotateToLandscapeLeft_3() const { return ___autorotateToLandscapeLeft_3; }
	inline bool* get_address_of_autorotateToLandscapeLeft_3() { return &___autorotateToLandscapeLeft_3; }
	inline void set_autorotateToLandscapeLeft_3(bool value)
	{
		___autorotateToLandscapeLeft_3 = value;
	}

	inline static int32_t get_offset_of_autorotateToLandscapeRight_4() { return static_cast<int32_t>(offsetof(AutoRotationState_t2150317116, ___autorotateToLandscapeRight_4)); }
	inline bool get_autorotateToLandscapeRight_4() const { return ___autorotateToLandscapeRight_4; }
	inline bool* get_address_of_autorotateToLandscapeRight_4() { return &___autorotateToLandscapeRight_4; }
	inline void set_autorotateToLandscapeRight_4(bool value)
	{
		___autorotateToLandscapeRight_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Vuforia.VuforiaManager/AutoRotationState
struct AutoRotationState_t2150317116_marshaled_pinvoke
{
	int32_t ___setOnPause_0;
	int32_t ___autorotateToPortrait_1;
	int32_t ___autorotateToPortraitUpsideDown_2;
	int32_t ___autorotateToLandscapeLeft_3;
	int32_t ___autorotateToLandscapeRight_4;
};
// Native definition for COM marshalling of Vuforia.VuforiaManager/AutoRotationState
struct AutoRotationState_t2150317116_marshaled_com
{
	int32_t ___setOnPause_0;
	int32_t ___autorotateToPortrait_1;
	int32_t ___autorotateToPortraitUpsideDown_2;
	int32_t ___autorotateToLandscapeLeft_3;
	int32_t ___autorotateToLandscapeRight_4;
};
#endif // AUTOROTATIONSTATE_T2150317116_H
#ifndef TIMESPAN_T881159249_H
#define TIMESPAN_T881159249_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeSpan
struct  TimeSpan_t881159249 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_3;

public:
	inline static int32_t get_offset_of__ticks_3() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249, ____ticks_3)); }
	inline int64_t get__ticks_3() const { return ____ticks_3; }
	inline int64_t* get_address_of__ticks_3() { return &____ticks_3; }
	inline void set__ticks_3(int64_t value)
	{
		____ticks_3 = value;
	}
};

struct TimeSpan_t881159249_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t881159249  ___MaxValue_0;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t881159249  ___MinValue_1;
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t881159249  ___Zero_2;

public:
	inline static int32_t get_offset_of_MaxValue_0() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___MaxValue_0)); }
	inline TimeSpan_t881159249  get_MaxValue_0() const { return ___MaxValue_0; }
	inline TimeSpan_t881159249 * get_address_of_MaxValue_0() { return &___MaxValue_0; }
	inline void set_MaxValue_0(TimeSpan_t881159249  value)
	{
		___MaxValue_0 = value;
	}

	inline static int32_t get_offset_of_MinValue_1() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___MinValue_1)); }
	inline TimeSpan_t881159249  get_MinValue_1() const { return ___MinValue_1; }
	inline TimeSpan_t881159249 * get_address_of_MinValue_1() { return &___MinValue_1; }
	inline void set_MinValue_1(TimeSpan_t881159249  value)
	{
		___MinValue_1 = value;
	}

	inline static int32_t get_offset_of_Zero_2() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___Zero_2)); }
	inline TimeSpan_t881159249  get_Zero_2() const { return ___Zero_2; }
	inline TimeSpan_t881159249 * get_address_of_Zero_2() { return &___Zero_2; }
	inline void set_Zero_2(TimeSpan_t881159249  value)
	{
		___Zero_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMESPAN_T881159249_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef VIDEOMODEDATA_T2066817255_H
#define VIDEOMODEDATA_T2066817255_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.CameraDevice/VideoModeData
#pragma pack(push, tp, 1)
struct  VideoModeData_t2066817255 
{
public:
	// System.Int32 Vuforia.CameraDevice/VideoModeData::width
	int32_t ___width_0;
	// System.Int32 Vuforia.CameraDevice/VideoModeData::height
	int32_t ___height_1;
	// System.Single Vuforia.CameraDevice/VideoModeData::frameRate
	float ___frameRate_2;
	// System.Int32 Vuforia.CameraDevice/VideoModeData::unused
	int32_t ___unused_3;

public:
	inline static int32_t get_offset_of_width_0() { return static_cast<int32_t>(offsetof(VideoModeData_t2066817255, ___width_0)); }
	inline int32_t get_width_0() const { return ___width_0; }
	inline int32_t* get_address_of_width_0() { return &___width_0; }
	inline void set_width_0(int32_t value)
	{
		___width_0 = value;
	}

	inline static int32_t get_offset_of_height_1() { return static_cast<int32_t>(offsetof(VideoModeData_t2066817255, ___height_1)); }
	inline int32_t get_height_1() const { return ___height_1; }
	inline int32_t* get_address_of_height_1() { return &___height_1; }
	inline void set_height_1(int32_t value)
	{
		___height_1 = value;
	}

	inline static int32_t get_offset_of_frameRate_2() { return static_cast<int32_t>(offsetof(VideoModeData_t2066817255, ___frameRate_2)); }
	inline float get_frameRate_2() const { return ___frameRate_2; }
	inline float* get_address_of_frameRate_2() { return &___frameRate_2; }
	inline void set_frameRate_2(float value)
	{
		___frameRate_2 = value;
	}

	inline static int32_t get_offset_of_unused_3() { return static_cast<int32_t>(offsetof(VideoModeData_t2066817255, ___unused_3)); }
	inline int32_t get_unused_3() const { return ___unused_3; }
	inline int32_t* get_address_of_unused_3() { return &___unused_3; }
	inline void set_unused_3(int32_t value)
	{
		___unused_3 = value;
	}
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIDEOMODEDATA_T2066817255_H
#ifndef VECTOR4_T3319028937_H
#define VECTOR4_T3319028937_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector4
struct  Vector4_t3319028937 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_t3319028937, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_t3319028937, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_t3319028937, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_t3319028937, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_t3319028937_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t3319028937  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t3319028937  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t3319028937  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t3319028937  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_t3319028937_StaticFields, ___zeroVector_5)); }
	inline Vector4_t3319028937  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_t3319028937 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_t3319028937  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_t3319028937_StaticFields, ___oneVector_6)); }
	inline Vector4_t3319028937  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_t3319028937 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_t3319028937  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_t3319028937_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_t3319028937  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_t3319028937 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_t3319028937  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_t3319028937_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_t3319028937  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_t3319028937 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_t3319028937  value)
	{
		___negativeInfinityVector_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR4_T3319028937_H
#ifndef BOOLEAN_T97287965_H
#define BOOLEAN_T97287965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t97287965 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t97287965, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t97287965_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T97287965_H
#ifndef VEC2I_T3527036565_H
#define VEC2I_T3527036565_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaRenderer/Vec2I
#pragma pack(push, tp, 1)
struct  Vec2I_t3527036565 
{
public:
	// System.Int32 Vuforia.VuforiaRenderer/Vec2I::x
	int32_t ___x_0;
	// System.Int32 Vuforia.VuforiaRenderer/Vec2I::y
	int32_t ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vec2I_t3527036565, ___x_0)); }
	inline int32_t get_x_0() const { return ___x_0; }
	inline int32_t* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(int32_t value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vec2I_t3527036565, ___y_1)); }
	inline int32_t get_y_1() const { return ___y_1; }
	inline int32_t* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(int32_t value)
	{
		___y_1 = value;
	}
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VEC2I_T3527036565_H
#ifndef VOID_T1185182177_H
#define VOID_T1185182177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1185182177 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
#ifndef RECT_T2360479859_H
#define RECT_T2360479859_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rect
struct  Rect_t2360479859 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECT_T2360479859_H
#ifndef INT32_T2950945753_H
#define INT32_T2950945753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2950945753 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t2950945753, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T2950945753_H
#ifndef COLOR32_T2600501292_H
#define COLOR32_T2600501292_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color32
struct  Color32_t2600501292 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_rgba_0() { return static_cast<int32_t>(offsetof(Color32_t2600501292, ___rgba_0)); }
	inline int32_t get_rgba_0() const { return ___rgba_0; }
	inline int32_t* get_address_of_rgba_0() { return &___rgba_0; }
	inline void set_rgba_0(int32_t value)
	{
		___rgba_0 = value;
	}

	inline static int32_t get_offset_of_r_1() { return static_cast<int32_t>(offsetof(Color32_t2600501292, ___r_1)); }
	inline uint8_t get_r_1() const { return ___r_1; }
	inline uint8_t* get_address_of_r_1() { return &___r_1; }
	inline void set_r_1(uint8_t value)
	{
		___r_1 = value;
	}

	inline static int32_t get_offset_of_g_2() { return static_cast<int32_t>(offsetof(Color32_t2600501292, ___g_2)); }
	inline uint8_t get_g_2() const { return ___g_2; }
	inline uint8_t* get_address_of_g_2() { return &___g_2; }
	inline void set_g_2(uint8_t value)
	{
		___g_2 = value;
	}

	inline static int32_t get_offset_of_b_3() { return static_cast<int32_t>(offsetof(Color32_t2600501292, ___b_3)); }
	inline uint8_t get_b_3() const { return ___b_3; }
	inline uint8_t* get_address_of_b_3() { return &___b_3; }
	inline void set_b_3(uint8_t value)
	{
		___b_3 = value;
	}

	inline static int32_t get_offset_of_a_4() { return static_cast<int32_t>(offsetof(Color32_t2600501292, ___a_4)); }
	inline uint8_t get_a_4() const { return ___a_4; }
	inline uint8_t* get_address_of_a_4() { return &___a_4; }
	inline void set_a_4(uint8_t value)
	{
		___a_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR32_T2600501292_H
#ifndef WEBCAMDEVICE_T1322781432_H
#define WEBCAMDEVICE_T1322781432_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.WebCamDevice
struct  WebCamDevice_t1322781432 
{
public:
	// System.String UnityEngine.WebCamDevice::m_Name
	String_t* ___m_Name_0;
	// System.Int32 UnityEngine.WebCamDevice::m_Flags
	int32_t ___m_Flags_1;

public:
	inline static int32_t get_offset_of_m_Name_0() { return static_cast<int32_t>(offsetof(WebCamDevice_t1322781432, ___m_Name_0)); }
	inline String_t* get_m_Name_0() const { return ___m_Name_0; }
	inline String_t** get_address_of_m_Name_0() { return &___m_Name_0; }
	inline void set_m_Name_0(String_t* value)
	{
		___m_Name_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Name_0), value);
	}

	inline static int32_t get_offset_of_m_Flags_1() { return static_cast<int32_t>(offsetof(WebCamDevice_t1322781432, ___m_Flags_1)); }
	inline int32_t get_m_Flags_1() const { return ___m_Flags_1; }
	inline int32_t* get_address_of_m_Flags_1() { return &___m_Flags_1; }
	inline void set_m_Flags_1(int32_t value)
	{
		___m_Flags_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.WebCamDevice
struct WebCamDevice_t1322781432_marshaled_pinvoke
{
	char* ___m_Name_0;
	int32_t ___m_Flags_1;
};
// Native definition for COM marshalling of UnityEngine.WebCamDevice
struct WebCamDevice_t1322781432_marshaled_com
{
	Il2CppChar* ___m_Name_0;
	int32_t ___m_Flags_1;
};
#endif // WEBCAMDEVICE_T1322781432_H
#ifndef SINGLE_T1397266774_H
#define SINGLE_T1397266774_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t1397266774 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_7;

public:
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_t1397266774, ___m_value_7)); }
	inline float get_m_value_7() const { return ___m_value_7; }
	inline float* get_address_of_m_value_7() { return &___m_value_7; }
	inline void set_m_value_7(float value)
	{
		___m_value_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T1397266774_H
#ifndef TEXTUREFORMAT_T2701165832_H
#define TEXTUREFORMAT_T2701165832_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TextureFormat
struct  TextureFormat_t2701165832 
{
public:
	// System.Int32 UnityEngine.TextureFormat::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TextureFormat_t2701165832, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTUREFORMAT_T2701165832_H
#ifndef STATUS_T1100905814_H
#define STATUS_T1100905814_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.TrackableBehaviour/Status
struct  Status_t1100905814 
{
public:
	// System.Int32 Vuforia.TrackableBehaviour/Status::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Status_t1100905814, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STATUS_T1100905814_H
#ifndef PROFILEDATA_T3519391925_H
#define PROFILEDATA_T3519391925_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.WebCamProfile/ProfileData
struct  ProfileData_t3519391925 
{
public:
	// Vuforia.VuforiaRenderer/Vec2I Vuforia.WebCamProfile/ProfileData::RequestedTextureSize
	Vec2I_t3527036565  ___RequestedTextureSize_0;
	// Vuforia.VuforiaRenderer/Vec2I Vuforia.WebCamProfile/ProfileData::ResampledTextureSize
	Vec2I_t3527036565  ___ResampledTextureSize_1;
	// System.Int32 Vuforia.WebCamProfile/ProfileData::RequestedFPS
	int32_t ___RequestedFPS_2;

public:
	inline static int32_t get_offset_of_RequestedTextureSize_0() { return static_cast<int32_t>(offsetof(ProfileData_t3519391925, ___RequestedTextureSize_0)); }
	inline Vec2I_t3527036565  get_RequestedTextureSize_0() const { return ___RequestedTextureSize_0; }
	inline Vec2I_t3527036565 * get_address_of_RequestedTextureSize_0() { return &___RequestedTextureSize_0; }
	inline void set_RequestedTextureSize_0(Vec2I_t3527036565  value)
	{
		___RequestedTextureSize_0 = value;
	}

	inline static int32_t get_offset_of_ResampledTextureSize_1() { return static_cast<int32_t>(offsetof(ProfileData_t3519391925, ___ResampledTextureSize_1)); }
	inline Vec2I_t3527036565  get_ResampledTextureSize_1() const { return ___ResampledTextureSize_1; }
	inline Vec2I_t3527036565 * get_address_of_ResampledTextureSize_1() { return &___ResampledTextureSize_1; }
	inline void set_ResampledTextureSize_1(Vec2I_t3527036565  value)
	{
		___ResampledTextureSize_1 = value;
	}

	inline static int32_t get_offset_of_RequestedFPS_2() { return static_cast<int32_t>(offsetof(ProfileData_t3519391925, ___RequestedFPS_2)); }
	inline int32_t get_RequestedFPS_2() const { return ___RequestedFPS_2; }
	inline int32_t* get_address_of_RequestedFPS_2() { return &___RequestedFPS_2; }
	inline void set_RequestedFPS_2(int32_t value)
	{
		___RequestedFPS_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROFILEDATA_T3519391925_H
#ifndef INITERROR_T3420749710_H
#define INITERROR_T3420749710_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaUnity/InitError
struct  InitError_t3420749710 
{
public:
	// System.Int32 Vuforia.VuforiaUnity/InitError::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(InitError_t3420749710, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INITERROR_T3420749710_H
#ifndef ASYNCOPERATION_T1445031843_H
#define ASYNCOPERATION_T1445031843_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AsyncOperation
struct  AsyncOperation_t1445031843  : public YieldInstruction_t403091072
{
public:
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_t1617499438 * ___m_completeCallback_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AsyncOperation_t1445031843, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_completeCallback_1() { return static_cast<int32_t>(offsetof(AsyncOperation_t1445031843, ___m_completeCallback_1)); }
	inline Action_1_t1617499438 * get_m_completeCallback_1() const { return ___m_completeCallback_1; }
	inline Action_1_t1617499438 ** get_address_of_m_completeCallback_1() { return &___m_completeCallback_1; }
	inline void set_m_completeCallback_1(Action_1_t1617499438 * value)
	{
		___m_completeCallback_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_completeCallback_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_t1445031843_marshaled_pinvoke : public YieldInstruction_t403091072_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_t1445031843_marshaled_com : public YieldInstruction_t403091072_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
#endif // ASYNCOPERATION_T1445031843_H
#ifndef USERAUTHORIZATION_T2950000085_H
#define USERAUTHORIZATION_T2950000085_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UserAuthorization
struct  UserAuthorization_t2950000085 
{
public:
	// System.Int32 UnityEngine.UserAuthorization::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(UserAuthorization_t2950000085, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // USERAUTHORIZATION_T2950000085_H
#ifndef DATETIMEKIND_T3468814247_H
#define DATETIMEKIND_T3468814247_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTimeKind
struct  DateTimeKind_t3468814247 
{
public:
	// System.Int32 System.DateTimeKind::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DateTimeKind_t3468814247, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIMEKIND_T3468814247_H
#ifndef VIDEOBACKGROUNDREFLECTION_T736962841_H
#define VIDEOBACKGROUNDREFLECTION_T736962841_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaRenderer/VideoBackgroundReflection
struct  VideoBackgroundReflection_t736962841 
{
public:
	// System.Int32 Vuforia.VuforiaRenderer/VideoBackgroundReflection::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(VideoBackgroundReflection_t736962841, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIDEOBACKGROUNDREFLECTION_T736962841_H
#ifndef CAMERADIRECTION_T637748435_H
#define CAMERADIRECTION_T637748435_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.CameraDevice/CameraDirection
struct  CameraDirection_t637748435 
{
public:
	// System.Int32 Vuforia.CameraDevice/CameraDirection::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CameraDirection_t637748435, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERADIRECTION_T637748435_H
#ifndef CAMERADEVICEMODE_T2478715656_H
#define CAMERADEVICEMODE_T2478715656_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.CameraDevice/CameraDeviceMode
struct  CameraDeviceMode_t2478715656 
{
public:
	// System.Int32 Vuforia.CameraDevice/CameraDeviceMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CameraDeviceMode_t2478715656, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERADEVICEMODE_T2478715656_H
#ifndef WORLDCENTERMODE_T3672819471_H
#define WORLDCENTERMODE_T3672819471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaARController/WorldCenterMode
struct  WorldCenterMode_t3672819471 
{
public:
	// System.Int32 Vuforia.VuforiaARController/WorldCenterMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(WorldCenterMode_t3672819471, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WORLDCENTERMODE_T3672819471_H
#ifndef FRAMESTATE_T2717258284_H
#define FRAMESTATE_T2717258284_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.TrackerData/FrameState
#pragma pack(push, tp, 1)
struct  FrameState_t2717258284 
{
public:
	// System.IntPtr Vuforia.TrackerData/FrameState::trackableDataArray
	intptr_t ___trackableDataArray_0;
	// System.IntPtr Vuforia.TrackerData/FrameState::vbDataArray
	intptr_t ___vbDataArray_1;
	// System.IntPtr Vuforia.TrackerData/FrameState::vuMarkResultArray
	intptr_t ___vuMarkResultArray_2;
	// System.IntPtr Vuforia.TrackerData/FrameState::newVuMarkDataArray
	intptr_t ___newVuMarkDataArray_3;
	// System.IntPtr Vuforia.TrackerData/FrameState::illuminationData
	intptr_t ___illuminationData_4;
	// System.Int32 Vuforia.TrackerData/FrameState::numTrackableResults
	int32_t ___numTrackableResults_5;
	// System.Int32 Vuforia.TrackerData/FrameState::numVirtualButtonResults
	int32_t ___numVirtualButtonResults_6;
	// System.Int32 Vuforia.TrackerData/FrameState::frameIndex
	int32_t ___frameIndex_7;
	// System.Int32 Vuforia.TrackerData/FrameState::numVuMarkResults
	int32_t ___numVuMarkResults_8;
	// System.Int32 Vuforia.TrackerData/FrameState::numNewVuMarks
	int32_t ___numNewVuMarks_9;
	// System.Int32 Vuforia.TrackerData/FrameState::deviceTrackableId
	int32_t ___deviceTrackableId_10;
	// System.Int32 Vuforia.TrackerData/FrameState::deviceTrackableStatusInfo
	int32_t ___deviceTrackableStatusInfo_11;
	// UnityEngine.Vector4 Vuforia.TrackerData/FrameState::minCameraCalibration
	Vector4_t3319028937  ___minCameraCalibration_12;

public:
	inline static int32_t get_offset_of_trackableDataArray_0() { return static_cast<int32_t>(offsetof(FrameState_t2717258284, ___trackableDataArray_0)); }
	inline intptr_t get_trackableDataArray_0() const { return ___trackableDataArray_0; }
	inline intptr_t* get_address_of_trackableDataArray_0() { return &___trackableDataArray_0; }
	inline void set_trackableDataArray_0(intptr_t value)
	{
		___trackableDataArray_0 = value;
	}

	inline static int32_t get_offset_of_vbDataArray_1() { return static_cast<int32_t>(offsetof(FrameState_t2717258284, ___vbDataArray_1)); }
	inline intptr_t get_vbDataArray_1() const { return ___vbDataArray_1; }
	inline intptr_t* get_address_of_vbDataArray_1() { return &___vbDataArray_1; }
	inline void set_vbDataArray_1(intptr_t value)
	{
		___vbDataArray_1 = value;
	}

	inline static int32_t get_offset_of_vuMarkResultArray_2() { return static_cast<int32_t>(offsetof(FrameState_t2717258284, ___vuMarkResultArray_2)); }
	inline intptr_t get_vuMarkResultArray_2() const { return ___vuMarkResultArray_2; }
	inline intptr_t* get_address_of_vuMarkResultArray_2() { return &___vuMarkResultArray_2; }
	inline void set_vuMarkResultArray_2(intptr_t value)
	{
		___vuMarkResultArray_2 = value;
	}

	inline static int32_t get_offset_of_newVuMarkDataArray_3() { return static_cast<int32_t>(offsetof(FrameState_t2717258284, ___newVuMarkDataArray_3)); }
	inline intptr_t get_newVuMarkDataArray_3() const { return ___newVuMarkDataArray_3; }
	inline intptr_t* get_address_of_newVuMarkDataArray_3() { return &___newVuMarkDataArray_3; }
	inline void set_newVuMarkDataArray_3(intptr_t value)
	{
		___newVuMarkDataArray_3 = value;
	}

	inline static int32_t get_offset_of_illuminationData_4() { return static_cast<int32_t>(offsetof(FrameState_t2717258284, ___illuminationData_4)); }
	inline intptr_t get_illuminationData_4() const { return ___illuminationData_4; }
	inline intptr_t* get_address_of_illuminationData_4() { return &___illuminationData_4; }
	inline void set_illuminationData_4(intptr_t value)
	{
		___illuminationData_4 = value;
	}

	inline static int32_t get_offset_of_numTrackableResults_5() { return static_cast<int32_t>(offsetof(FrameState_t2717258284, ___numTrackableResults_5)); }
	inline int32_t get_numTrackableResults_5() const { return ___numTrackableResults_5; }
	inline int32_t* get_address_of_numTrackableResults_5() { return &___numTrackableResults_5; }
	inline void set_numTrackableResults_5(int32_t value)
	{
		___numTrackableResults_5 = value;
	}

	inline static int32_t get_offset_of_numVirtualButtonResults_6() { return static_cast<int32_t>(offsetof(FrameState_t2717258284, ___numVirtualButtonResults_6)); }
	inline int32_t get_numVirtualButtonResults_6() const { return ___numVirtualButtonResults_6; }
	inline int32_t* get_address_of_numVirtualButtonResults_6() { return &___numVirtualButtonResults_6; }
	inline void set_numVirtualButtonResults_6(int32_t value)
	{
		___numVirtualButtonResults_6 = value;
	}

	inline static int32_t get_offset_of_frameIndex_7() { return static_cast<int32_t>(offsetof(FrameState_t2717258284, ___frameIndex_7)); }
	inline int32_t get_frameIndex_7() const { return ___frameIndex_7; }
	inline int32_t* get_address_of_frameIndex_7() { return &___frameIndex_7; }
	inline void set_frameIndex_7(int32_t value)
	{
		___frameIndex_7 = value;
	}

	inline static int32_t get_offset_of_numVuMarkResults_8() { return static_cast<int32_t>(offsetof(FrameState_t2717258284, ___numVuMarkResults_8)); }
	inline int32_t get_numVuMarkResults_8() const { return ___numVuMarkResults_8; }
	inline int32_t* get_address_of_numVuMarkResults_8() { return &___numVuMarkResults_8; }
	inline void set_numVuMarkResults_8(int32_t value)
	{
		___numVuMarkResults_8 = value;
	}

	inline static int32_t get_offset_of_numNewVuMarks_9() { return static_cast<int32_t>(offsetof(FrameState_t2717258284, ___numNewVuMarks_9)); }
	inline int32_t get_numNewVuMarks_9() const { return ___numNewVuMarks_9; }
	inline int32_t* get_address_of_numNewVuMarks_9() { return &___numNewVuMarks_9; }
	inline void set_numNewVuMarks_9(int32_t value)
	{
		___numNewVuMarks_9 = value;
	}

	inline static int32_t get_offset_of_deviceTrackableId_10() { return static_cast<int32_t>(offsetof(FrameState_t2717258284, ___deviceTrackableId_10)); }
	inline int32_t get_deviceTrackableId_10() const { return ___deviceTrackableId_10; }
	inline int32_t* get_address_of_deviceTrackableId_10() { return &___deviceTrackableId_10; }
	inline void set_deviceTrackableId_10(int32_t value)
	{
		___deviceTrackableId_10 = value;
	}

	inline static int32_t get_offset_of_deviceTrackableStatusInfo_11() { return static_cast<int32_t>(offsetof(FrameState_t2717258284, ___deviceTrackableStatusInfo_11)); }
	inline int32_t get_deviceTrackableStatusInfo_11() const { return ___deviceTrackableStatusInfo_11; }
	inline int32_t* get_address_of_deviceTrackableStatusInfo_11() { return &___deviceTrackableStatusInfo_11; }
	inline void set_deviceTrackableStatusInfo_11(int32_t value)
	{
		___deviceTrackableStatusInfo_11 = value;
	}

	inline static int32_t get_offset_of_minCameraCalibration_12() { return static_cast<int32_t>(offsetof(FrameState_t2717258284, ___minCameraCalibration_12)); }
	inline Vector4_t3319028937  get_minCameraCalibration_12() const { return ___minCameraCalibration_12; }
	inline Vector4_t3319028937 * get_address_of_minCameraCalibration_12() { return &___minCameraCalibration_12; }
	inline void set_minCameraCalibration_12(Vector4_t3319028937  value)
	{
		___minCameraCalibration_12 = value;
	}
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FRAMESTATE_T2717258284_H
#ifndef VIDEOTEXTUREINFO_T1805965052_H
#define VIDEOTEXTUREINFO_T1805965052_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaRenderer/VideoTextureInfo
#pragma pack(push, tp, 1)
struct  VideoTextureInfo_t1805965052 
{
public:
	// Vuforia.VuforiaRenderer/Vec2I Vuforia.VuforiaRenderer/VideoTextureInfo::textureSize
	Vec2I_t3527036565  ___textureSize_0;
	// Vuforia.VuforiaRenderer/Vec2I Vuforia.VuforiaRenderer/VideoTextureInfo::imageSize
	Vec2I_t3527036565  ___imageSize_1;

public:
	inline static int32_t get_offset_of_textureSize_0() { return static_cast<int32_t>(offsetof(VideoTextureInfo_t1805965052, ___textureSize_0)); }
	inline Vec2I_t3527036565  get_textureSize_0() const { return ___textureSize_0; }
	inline Vec2I_t3527036565 * get_address_of_textureSize_0() { return &___textureSize_0; }
	inline void set_textureSize_0(Vec2I_t3527036565  value)
	{
		___textureSize_0 = value;
	}

	inline static int32_t get_offset_of_imageSize_1() { return static_cast<int32_t>(offsetof(VideoTextureInfo_t1805965052, ___imageSize_1)); }
	inline Vec2I_t3527036565  get_imageSize_1() const { return ___imageSize_1; }
	inline Vec2I_t3527036565 * get_address_of_imageSize_1() { return &___imageSize_1; }
	inline void set_imageSize_1(Vec2I_t3527036565  value)
	{
		___imageSize_1 = value;
	}
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIDEOTEXTUREINFO_T1805965052_H
#ifndef OBJECT_T631007953_H
#define OBJECT_T631007953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t631007953  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t631007953, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t631007953_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t631007953_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T631007953_H
#ifndef DELEGATE_T1188392813_H
#define DELEGATE_T1188392813_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t1188392813  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_5;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_6;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_7;
	// System.DelegateData System.Delegate::data
	DelegateData_t1677132599 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_code_5)); }
	inline intptr_t get_method_code_5() const { return ___method_code_5; }
	inline intptr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(intptr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___data_8)); }
	inline DelegateData_t1677132599 * get_data_8() const { return ___data_8; }
	inline DelegateData_t1677132599 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t1677132599 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T1188392813_H
#ifndef VIDEOBGCFGDATA_T994527297_H
#define VIDEOBGCFGDATA_T994527297_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaRenderer/VideoBGCfgData
#pragma pack(push, tp, 1)
struct  VideoBGCfgData_t994527297 
{
public:
	// Vuforia.VuforiaRenderer/Vec2I Vuforia.VuforiaRenderer/VideoBGCfgData::position
	Vec2I_t3527036565  ___position_0;
	// Vuforia.VuforiaRenderer/Vec2I Vuforia.VuforiaRenderer/VideoBGCfgData::size
	Vec2I_t3527036565  ___size_1;
	// System.Int32 Vuforia.VuforiaRenderer/VideoBGCfgData::enabled
	int32_t ___enabled_2;
	// System.Int32 Vuforia.VuforiaRenderer/VideoBGCfgData::reflectionInteger
	int32_t ___reflectionInteger_3;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(VideoBGCfgData_t994527297, ___position_0)); }
	inline Vec2I_t3527036565  get_position_0() const { return ___position_0; }
	inline Vec2I_t3527036565 * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vec2I_t3527036565  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_size_1() { return static_cast<int32_t>(offsetof(VideoBGCfgData_t994527297, ___size_1)); }
	inline Vec2I_t3527036565  get_size_1() const { return ___size_1; }
	inline Vec2I_t3527036565 * get_address_of_size_1() { return &___size_1; }
	inline void set_size_1(Vec2I_t3527036565  value)
	{
		___size_1 = value;
	}

	inline static int32_t get_offset_of_enabled_2() { return static_cast<int32_t>(offsetof(VideoBGCfgData_t994527297, ___enabled_2)); }
	inline int32_t get_enabled_2() const { return ___enabled_2; }
	inline int32_t* get_address_of_enabled_2() { return &___enabled_2; }
	inline void set_enabled_2(int32_t value)
	{
		___enabled_2 = value;
	}

	inline static int32_t get_offset_of_reflectionInteger_3() { return static_cast<int32_t>(offsetof(VideoBGCfgData_t994527297, ___reflectionInteger_3)); }
	inline int32_t get_reflectionInteger_3() const { return ___reflectionInteger_3; }
	inline int32_t* get_address_of_reflectionInteger_3() { return &___reflectionInteger_3; }
	inline void set_reflectionInteger_3(int32_t value)
	{
		___reflectionInteger_3 = value;
	}
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIDEOBGCFGDATA_T994527297_H
#ifndef PIXEL_FORMAT_T3209881435_H
#define PIXEL_FORMAT_T3209881435_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.Image/PIXEL_FORMAT
struct  PIXEL_FORMAT_t3209881435 
{
public:
	// System.Int32 Vuforia.Image/PIXEL_FORMAT::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PIXEL_FORMAT_t3209881435, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PIXEL_FORMAT_T3209881435_H
#ifndef SCRIPTABLEOBJECT_T2528358522_H
#define SCRIPTABLEOBJECT_T2528358522_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ScriptableObject
struct  ScriptableObject_t2528358522  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t2528358522_marshaled_pinvoke : public Object_t631007953_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t2528358522_marshaled_com : public Object_t631007953_marshaled_com
{
};
#endif // SCRIPTABLEOBJECT_T2528358522_H
#ifndef DATETIME_T3738529785_H
#define DATETIME_T3738529785_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTime
struct  DateTime_t3738529785 
{
public:
	// System.TimeSpan System.DateTime::ticks
	TimeSpan_t881159249  ___ticks_0;
	// System.DateTimeKind System.DateTime::kind
	int32_t ___kind_1;

public:
	inline static int32_t get_offset_of_ticks_0() { return static_cast<int32_t>(offsetof(DateTime_t3738529785, ___ticks_0)); }
	inline TimeSpan_t881159249  get_ticks_0() const { return ___ticks_0; }
	inline TimeSpan_t881159249 * get_address_of_ticks_0() { return &___ticks_0; }
	inline void set_ticks_0(TimeSpan_t881159249  value)
	{
		___ticks_0 = value;
	}

	inline static int32_t get_offset_of_kind_1() { return static_cast<int32_t>(offsetof(DateTime_t3738529785, ___kind_1)); }
	inline int32_t get_kind_1() const { return ___kind_1; }
	inline int32_t* get_address_of_kind_1() { return &___kind_1; }
	inline void set_kind_1(int32_t value)
	{
		___kind_1 = value;
	}
};

struct DateTime_t3738529785_StaticFields
{
public:
	// System.DateTime System.DateTime::MaxValue
	DateTime_t3738529785  ___MaxValue_2;
	// System.DateTime System.DateTime::MinValue
	DateTime_t3738529785  ___MinValue_3;
	// System.String[] System.DateTime::ParseTimeFormats
	StringU5BU5D_t1281789340* ___ParseTimeFormats_4;
	// System.String[] System.DateTime::ParseYearDayMonthFormats
	StringU5BU5D_t1281789340* ___ParseYearDayMonthFormats_5;
	// System.String[] System.DateTime::ParseYearMonthDayFormats
	StringU5BU5D_t1281789340* ___ParseYearMonthDayFormats_6;
	// System.String[] System.DateTime::ParseDayMonthYearFormats
	StringU5BU5D_t1281789340* ___ParseDayMonthYearFormats_7;
	// System.String[] System.DateTime::ParseMonthDayYearFormats
	StringU5BU5D_t1281789340* ___ParseMonthDayYearFormats_8;
	// System.String[] System.DateTime::MonthDayShortFormats
	StringU5BU5D_t1281789340* ___MonthDayShortFormats_9;
	// System.String[] System.DateTime::DayMonthShortFormats
	StringU5BU5D_t1281789340* ___DayMonthShortFormats_10;
	// System.Int32[] System.DateTime::daysmonth
	Int32U5BU5D_t385246372* ___daysmonth_11;
	// System.Int32[] System.DateTime::daysmonthleap
	Int32U5BU5D_t385246372* ___daysmonthleap_12;
	// System.Object System.DateTime::to_local_time_span_object
	RuntimeObject * ___to_local_time_span_object_13;
	// System.Int64 System.DateTime::last_now
	int64_t ___last_now_14;

public:
	inline static int32_t get_offset_of_MaxValue_2() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___MaxValue_2)); }
	inline DateTime_t3738529785  get_MaxValue_2() const { return ___MaxValue_2; }
	inline DateTime_t3738529785 * get_address_of_MaxValue_2() { return &___MaxValue_2; }
	inline void set_MaxValue_2(DateTime_t3738529785  value)
	{
		___MaxValue_2 = value;
	}

	inline static int32_t get_offset_of_MinValue_3() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___MinValue_3)); }
	inline DateTime_t3738529785  get_MinValue_3() const { return ___MinValue_3; }
	inline DateTime_t3738529785 * get_address_of_MinValue_3() { return &___MinValue_3; }
	inline void set_MinValue_3(DateTime_t3738529785  value)
	{
		___MinValue_3 = value;
	}

	inline static int32_t get_offset_of_ParseTimeFormats_4() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseTimeFormats_4)); }
	inline StringU5BU5D_t1281789340* get_ParseTimeFormats_4() const { return ___ParseTimeFormats_4; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseTimeFormats_4() { return &___ParseTimeFormats_4; }
	inline void set_ParseTimeFormats_4(StringU5BU5D_t1281789340* value)
	{
		___ParseTimeFormats_4 = value;
		Il2CppCodeGenWriteBarrier((&___ParseTimeFormats_4), value);
	}

	inline static int32_t get_offset_of_ParseYearDayMonthFormats_5() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseYearDayMonthFormats_5)); }
	inline StringU5BU5D_t1281789340* get_ParseYearDayMonthFormats_5() const { return ___ParseYearDayMonthFormats_5; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseYearDayMonthFormats_5() { return &___ParseYearDayMonthFormats_5; }
	inline void set_ParseYearDayMonthFormats_5(StringU5BU5D_t1281789340* value)
	{
		___ParseYearDayMonthFormats_5 = value;
		Il2CppCodeGenWriteBarrier((&___ParseYearDayMonthFormats_5), value);
	}

	inline static int32_t get_offset_of_ParseYearMonthDayFormats_6() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseYearMonthDayFormats_6)); }
	inline StringU5BU5D_t1281789340* get_ParseYearMonthDayFormats_6() const { return ___ParseYearMonthDayFormats_6; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseYearMonthDayFormats_6() { return &___ParseYearMonthDayFormats_6; }
	inline void set_ParseYearMonthDayFormats_6(StringU5BU5D_t1281789340* value)
	{
		___ParseYearMonthDayFormats_6 = value;
		Il2CppCodeGenWriteBarrier((&___ParseYearMonthDayFormats_6), value);
	}

	inline static int32_t get_offset_of_ParseDayMonthYearFormats_7() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseDayMonthYearFormats_7)); }
	inline StringU5BU5D_t1281789340* get_ParseDayMonthYearFormats_7() const { return ___ParseDayMonthYearFormats_7; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseDayMonthYearFormats_7() { return &___ParseDayMonthYearFormats_7; }
	inline void set_ParseDayMonthYearFormats_7(StringU5BU5D_t1281789340* value)
	{
		___ParseDayMonthYearFormats_7 = value;
		Il2CppCodeGenWriteBarrier((&___ParseDayMonthYearFormats_7), value);
	}

	inline static int32_t get_offset_of_ParseMonthDayYearFormats_8() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseMonthDayYearFormats_8)); }
	inline StringU5BU5D_t1281789340* get_ParseMonthDayYearFormats_8() const { return ___ParseMonthDayYearFormats_8; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseMonthDayYearFormats_8() { return &___ParseMonthDayYearFormats_8; }
	inline void set_ParseMonthDayYearFormats_8(StringU5BU5D_t1281789340* value)
	{
		___ParseMonthDayYearFormats_8 = value;
		Il2CppCodeGenWriteBarrier((&___ParseMonthDayYearFormats_8), value);
	}

	inline static int32_t get_offset_of_MonthDayShortFormats_9() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___MonthDayShortFormats_9)); }
	inline StringU5BU5D_t1281789340* get_MonthDayShortFormats_9() const { return ___MonthDayShortFormats_9; }
	inline StringU5BU5D_t1281789340** get_address_of_MonthDayShortFormats_9() { return &___MonthDayShortFormats_9; }
	inline void set_MonthDayShortFormats_9(StringU5BU5D_t1281789340* value)
	{
		___MonthDayShortFormats_9 = value;
		Il2CppCodeGenWriteBarrier((&___MonthDayShortFormats_9), value);
	}

	inline static int32_t get_offset_of_DayMonthShortFormats_10() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___DayMonthShortFormats_10)); }
	inline StringU5BU5D_t1281789340* get_DayMonthShortFormats_10() const { return ___DayMonthShortFormats_10; }
	inline StringU5BU5D_t1281789340** get_address_of_DayMonthShortFormats_10() { return &___DayMonthShortFormats_10; }
	inline void set_DayMonthShortFormats_10(StringU5BU5D_t1281789340* value)
	{
		___DayMonthShortFormats_10 = value;
		Il2CppCodeGenWriteBarrier((&___DayMonthShortFormats_10), value);
	}

	inline static int32_t get_offset_of_daysmonth_11() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___daysmonth_11)); }
	inline Int32U5BU5D_t385246372* get_daysmonth_11() const { return ___daysmonth_11; }
	inline Int32U5BU5D_t385246372** get_address_of_daysmonth_11() { return &___daysmonth_11; }
	inline void set_daysmonth_11(Int32U5BU5D_t385246372* value)
	{
		___daysmonth_11 = value;
		Il2CppCodeGenWriteBarrier((&___daysmonth_11), value);
	}

	inline static int32_t get_offset_of_daysmonthleap_12() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___daysmonthleap_12)); }
	inline Int32U5BU5D_t385246372* get_daysmonthleap_12() const { return ___daysmonthleap_12; }
	inline Int32U5BU5D_t385246372** get_address_of_daysmonthleap_12() { return &___daysmonthleap_12; }
	inline void set_daysmonthleap_12(Int32U5BU5D_t385246372* value)
	{
		___daysmonthleap_12 = value;
		Il2CppCodeGenWriteBarrier((&___daysmonthleap_12), value);
	}

	inline static int32_t get_offset_of_to_local_time_span_object_13() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___to_local_time_span_object_13)); }
	inline RuntimeObject * get_to_local_time_span_object_13() const { return ___to_local_time_span_object_13; }
	inline RuntimeObject ** get_address_of_to_local_time_span_object_13() { return &___to_local_time_span_object_13; }
	inline void set_to_local_time_span_object_13(RuntimeObject * value)
	{
		___to_local_time_span_object_13 = value;
		Il2CppCodeGenWriteBarrier((&___to_local_time_span_object_13), value);
	}

	inline static int32_t get_offset_of_last_now_14() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___last_now_14)); }
	inline int64_t get_last_now_14() const { return ___last_now_14; }
	inline int64_t* get_address_of_last_now_14() { return &___last_now_14; }
	inline void set_last_now_14(int64_t value)
	{
		___last_now_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIME_T3738529785_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t1188392813
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___prev_9)); }
	inline MulticastDelegate_t * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___kpm_next_10)); }
	inline MulticastDelegate_t * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T_H
#ifndef WEBCAM_T2427002488_H
#define WEBCAM_T2427002488_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.WebCam
struct  WebCam_t2427002488  : public RuntimeObject
{
public:
	// UnityEngine.Camera[] Vuforia.WebCam::mARCameras
	CameraU5BU5D_t1709987734* ___mARCameras_0;
	// System.Int32[] Vuforia.WebCam::mOriginalCameraCullMask
	Int32U5BU5D_t385246372* ___mOriginalCameraCullMask_1;
	// Vuforia.IWebCamTexAdaptor Vuforia.WebCam::mWebCamTexture
	RuntimeObject* ___mWebCamTexture_2;
	// Vuforia.CameraDevice/VideoModeData Vuforia.WebCam::mVideoModeData
	VideoModeData_t2066817255  ___mVideoModeData_3;
	// Vuforia.VuforiaRenderer/VideoTextureInfo Vuforia.WebCam::mVideoTextureInfo
	VideoTextureInfo_t1805965052  ___mVideoTextureInfo_4;
	// Vuforia.TextureRenderer Vuforia.WebCam::mTextureRenderer
	TextureRenderer_t3278815845 * ___mTextureRenderer_5;
	// UnityEngine.Texture2D Vuforia.WebCam::mBufferReadTexture
	Texture2D_t3840446185 * ___mBufferReadTexture_6;
	// UnityEngine.Rect Vuforia.WebCam::mReadPixelsRect
	Rect_t2360479859  ___mReadPixelsRect_7;
	// Vuforia.WebCamProfile/ProfileData Vuforia.WebCam::mWebCamProfile
	ProfileData_t3519391925  ___mWebCamProfile_8;
	// System.Boolean Vuforia.WebCam::mFlipHorizontally
	bool ___mFlipHorizontally_9;
	// System.Boolean Vuforia.WebCam::mIsDirty
	bool ___mIsDirty_10;
	// System.Int32 Vuforia.WebCam::mLastFrameIdx
	int32_t ___mLastFrameIdx_11;
	// System.Int32 Vuforia.WebCam::mRenderTextureLayer
	int32_t ___mRenderTextureLayer_12;
	// System.Boolean Vuforia.WebCam::mWebcamPlaying
	bool ___mWebcamPlaying_13;
	// System.Boolean Vuforia.WebCam::<IsTextureSizeAvailable>k__BackingField
	bool ___U3CIsTextureSizeAvailableU3Ek__BackingField_14;

public:
	inline static int32_t get_offset_of_mARCameras_0() { return static_cast<int32_t>(offsetof(WebCam_t2427002488, ___mARCameras_0)); }
	inline CameraU5BU5D_t1709987734* get_mARCameras_0() const { return ___mARCameras_0; }
	inline CameraU5BU5D_t1709987734** get_address_of_mARCameras_0() { return &___mARCameras_0; }
	inline void set_mARCameras_0(CameraU5BU5D_t1709987734* value)
	{
		___mARCameras_0 = value;
		Il2CppCodeGenWriteBarrier((&___mARCameras_0), value);
	}

	inline static int32_t get_offset_of_mOriginalCameraCullMask_1() { return static_cast<int32_t>(offsetof(WebCam_t2427002488, ___mOriginalCameraCullMask_1)); }
	inline Int32U5BU5D_t385246372* get_mOriginalCameraCullMask_1() const { return ___mOriginalCameraCullMask_1; }
	inline Int32U5BU5D_t385246372** get_address_of_mOriginalCameraCullMask_1() { return &___mOriginalCameraCullMask_1; }
	inline void set_mOriginalCameraCullMask_1(Int32U5BU5D_t385246372* value)
	{
		___mOriginalCameraCullMask_1 = value;
		Il2CppCodeGenWriteBarrier((&___mOriginalCameraCullMask_1), value);
	}

	inline static int32_t get_offset_of_mWebCamTexture_2() { return static_cast<int32_t>(offsetof(WebCam_t2427002488, ___mWebCamTexture_2)); }
	inline RuntimeObject* get_mWebCamTexture_2() const { return ___mWebCamTexture_2; }
	inline RuntimeObject** get_address_of_mWebCamTexture_2() { return &___mWebCamTexture_2; }
	inline void set_mWebCamTexture_2(RuntimeObject* value)
	{
		___mWebCamTexture_2 = value;
		Il2CppCodeGenWriteBarrier((&___mWebCamTexture_2), value);
	}

	inline static int32_t get_offset_of_mVideoModeData_3() { return static_cast<int32_t>(offsetof(WebCam_t2427002488, ___mVideoModeData_3)); }
	inline VideoModeData_t2066817255  get_mVideoModeData_3() const { return ___mVideoModeData_3; }
	inline VideoModeData_t2066817255 * get_address_of_mVideoModeData_3() { return &___mVideoModeData_3; }
	inline void set_mVideoModeData_3(VideoModeData_t2066817255  value)
	{
		___mVideoModeData_3 = value;
	}

	inline static int32_t get_offset_of_mVideoTextureInfo_4() { return static_cast<int32_t>(offsetof(WebCam_t2427002488, ___mVideoTextureInfo_4)); }
	inline VideoTextureInfo_t1805965052  get_mVideoTextureInfo_4() const { return ___mVideoTextureInfo_4; }
	inline VideoTextureInfo_t1805965052 * get_address_of_mVideoTextureInfo_4() { return &___mVideoTextureInfo_4; }
	inline void set_mVideoTextureInfo_4(VideoTextureInfo_t1805965052  value)
	{
		___mVideoTextureInfo_4 = value;
	}

	inline static int32_t get_offset_of_mTextureRenderer_5() { return static_cast<int32_t>(offsetof(WebCam_t2427002488, ___mTextureRenderer_5)); }
	inline TextureRenderer_t3278815845 * get_mTextureRenderer_5() const { return ___mTextureRenderer_5; }
	inline TextureRenderer_t3278815845 ** get_address_of_mTextureRenderer_5() { return &___mTextureRenderer_5; }
	inline void set_mTextureRenderer_5(TextureRenderer_t3278815845 * value)
	{
		___mTextureRenderer_5 = value;
		Il2CppCodeGenWriteBarrier((&___mTextureRenderer_5), value);
	}

	inline static int32_t get_offset_of_mBufferReadTexture_6() { return static_cast<int32_t>(offsetof(WebCam_t2427002488, ___mBufferReadTexture_6)); }
	inline Texture2D_t3840446185 * get_mBufferReadTexture_6() const { return ___mBufferReadTexture_6; }
	inline Texture2D_t3840446185 ** get_address_of_mBufferReadTexture_6() { return &___mBufferReadTexture_6; }
	inline void set_mBufferReadTexture_6(Texture2D_t3840446185 * value)
	{
		___mBufferReadTexture_6 = value;
		Il2CppCodeGenWriteBarrier((&___mBufferReadTexture_6), value);
	}

	inline static int32_t get_offset_of_mReadPixelsRect_7() { return static_cast<int32_t>(offsetof(WebCam_t2427002488, ___mReadPixelsRect_7)); }
	inline Rect_t2360479859  get_mReadPixelsRect_7() const { return ___mReadPixelsRect_7; }
	inline Rect_t2360479859 * get_address_of_mReadPixelsRect_7() { return &___mReadPixelsRect_7; }
	inline void set_mReadPixelsRect_7(Rect_t2360479859  value)
	{
		___mReadPixelsRect_7 = value;
	}

	inline static int32_t get_offset_of_mWebCamProfile_8() { return static_cast<int32_t>(offsetof(WebCam_t2427002488, ___mWebCamProfile_8)); }
	inline ProfileData_t3519391925  get_mWebCamProfile_8() const { return ___mWebCamProfile_8; }
	inline ProfileData_t3519391925 * get_address_of_mWebCamProfile_8() { return &___mWebCamProfile_8; }
	inline void set_mWebCamProfile_8(ProfileData_t3519391925  value)
	{
		___mWebCamProfile_8 = value;
	}

	inline static int32_t get_offset_of_mFlipHorizontally_9() { return static_cast<int32_t>(offsetof(WebCam_t2427002488, ___mFlipHorizontally_9)); }
	inline bool get_mFlipHorizontally_9() const { return ___mFlipHorizontally_9; }
	inline bool* get_address_of_mFlipHorizontally_9() { return &___mFlipHorizontally_9; }
	inline void set_mFlipHorizontally_9(bool value)
	{
		___mFlipHorizontally_9 = value;
	}

	inline static int32_t get_offset_of_mIsDirty_10() { return static_cast<int32_t>(offsetof(WebCam_t2427002488, ___mIsDirty_10)); }
	inline bool get_mIsDirty_10() const { return ___mIsDirty_10; }
	inline bool* get_address_of_mIsDirty_10() { return &___mIsDirty_10; }
	inline void set_mIsDirty_10(bool value)
	{
		___mIsDirty_10 = value;
	}

	inline static int32_t get_offset_of_mLastFrameIdx_11() { return static_cast<int32_t>(offsetof(WebCam_t2427002488, ___mLastFrameIdx_11)); }
	inline int32_t get_mLastFrameIdx_11() const { return ___mLastFrameIdx_11; }
	inline int32_t* get_address_of_mLastFrameIdx_11() { return &___mLastFrameIdx_11; }
	inline void set_mLastFrameIdx_11(int32_t value)
	{
		___mLastFrameIdx_11 = value;
	}

	inline static int32_t get_offset_of_mRenderTextureLayer_12() { return static_cast<int32_t>(offsetof(WebCam_t2427002488, ___mRenderTextureLayer_12)); }
	inline int32_t get_mRenderTextureLayer_12() const { return ___mRenderTextureLayer_12; }
	inline int32_t* get_address_of_mRenderTextureLayer_12() { return &___mRenderTextureLayer_12; }
	inline void set_mRenderTextureLayer_12(int32_t value)
	{
		___mRenderTextureLayer_12 = value;
	}

	inline static int32_t get_offset_of_mWebcamPlaying_13() { return static_cast<int32_t>(offsetof(WebCam_t2427002488, ___mWebcamPlaying_13)); }
	inline bool get_mWebcamPlaying_13() const { return ___mWebcamPlaying_13; }
	inline bool* get_address_of_mWebcamPlaying_13() { return &___mWebcamPlaying_13; }
	inline void set_mWebcamPlaying_13(bool value)
	{
		___mWebcamPlaying_13 = value;
	}

	inline static int32_t get_offset_of_U3CIsTextureSizeAvailableU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(WebCam_t2427002488, ___U3CIsTextureSizeAvailableU3Ek__BackingField_14)); }
	inline bool get_U3CIsTextureSizeAvailableU3Ek__BackingField_14() const { return ___U3CIsTextureSizeAvailableU3Ek__BackingField_14; }
	inline bool* get_address_of_U3CIsTextureSizeAvailableU3Ek__BackingField_14() { return &___U3CIsTextureSizeAvailableU3Ek__BackingField_14; }
	inline void set_U3CIsTextureSizeAvailableU3Ek__BackingField_14(bool value)
	{
		___U3CIsTextureSizeAvailableU3Ek__BackingField_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEBCAM_T2427002488_H
#ifndef GAMEOBJECT_T1113636619_H
#define GAMEOBJECT_T1113636619_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GameObject
struct  GameObject_t1113636619  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECT_T1113636619_H
#ifndef MATERIAL_T340375123_H
#define MATERIAL_T340375123_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Material
struct  Material_t340375123  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATERIAL_T340375123_H
#ifndef IMAGE_T745056343_H
#define IMAGE_T745056343_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.Image
struct  Image_t745056343  : public RuntimeObject
{
public:
	// System.Int32 Vuforia.Image::mWidth
	int32_t ___mWidth_0;
	// System.Int32 Vuforia.Image::mHeight
	int32_t ___mHeight_1;
	// System.Int32 Vuforia.Image::mStride
	int32_t ___mStride_2;
	// System.Int32 Vuforia.Image::mBufferWidth
	int32_t ___mBufferWidth_3;
	// System.Int32 Vuforia.Image::mBufferHeight
	int32_t ___mBufferHeight_4;
	// Vuforia.Image/PIXEL_FORMAT Vuforia.Image::mPixelFormat
	int32_t ___mPixelFormat_5;
	// System.Byte[] Vuforia.Image::mData
	ByteU5BU5D_t4116647657* ___mData_6;
	// System.IntPtr Vuforia.Image::mUnmanagedData
	intptr_t ___mUnmanagedData_7;
	// System.Boolean Vuforia.Image::mDataSet
	bool ___mDataSet_8;
	// UnityEngine.Color32[] Vuforia.Image::mPixel32
	Color32U5BU5D_t3850468773* ___mPixel32_9;

public:
	inline static int32_t get_offset_of_mWidth_0() { return static_cast<int32_t>(offsetof(Image_t745056343, ___mWidth_0)); }
	inline int32_t get_mWidth_0() const { return ___mWidth_0; }
	inline int32_t* get_address_of_mWidth_0() { return &___mWidth_0; }
	inline void set_mWidth_0(int32_t value)
	{
		___mWidth_0 = value;
	}

	inline static int32_t get_offset_of_mHeight_1() { return static_cast<int32_t>(offsetof(Image_t745056343, ___mHeight_1)); }
	inline int32_t get_mHeight_1() const { return ___mHeight_1; }
	inline int32_t* get_address_of_mHeight_1() { return &___mHeight_1; }
	inline void set_mHeight_1(int32_t value)
	{
		___mHeight_1 = value;
	}

	inline static int32_t get_offset_of_mStride_2() { return static_cast<int32_t>(offsetof(Image_t745056343, ___mStride_2)); }
	inline int32_t get_mStride_2() const { return ___mStride_2; }
	inline int32_t* get_address_of_mStride_2() { return &___mStride_2; }
	inline void set_mStride_2(int32_t value)
	{
		___mStride_2 = value;
	}

	inline static int32_t get_offset_of_mBufferWidth_3() { return static_cast<int32_t>(offsetof(Image_t745056343, ___mBufferWidth_3)); }
	inline int32_t get_mBufferWidth_3() const { return ___mBufferWidth_3; }
	inline int32_t* get_address_of_mBufferWidth_3() { return &___mBufferWidth_3; }
	inline void set_mBufferWidth_3(int32_t value)
	{
		___mBufferWidth_3 = value;
	}

	inline static int32_t get_offset_of_mBufferHeight_4() { return static_cast<int32_t>(offsetof(Image_t745056343, ___mBufferHeight_4)); }
	inline int32_t get_mBufferHeight_4() const { return ___mBufferHeight_4; }
	inline int32_t* get_address_of_mBufferHeight_4() { return &___mBufferHeight_4; }
	inline void set_mBufferHeight_4(int32_t value)
	{
		___mBufferHeight_4 = value;
	}

	inline static int32_t get_offset_of_mPixelFormat_5() { return static_cast<int32_t>(offsetof(Image_t745056343, ___mPixelFormat_5)); }
	inline int32_t get_mPixelFormat_5() const { return ___mPixelFormat_5; }
	inline int32_t* get_address_of_mPixelFormat_5() { return &___mPixelFormat_5; }
	inline void set_mPixelFormat_5(int32_t value)
	{
		___mPixelFormat_5 = value;
	}

	inline static int32_t get_offset_of_mData_6() { return static_cast<int32_t>(offsetof(Image_t745056343, ___mData_6)); }
	inline ByteU5BU5D_t4116647657* get_mData_6() const { return ___mData_6; }
	inline ByteU5BU5D_t4116647657** get_address_of_mData_6() { return &___mData_6; }
	inline void set_mData_6(ByteU5BU5D_t4116647657* value)
	{
		___mData_6 = value;
		Il2CppCodeGenWriteBarrier((&___mData_6), value);
	}

	inline static int32_t get_offset_of_mUnmanagedData_7() { return static_cast<int32_t>(offsetof(Image_t745056343, ___mUnmanagedData_7)); }
	inline intptr_t get_mUnmanagedData_7() const { return ___mUnmanagedData_7; }
	inline intptr_t* get_address_of_mUnmanagedData_7() { return &___mUnmanagedData_7; }
	inline void set_mUnmanagedData_7(intptr_t value)
	{
		___mUnmanagedData_7 = value;
	}

	inline static int32_t get_offset_of_mDataSet_8() { return static_cast<int32_t>(offsetof(Image_t745056343, ___mDataSet_8)); }
	inline bool get_mDataSet_8() const { return ___mDataSet_8; }
	inline bool* get_address_of_mDataSet_8() { return &___mDataSet_8; }
	inline void set_mDataSet_8(bool value)
	{
		___mDataSet_8 = value;
	}

	inline static int32_t get_offset_of_mPixel32_9() { return static_cast<int32_t>(offsetof(Image_t745056343, ___mPixel32_9)); }
	inline Color32U5BU5D_t3850468773* get_mPixel32_9() const { return ___mPixel32_9; }
	inline Color32U5BU5D_t3850468773** get_address_of_mPixel32_9() { return &___mPixel32_9; }
	inline void set_mPixel32_9(Color32U5BU5D_t3850468773* value)
	{
		___mPixel32_9 = value;
		Il2CppCodeGenWriteBarrier((&___mPixel32_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IMAGE_T745056343_H
#ifndef VUFORIARENDERER_T3433045970_H
#define VUFORIARENDERER_T3433045970_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaRenderer
struct  VuforiaRenderer_t3433045970  : public RuntimeObject
{
public:
	// Vuforia.VuforiaRenderer/VideoBGCfgData Vuforia.VuforiaRenderer::mVideoBGConfig
	VideoBGCfgData_t994527297  ___mVideoBGConfig_1;
	// System.Boolean Vuforia.VuforiaRenderer::mVideoBGConfigSet
	bool ___mVideoBGConfigSet_2;
	// UnityEngine.Texture Vuforia.VuforiaRenderer::mVideoBackgroundTexture
	Texture_t3661962703 * ___mVideoBackgroundTexture_3;
	// System.Boolean Vuforia.VuforiaRenderer::mBackgroundTextureHasChanged
	bool ___mBackgroundTextureHasChanged_4;
	// Vuforia.VuforiaRenderer/VideoBackgroundReflection Vuforia.VuforiaRenderer::mLastSetReflection
	int32_t ___mLastSetReflection_5;
	// System.IntPtr Vuforia.VuforiaRenderer::mNativeRenderingCallback
	intptr_t ___mNativeRenderingCallback_6;

public:
	inline static int32_t get_offset_of_mVideoBGConfig_1() { return static_cast<int32_t>(offsetof(VuforiaRenderer_t3433045970, ___mVideoBGConfig_1)); }
	inline VideoBGCfgData_t994527297  get_mVideoBGConfig_1() const { return ___mVideoBGConfig_1; }
	inline VideoBGCfgData_t994527297 * get_address_of_mVideoBGConfig_1() { return &___mVideoBGConfig_1; }
	inline void set_mVideoBGConfig_1(VideoBGCfgData_t994527297  value)
	{
		___mVideoBGConfig_1 = value;
	}

	inline static int32_t get_offset_of_mVideoBGConfigSet_2() { return static_cast<int32_t>(offsetof(VuforiaRenderer_t3433045970, ___mVideoBGConfigSet_2)); }
	inline bool get_mVideoBGConfigSet_2() const { return ___mVideoBGConfigSet_2; }
	inline bool* get_address_of_mVideoBGConfigSet_2() { return &___mVideoBGConfigSet_2; }
	inline void set_mVideoBGConfigSet_2(bool value)
	{
		___mVideoBGConfigSet_2 = value;
	}

	inline static int32_t get_offset_of_mVideoBackgroundTexture_3() { return static_cast<int32_t>(offsetof(VuforiaRenderer_t3433045970, ___mVideoBackgroundTexture_3)); }
	inline Texture_t3661962703 * get_mVideoBackgroundTexture_3() const { return ___mVideoBackgroundTexture_3; }
	inline Texture_t3661962703 ** get_address_of_mVideoBackgroundTexture_3() { return &___mVideoBackgroundTexture_3; }
	inline void set_mVideoBackgroundTexture_3(Texture_t3661962703 * value)
	{
		___mVideoBackgroundTexture_3 = value;
		Il2CppCodeGenWriteBarrier((&___mVideoBackgroundTexture_3), value);
	}

	inline static int32_t get_offset_of_mBackgroundTextureHasChanged_4() { return static_cast<int32_t>(offsetof(VuforiaRenderer_t3433045970, ___mBackgroundTextureHasChanged_4)); }
	inline bool get_mBackgroundTextureHasChanged_4() const { return ___mBackgroundTextureHasChanged_4; }
	inline bool* get_address_of_mBackgroundTextureHasChanged_4() { return &___mBackgroundTextureHasChanged_4; }
	inline void set_mBackgroundTextureHasChanged_4(bool value)
	{
		___mBackgroundTextureHasChanged_4 = value;
	}

	inline static int32_t get_offset_of_mLastSetReflection_5() { return static_cast<int32_t>(offsetof(VuforiaRenderer_t3433045970, ___mLastSetReflection_5)); }
	inline int32_t get_mLastSetReflection_5() const { return ___mLastSetReflection_5; }
	inline int32_t* get_address_of_mLastSetReflection_5() { return &___mLastSetReflection_5; }
	inline void set_mLastSetReflection_5(int32_t value)
	{
		___mLastSetReflection_5 = value;
	}

	inline static int32_t get_offset_of_mNativeRenderingCallback_6() { return static_cast<int32_t>(offsetof(VuforiaRenderer_t3433045970, ___mNativeRenderingCallback_6)); }
	inline intptr_t get_mNativeRenderingCallback_6() const { return ___mNativeRenderingCallback_6; }
	inline intptr_t* get_address_of_mNativeRenderingCallback_6() { return &___mNativeRenderingCallback_6; }
	inline void set_mNativeRenderingCallback_6(intptr_t value)
	{
		___mNativeRenderingCallback_6 = value;
	}
};

struct VuforiaRenderer_t3433045970_StaticFields
{
public:
	// Vuforia.VuforiaRenderer Vuforia.VuforiaRenderer::sInstance
	VuforiaRenderer_t3433045970 * ___sInstance_0;

public:
	inline static int32_t get_offset_of_sInstance_0() { return static_cast<int32_t>(offsetof(VuforiaRenderer_t3433045970_StaticFields, ___sInstance_0)); }
	inline VuforiaRenderer_t3433045970 * get_sInstance_0() const { return ___sInstance_0; }
	inline VuforiaRenderer_t3433045970 ** get_address_of_sInstance_0() { return &___sInstance_0; }
	inline void set_sInstance_0(VuforiaRenderer_t3433045970 * value)
	{
		___sInstance_0 = value;
		Il2CppCodeGenWriteBarrier((&___sInstance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VUFORIARENDERER_T3433045970_H
#ifndef CAMERADEVICE_T960297568_H
#define CAMERADEVICE_T960297568_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.CameraDevice
struct  CameraDevice_t960297568  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,Vuforia.Image> Vuforia.CameraDevice::mCameraImages
	Dictionary_2_t3630620928 * ___mCameraImages_1;
	// System.Collections.Generic.List`1<Vuforia.Image/PIXEL_FORMAT> Vuforia.CameraDevice::mForcedCameraFormats
	List_1_t386988881 * ___mForcedCameraFormats_2;
	// System.Boolean Vuforia.CameraDevice::mCameraReady
	bool ___mCameraReady_4;
	// System.Boolean Vuforia.CameraDevice::mIsDirty
	bool ___mIsDirty_5;
	// Vuforia.CameraDevice/CameraDirection Vuforia.CameraDevice::mActualCameraDirection
	int32_t ___mActualCameraDirection_6;
	// Vuforia.CameraDevice/CameraDirection Vuforia.CameraDevice::mSelectedCameraDirection
	int32_t ___mSelectedCameraDirection_7;
	// Vuforia.CameraDevice/CameraDeviceMode Vuforia.CameraDevice::mCameraDeviceMode
	int32_t ___mCameraDeviceMode_8;
	// Vuforia.CameraDevice/VideoModeData Vuforia.CameraDevice::mVideoModeData
	VideoModeData_t2066817255  ___mVideoModeData_9;
	// System.Boolean Vuforia.CameraDevice::mVideoModeDataNeedsUpdate
	bool ___mVideoModeDataNeedsUpdate_10;
	// System.Boolean Vuforia.CameraDevice::mHasCameraDeviceModeBeenSet
	bool ___mHasCameraDeviceModeBeenSet_11;
	// System.Boolean Vuforia.CameraDevice::mCameraActive
	bool ___mCameraActive_12;
	// System.Boolean Vuforia.CameraDevice::mIsCameraMocked
	bool ___mIsCameraMocked_13;

public:
	inline static int32_t get_offset_of_mCameraImages_1() { return static_cast<int32_t>(offsetof(CameraDevice_t960297568, ___mCameraImages_1)); }
	inline Dictionary_2_t3630620928 * get_mCameraImages_1() const { return ___mCameraImages_1; }
	inline Dictionary_2_t3630620928 ** get_address_of_mCameraImages_1() { return &___mCameraImages_1; }
	inline void set_mCameraImages_1(Dictionary_2_t3630620928 * value)
	{
		___mCameraImages_1 = value;
		Il2CppCodeGenWriteBarrier((&___mCameraImages_1), value);
	}

	inline static int32_t get_offset_of_mForcedCameraFormats_2() { return static_cast<int32_t>(offsetof(CameraDevice_t960297568, ___mForcedCameraFormats_2)); }
	inline List_1_t386988881 * get_mForcedCameraFormats_2() const { return ___mForcedCameraFormats_2; }
	inline List_1_t386988881 ** get_address_of_mForcedCameraFormats_2() { return &___mForcedCameraFormats_2; }
	inline void set_mForcedCameraFormats_2(List_1_t386988881 * value)
	{
		___mForcedCameraFormats_2 = value;
		Il2CppCodeGenWriteBarrier((&___mForcedCameraFormats_2), value);
	}

	inline static int32_t get_offset_of_mCameraReady_4() { return static_cast<int32_t>(offsetof(CameraDevice_t960297568, ___mCameraReady_4)); }
	inline bool get_mCameraReady_4() const { return ___mCameraReady_4; }
	inline bool* get_address_of_mCameraReady_4() { return &___mCameraReady_4; }
	inline void set_mCameraReady_4(bool value)
	{
		___mCameraReady_4 = value;
	}

	inline static int32_t get_offset_of_mIsDirty_5() { return static_cast<int32_t>(offsetof(CameraDevice_t960297568, ___mIsDirty_5)); }
	inline bool get_mIsDirty_5() const { return ___mIsDirty_5; }
	inline bool* get_address_of_mIsDirty_5() { return &___mIsDirty_5; }
	inline void set_mIsDirty_5(bool value)
	{
		___mIsDirty_5 = value;
	}

	inline static int32_t get_offset_of_mActualCameraDirection_6() { return static_cast<int32_t>(offsetof(CameraDevice_t960297568, ___mActualCameraDirection_6)); }
	inline int32_t get_mActualCameraDirection_6() const { return ___mActualCameraDirection_6; }
	inline int32_t* get_address_of_mActualCameraDirection_6() { return &___mActualCameraDirection_6; }
	inline void set_mActualCameraDirection_6(int32_t value)
	{
		___mActualCameraDirection_6 = value;
	}

	inline static int32_t get_offset_of_mSelectedCameraDirection_7() { return static_cast<int32_t>(offsetof(CameraDevice_t960297568, ___mSelectedCameraDirection_7)); }
	inline int32_t get_mSelectedCameraDirection_7() const { return ___mSelectedCameraDirection_7; }
	inline int32_t* get_address_of_mSelectedCameraDirection_7() { return &___mSelectedCameraDirection_7; }
	inline void set_mSelectedCameraDirection_7(int32_t value)
	{
		___mSelectedCameraDirection_7 = value;
	}

	inline static int32_t get_offset_of_mCameraDeviceMode_8() { return static_cast<int32_t>(offsetof(CameraDevice_t960297568, ___mCameraDeviceMode_8)); }
	inline int32_t get_mCameraDeviceMode_8() const { return ___mCameraDeviceMode_8; }
	inline int32_t* get_address_of_mCameraDeviceMode_8() { return &___mCameraDeviceMode_8; }
	inline void set_mCameraDeviceMode_8(int32_t value)
	{
		___mCameraDeviceMode_8 = value;
	}

	inline static int32_t get_offset_of_mVideoModeData_9() { return static_cast<int32_t>(offsetof(CameraDevice_t960297568, ___mVideoModeData_9)); }
	inline VideoModeData_t2066817255  get_mVideoModeData_9() const { return ___mVideoModeData_9; }
	inline VideoModeData_t2066817255 * get_address_of_mVideoModeData_9() { return &___mVideoModeData_9; }
	inline void set_mVideoModeData_9(VideoModeData_t2066817255  value)
	{
		___mVideoModeData_9 = value;
	}

	inline static int32_t get_offset_of_mVideoModeDataNeedsUpdate_10() { return static_cast<int32_t>(offsetof(CameraDevice_t960297568, ___mVideoModeDataNeedsUpdate_10)); }
	inline bool get_mVideoModeDataNeedsUpdate_10() const { return ___mVideoModeDataNeedsUpdate_10; }
	inline bool* get_address_of_mVideoModeDataNeedsUpdate_10() { return &___mVideoModeDataNeedsUpdate_10; }
	inline void set_mVideoModeDataNeedsUpdate_10(bool value)
	{
		___mVideoModeDataNeedsUpdate_10 = value;
	}

	inline static int32_t get_offset_of_mHasCameraDeviceModeBeenSet_11() { return static_cast<int32_t>(offsetof(CameraDevice_t960297568, ___mHasCameraDeviceModeBeenSet_11)); }
	inline bool get_mHasCameraDeviceModeBeenSet_11() const { return ___mHasCameraDeviceModeBeenSet_11; }
	inline bool* get_address_of_mHasCameraDeviceModeBeenSet_11() { return &___mHasCameraDeviceModeBeenSet_11; }
	inline void set_mHasCameraDeviceModeBeenSet_11(bool value)
	{
		___mHasCameraDeviceModeBeenSet_11 = value;
	}

	inline static int32_t get_offset_of_mCameraActive_12() { return static_cast<int32_t>(offsetof(CameraDevice_t960297568, ___mCameraActive_12)); }
	inline bool get_mCameraActive_12() const { return ___mCameraActive_12; }
	inline bool* get_address_of_mCameraActive_12() { return &___mCameraActive_12; }
	inline void set_mCameraActive_12(bool value)
	{
		___mCameraActive_12 = value;
	}

	inline static int32_t get_offset_of_mIsCameraMocked_13() { return static_cast<int32_t>(offsetof(CameraDevice_t960297568, ___mIsCameraMocked_13)); }
	inline bool get_mIsCameraMocked_13() const { return ___mIsCameraMocked_13; }
	inline bool* get_address_of_mIsCameraMocked_13() { return &___mIsCameraMocked_13; }
	inline void set_mIsCameraMocked_13(bool value)
	{
		___mIsCameraMocked_13 = value;
	}
};

struct CameraDevice_t960297568_StaticFields
{
public:
	// Vuforia.CameraDevice Vuforia.CameraDevice::mInstance
	CameraDevice_t960297568 * ___mInstance_0;
	// Vuforia.IWebCam Vuforia.CameraDevice::mWebCam
	RuntimeObject* ___mWebCam_3;

public:
	inline static int32_t get_offset_of_mInstance_0() { return static_cast<int32_t>(offsetof(CameraDevice_t960297568_StaticFields, ___mInstance_0)); }
	inline CameraDevice_t960297568 * get_mInstance_0() const { return ___mInstance_0; }
	inline CameraDevice_t960297568 ** get_address_of_mInstance_0() { return &___mInstance_0; }
	inline void set_mInstance_0(CameraDevice_t960297568 * value)
	{
		___mInstance_0 = value;
		Il2CppCodeGenWriteBarrier((&___mInstance_0), value);
	}

	inline static int32_t get_offset_of_mWebCam_3() { return static_cast<int32_t>(offsetof(CameraDevice_t960297568_StaticFields, ___mWebCam_3)); }
	inline RuntimeObject* get_mWebCam_3() const { return ___mWebCam_3; }
	inline RuntimeObject** get_address_of_mWebCam_3() { return &___mWebCam_3; }
	inline void set_mWebCam_3(RuntimeObject* value)
	{
		___mWebCam_3 = value;
		Il2CppCodeGenWriteBarrier((&___mWebCam_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERADEVICE_T960297568_H
#ifndef VUFORIAMANAGER_T1653423889_H
#define VUFORIAMANAGER_T1653423889_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaManager
struct  VuforiaManager_t1653423889  : public RuntimeObject
{
public:
	// System.Boolean Vuforia.VuforiaManager::<VideoBackgroundTextureSet>k__BackingField
	bool ___U3CVideoBackgroundTextureSetU3Ek__BackingField_0;
	// Vuforia.VuforiaARController/WorldCenterMode Vuforia.VuforiaManager::mWorldCenterMode
	int32_t ___mWorldCenterMode_2;
	// Vuforia.WorldCenterTrackableBehaviour Vuforia.VuforiaManager::mWorldCenter
	RuntimeObject* ___mWorldCenter_3;
	// Vuforia.VuMarkBehaviour Vuforia.VuforiaManager::mVuMarkWorldCenter
	VuMarkBehaviour_t1178230459 * ___mVuMarkWorldCenter_4;
	// UnityEngine.Transform Vuforia.VuforiaManager::mARCameraTransform
	Transform_t3600365921 * ___mARCameraTransform_5;
	// UnityEngine.Transform Vuforia.VuforiaManager::mCentralAnchorPoint
	Transform_t3600365921 * ___mCentralAnchorPoint_6;
	// Vuforia.TrackerData/TrackableResultData[] Vuforia.VuforiaManager::mTrackableResultDataArray
	TrackableResultDataU5BU5D_t4273811049* ___mTrackableResultDataArray_7;
	// Vuforia.TrackerData/VuMarkTargetData[] Vuforia.VuforiaManager::mVuMarkDataArray
	VuMarkTargetDataU5BU5D_t4015091482* ___mVuMarkDataArray_8;
	// Vuforia.TrackerData/VuMarkTargetResultData[] Vuforia.VuforiaManager::mVuMarkResultDataArray
	VuMarkTargetResultDataU5BU5D_t2157423781* ___mVuMarkResultDataArray_9;
	// System.Collections.Generic.LinkedList`1<Vuforia.VuforiaManager/TrackableIdPair> Vuforia.VuforiaManager::mWCTrackableFoundQueue
	LinkedList_1_t3066996466 * ___mWCTrackableFoundQueue_10;
	// System.IntPtr Vuforia.VuforiaManager::mImageHeaderData
	intptr_t ___mImageHeaderData_11;
	// System.Int32 Vuforia.VuforiaManager::mNumImageHeaders
	int32_t ___mNumImageHeaders_12;
	// System.Int32 Vuforia.VuforiaManager::mInjectedFrameIdx
	int32_t ___mInjectedFrameIdx_13;
	// System.IntPtr Vuforia.VuforiaManager::mLastProcessedFrameStatePtr
	intptr_t ___mLastProcessedFrameStatePtr_14;
	// System.Boolean Vuforia.VuforiaManager::mInitialized
	bool ___mInitialized_15;
	// System.Boolean Vuforia.VuforiaManager::mPaused
	bool ___mPaused_16;
	// Vuforia.TrackerData/FrameState Vuforia.VuforiaManager::mFrameState
	FrameState_t2717258284  ___mFrameState_17;
	// Vuforia.VuforiaManager/AutoRotationState Vuforia.VuforiaManager::mAutoRotationState
	AutoRotationState_t2150317116  ___mAutoRotationState_18;
	// System.Boolean Vuforia.VuforiaManager::mVideoBackgroundNeedsRedrawing
	bool ___mVideoBackgroundNeedsRedrawing_19;
	// System.Int32 Vuforia.VuforiaManager::mDiscardStatesForRendering
	int32_t ___mDiscardStatesForRendering_20;
	// System.Int32 Vuforia.VuforiaManager::mLastFrameIdx
	int32_t ___mLastFrameIdx_21;
	// System.Boolean Vuforia.VuforiaManager::mIsSeeThroughDevice
	bool ___mIsSeeThroughDevice_22;
	// Vuforia.LateLatchingManager Vuforia.VuforiaManager::mLateLatchingManager
	LateLatchingManager_t3198550161 * ___mLateLatchingManager_23;
	// Vuforia.CameraCalibrationComparer Vuforia.VuforiaManager::mCameraCalibrationComparer
	CameraCalibrationComparer_t2990055837 * ___mCameraCalibrationComparer_24;

public:
	inline static int32_t get_offset_of_U3CVideoBackgroundTextureSetU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(VuforiaManager_t1653423889, ___U3CVideoBackgroundTextureSetU3Ek__BackingField_0)); }
	inline bool get_U3CVideoBackgroundTextureSetU3Ek__BackingField_0() const { return ___U3CVideoBackgroundTextureSetU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CVideoBackgroundTextureSetU3Ek__BackingField_0() { return &___U3CVideoBackgroundTextureSetU3Ek__BackingField_0; }
	inline void set_U3CVideoBackgroundTextureSetU3Ek__BackingField_0(bool value)
	{
		___U3CVideoBackgroundTextureSetU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_mWorldCenterMode_2() { return static_cast<int32_t>(offsetof(VuforiaManager_t1653423889, ___mWorldCenterMode_2)); }
	inline int32_t get_mWorldCenterMode_2() const { return ___mWorldCenterMode_2; }
	inline int32_t* get_address_of_mWorldCenterMode_2() { return &___mWorldCenterMode_2; }
	inline void set_mWorldCenterMode_2(int32_t value)
	{
		___mWorldCenterMode_2 = value;
	}

	inline static int32_t get_offset_of_mWorldCenter_3() { return static_cast<int32_t>(offsetof(VuforiaManager_t1653423889, ___mWorldCenter_3)); }
	inline RuntimeObject* get_mWorldCenter_3() const { return ___mWorldCenter_3; }
	inline RuntimeObject** get_address_of_mWorldCenter_3() { return &___mWorldCenter_3; }
	inline void set_mWorldCenter_3(RuntimeObject* value)
	{
		___mWorldCenter_3 = value;
		Il2CppCodeGenWriteBarrier((&___mWorldCenter_3), value);
	}

	inline static int32_t get_offset_of_mVuMarkWorldCenter_4() { return static_cast<int32_t>(offsetof(VuforiaManager_t1653423889, ___mVuMarkWorldCenter_4)); }
	inline VuMarkBehaviour_t1178230459 * get_mVuMarkWorldCenter_4() const { return ___mVuMarkWorldCenter_4; }
	inline VuMarkBehaviour_t1178230459 ** get_address_of_mVuMarkWorldCenter_4() { return &___mVuMarkWorldCenter_4; }
	inline void set_mVuMarkWorldCenter_4(VuMarkBehaviour_t1178230459 * value)
	{
		___mVuMarkWorldCenter_4 = value;
		Il2CppCodeGenWriteBarrier((&___mVuMarkWorldCenter_4), value);
	}

	inline static int32_t get_offset_of_mARCameraTransform_5() { return static_cast<int32_t>(offsetof(VuforiaManager_t1653423889, ___mARCameraTransform_5)); }
	inline Transform_t3600365921 * get_mARCameraTransform_5() const { return ___mARCameraTransform_5; }
	inline Transform_t3600365921 ** get_address_of_mARCameraTransform_5() { return &___mARCameraTransform_5; }
	inline void set_mARCameraTransform_5(Transform_t3600365921 * value)
	{
		___mARCameraTransform_5 = value;
		Il2CppCodeGenWriteBarrier((&___mARCameraTransform_5), value);
	}

	inline static int32_t get_offset_of_mCentralAnchorPoint_6() { return static_cast<int32_t>(offsetof(VuforiaManager_t1653423889, ___mCentralAnchorPoint_6)); }
	inline Transform_t3600365921 * get_mCentralAnchorPoint_6() const { return ___mCentralAnchorPoint_6; }
	inline Transform_t3600365921 ** get_address_of_mCentralAnchorPoint_6() { return &___mCentralAnchorPoint_6; }
	inline void set_mCentralAnchorPoint_6(Transform_t3600365921 * value)
	{
		___mCentralAnchorPoint_6 = value;
		Il2CppCodeGenWriteBarrier((&___mCentralAnchorPoint_6), value);
	}

	inline static int32_t get_offset_of_mTrackableResultDataArray_7() { return static_cast<int32_t>(offsetof(VuforiaManager_t1653423889, ___mTrackableResultDataArray_7)); }
	inline TrackableResultDataU5BU5D_t4273811049* get_mTrackableResultDataArray_7() const { return ___mTrackableResultDataArray_7; }
	inline TrackableResultDataU5BU5D_t4273811049** get_address_of_mTrackableResultDataArray_7() { return &___mTrackableResultDataArray_7; }
	inline void set_mTrackableResultDataArray_7(TrackableResultDataU5BU5D_t4273811049* value)
	{
		___mTrackableResultDataArray_7 = value;
		Il2CppCodeGenWriteBarrier((&___mTrackableResultDataArray_7), value);
	}

	inline static int32_t get_offset_of_mVuMarkDataArray_8() { return static_cast<int32_t>(offsetof(VuforiaManager_t1653423889, ___mVuMarkDataArray_8)); }
	inline VuMarkTargetDataU5BU5D_t4015091482* get_mVuMarkDataArray_8() const { return ___mVuMarkDataArray_8; }
	inline VuMarkTargetDataU5BU5D_t4015091482** get_address_of_mVuMarkDataArray_8() { return &___mVuMarkDataArray_8; }
	inline void set_mVuMarkDataArray_8(VuMarkTargetDataU5BU5D_t4015091482* value)
	{
		___mVuMarkDataArray_8 = value;
		Il2CppCodeGenWriteBarrier((&___mVuMarkDataArray_8), value);
	}

	inline static int32_t get_offset_of_mVuMarkResultDataArray_9() { return static_cast<int32_t>(offsetof(VuforiaManager_t1653423889, ___mVuMarkResultDataArray_9)); }
	inline VuMarkTargetResultDataU5BU5D_t2157423781* get_mVuMarkResultDataArray_9() const { return ___mVuMarkResultDataArray_9; }
	inline VuMarkTargetResultDataU5BU5D_t2157423781** get_address_of_mVuMarkResultDataArray_9() { return &___mVuMarkResultDataArray_9; }
	inline void set_mVuMarkResultDataArray_9(VuMarkTargetResultDataU5BU5D_t2157423781* value)
	{
		___mVuMarkResultDataArray_9 = value;
		Il2CppCodeGenWriteBarrier((&___mVuMarkResultDataArray_9), value);
	}

	inline static int32_t get_offset_of_mWCTrackableFoundQueue_10() { return static_cast<int32_t>(offsetof(VuforiaManager_t1653423889, ___mWCTrackableFoundQueue_10)); }
	inline LinkedList_1_t3066996466 * get_mWCTrackableFoundQueue_10() const { return ___mWCTrackableFoundQueue_10; }
	inline LinkedList_1_t3066996466 ** get_address_of_mWCTrackableFoundQueue_10() { return &___mWCTrackableFoundQueue_10; }
	inline void set_mWCTrackableFoundQueue_10(LinkedList_1_t3066996466 * value)
	{
		___mWCTrackableFoundQueue_10 = value;
		Il2CppCodeGenWriteBarrier((&___mWCTrackableFoundQueue_10), value);
	}

	inline static int32_t get_offset_of_mImageHeaderData_11() { return static_cast<int32_t>(offsetof(VuforiaManager_t1653423889, ___mImageHeaderData_11)); }
	inline intptr_t get_mImageHeaderData_11() const { return ___mImageHeaderData_11; }
	inline intptr_t* get_address_of_mImageHeaderData_11() { return &___mImageHeaderData_11; }
	inline void set_mImageHeaderData_11(intptr_t value)
	{
		___mImageHeaderData_11 = value;
	}

	inline static int32_t get_offset_of_mNumImageHeaders_12() { return static_cast<int32_t>(offsetof(VuforiaManager_t1653423889, ___mNumImageHeaders_12)); }
	inline int32_t get_mNumImageHeaders_12() const { return ___mNumImageHeaders_12; }
	inline int32_t* get_address_of_mNumImageHeaders_12() { return &___mNumImageHeaders_12; }
	inline void set_mNumImageHeaders_12(int32_t value)
	{
		___mNumImageHeaders_12 = value;
	}

	inline static int32_t get_offset_of_mInjectedFrameIdx_13() { return static_cast<int32_t>(offsetof(VuforiaManager_t1653423889, ___mInjectedFrameIdx_13)); }
	inline int32_t get_mInjectedFrameIdx_13() const { return ___mInjectedFrameIdx_13; }
	inline int32_t* get_address_of_mInjectedFrameIdx_13() { return &___mInjectedFrameIdx_13; }
	inline void set_mInjectedFrameIdx_13(int32_t value)
	{
		___mInjectedFrameIdx_13 = value;
	}

	inline static int32_t get_offset_of_mLastProcessedFrameStatePtr_14() { return static_cast<int32_t>(offsetof(VuforiaManager_t1653423889, ___mLastProcessedFrameStatePtr_14)); }
	inline intptr_t get_mLastProcessedFrameStatePtr_14() const { return ___mLastProcessedFrameStatePtr_14; }
	inline intptr_t* get_address_of_mLastProcessedFrameStatePtr_14() { return &___mLastProcessedFrameStatePtr_14; }
	inline void set_mLastProcessedFrameStatePtr_14(intptr_t value)
	{
		___mLastProcessedFrameStatePtr_14 = value;
	}

	inline static int32_t get_offset_of_mInitialized_15() { return static_cast<int32_t>(offsetof(VuforiaManager_t1653423889, ___mInitialized_15)); }
	inline bool get_mInitialized_15() const { return ___mInitialized_15; }
	inline bool* get_address_of_mInitialized_15() { return &___mInitialized_15; }
	inline void set_mInitialized_15(bool value)
	{
		___mInitialized_15 = value;
	}

	inline static int32_t get_offset_of_mPaused_16() { return static_cast<int32_t>(offsetof(VuforiaManager_t1653423889, ___mPaused_16)); }
	inline bool get_mPaused_16() const { return ___mPaused_16; }
	inline bool* get_address_of_mPaused_16() { return &___mPaused_16; }
	inline void set_mPaused_16(bool value)
	{
		___mPaused_16 = value;
	}

	inline static int32_t get_offset_of_mFrameState_17() { return static_cast<int32_t>(offsetof(VuforiaManager_t1653423889, ___mFrameState_17)); }
	inline FrameState_t2717258284  get_mFrameState_17() const { return ___mFrameState_17; }
	inline FrameState_t2717258284 * get_address_of_mFrameState_17() { return &___mFrameState_17; }
	inline void set_mFrameState_17(FrameState_t2717258284  value)
	{
		___mFrameState_17 = value;
	}

	inline static int32_t get_offset_of_mAutoRotationState_18() { return static_cast<int32_t>(offsetof(VuforiaManager_t1653423889, ___mAutoRotationState_18)); }
	inline AutoRotationState_t2150317116  get_mAutoRotationState_18() const { return ___mAutoRotationState_18; }
	inline AutoRotationState_t2150317116 * get_address_of_mAutoRotationState_18() { return &___mAutoRotationState_18; }
	inline void set_mAutoRotationState_18(AutoRotationState_t2150317116  value)
	{
		___mAutoRotationState_18 = value;
	}

	inline static int32_t get_offset_of_mVideoBackgroundNeedsRedrawing_19() { return static_cast<int32_t>(offsetof(VuforiaManager_t1653423889, ___mVideoBackgroundNeedsRedrawing_19)); }
	inline bool get_mVideoBackgroundNeedsRedrawing_19() const { return ___mVideoBackgroundNeedsRedrawing_19; }
	inline bool* get_address_of_mVideoBackgroundNeedsRedrawing_19() { return &___mVideoBackgroundNeedsRedrawing_19; }
	inline void set_mVideoBackgroundNeedsRedrawing_19(bool value)
	{
		___mVideoBackgroundNeedsRedrawing_19 = value;
	}

	inline static int32_t get_offset_of_mDiscardStatesForRendering_20() { return static_cast<int32_t>(offsetof(VuforiaManager_t1653423889, ___mDiscardStatesForRendering_20)); }
	inline int32_t get_mDiscardStatesForRendering_20() const { return ___mDiscardStatesForRendering_20; }
	inline int32_t* get_address_of_mDiscardStatesForRendering_20() { return &___mDiscardStatesForRendering_20; }
	inline void set_mDiscardStatesForRendering_20(int32_t value)
	{
		___mDiscardStatesForRendering_20 = value;
	}

	inline static int32_t get_offset_of_mLastFrameIdx_21() { return static_cast<int32_t>(offsetof(VuforiaManager_t1653423889, ___mLastFrameIdx_21)); }
	inline int32_t get_mLastFrameIdx_21() const { return ___mLastFrameIdx_21; }
	inline int32_t* get_address_of_mLastFrameIdx_21() { return &___mLastFrameIdx_21; }
	inline void set_mLastFrameIdx_21(int32_t value)
	{
		___mLastFrameIdx_21 = value;
	}

	inline static int32_t get_offset_of_mIsSeeThroughDevice_22() { return static_cast<int32_t>(offsetof(VuforiaManager_t1653423889, ___mIsSeeThroughDevice_22)); }
	inline bool get_mIsSeeThroughDevice_22() const { return ___mIsSeeThroughDevice_22; }
	inline bool* get_address_of_mIsSeeThroughDevice_22() { return &___mIsSeeThroughDevice_22; }
	inline void set_mIsSeeThroughDevice_22(bool value)
	{
		___mIsSeeThroughDevice_22 = value;
	}

	inline static int32_t get_offset_of_mLateLatchingManager_23() { return static_cast<int32_t>(offsetof(VuforiaManager_t1653423889, ___mLateLatchingManager_23)); }
	inline LateLatchingManager_t3198550161 * get_mLateLatchingManager_23() const { return ___mLateLatchingManager_23; }
	inline LateLatchingManager_t3198550161 ** get_address_of_mLateLatchingManager_23() { return &___mLateLatchingManager_23; }
	inline void set_mLateLatchingManager_23(LateLatchingManager_t3198550161 * value)
	{
		___mLateLatchingManager_23 = value;
		Il2CppCodeGenWriteBarrier((&___mLateLatchingManager_23), value);
	}

	inline static int32_t get_offset_of_mCameraCalibrationComparer_24() { return static_cast<int32_t>(offsetof(VuforiaManager_t1653423889, ___mCameraCalibrationComparer_24)); }
	inline CameraCalibrationComparer_t2990055837 * get_mCameraCalibrationComparer_24() const { return ___mCameraCalibrationComparer_24; }
	inline CameraCalibrationComparer_t2990055837 ** get_address_of_mCameraCalibrationComparer_24() { return &___mCameraCalibrationComparer_24; }
	inline void set_mCameraCalibrationComparer_24(CameraCalibrationComparer_t2990055837 * value)
	{
		___mCameraCalibrationComparer_24 = value;
		Il2CppCodeGenWriteBarrier((&___mCameraCalibrationComparer_24), value);
	}
};

struct VuforiaManager_t1653423889_StaticFields
{
public:
	// Vuforia.VuforiaManager Vuforia.VuforiaManager::sInstance
	VuforiaManager_t1653423889 * ___sInstance_1;

public:
	inline static int32_t get_offset_of_sInstance_1() { return static_cast<int32_t>(offsetof(VuforiaManager_t1653423889_StaticFields, ___sInstance_1)); }
	inline VuforiaManager_t1653423889 * get_sInstance_1() const { return ___sInstance_1; }
	inline VuforiaManager_t1653423889 ** get_address_of_sInstance_1() { return &___sInstance_1; }
	inline void set_sInstance_1(VuforiaManager_t1653423889 * value)
	{
		___sInstance_1 = value;
		Il2CppCodeGenWriteBarrier((&___sInstance_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VUFORIAMANAGER_T1653423889_H
#ifndef COMPONENT_T1923634451_H
#define COMPONENT_T1923634451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t1923634451  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T1923634451_H
#ifndef TEXTURE_T3661962703_H
#define TEXTURE_T3661962703_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Texture
struct  Texture_t3661962703  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTURE_T3661962703_H
#ifndef PROFILECOLLECTION_T901995765_H
#define PROFILECOLLECTION_T901995765_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.WebCamProfile/ProfileCollection
struct  ProfileCollection_t901995765 
{
public:
	// Vuforia.WebCamProfile/ProfileData Vuforia.WebCamProfile/ProfileCollection::DefaultProfile
	ProfileData_t3519391925  ___DefaultProfile_0;
	// System.Collections.Generic.Dictionary`2<System.String,Vuforia.WebCamProfile/ProfileData> Vuforia.WebCamProfile/ProfileCollection::Profiles
	Dictionary_2_t3304648224 * ___Profiles_1;

public:
	inline static int32_t get_offset_of_DefaultProfile_0() { return static_cast<int32_t>(offsetof(ProfileCollection_t901995765, ___DefaultProfile_0)); }
	inline ProfileData_t3519391925  get_DefaultProfile_0() const { return ___DefaultProfile_0; }
	inline ProfileData_t3519391925 * get_address_of_DefaultProfile_0() { return &___DefaultProfile_0; }
	inline void set_DefaultProfile_0(ProfileData_t3519391925  value)
	{
		___DefaultProfile_0 = value;
	}

	inline static int32_t get_offset_of_Profiles_1() { return static_cast<int32_t>(offsetof(ProfileCollection_t901995765, ___Profiles_1)); }
	inline Dictionary_2_t3304648224 * get_Profiles_1() const { return ___Profiles_1; }
	inline Dictionary_2_t3304648224 ** get_address_of_Profiles_1() { return &___Profiles_1; }
	inline void set_Profiles_1(Dictionary_2_t3304648224 * value)
	{
		___Profiles_1 = value;
		Il2CppCodeGenWriteBarrier((&___Profiles_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Vuforia.WebCamProfile/ProfileCollection
struct ProfileCollection_t901995765_marshaled_pinvoke
{
	ProfileData_t3519391925  ___DefaultProfile_0;
	Dictionary_2_t3304648224 * ___Profiles_1;
};
// Native definition for COM marshalling of Vuforia.WebCamProfile/ProfileCollection
struct ProfileCollection_t901995765_marshaled_com
{
	ProfileData_t3519391925  ___DefaultProfile_0;
	Dictionary_2_t3304648224 * ___Profiles_1;
};
#endif // PROFILECOLLECTION_T901995765_H
#ifndef MESH_T3648964284_H
#define MESH_T3648964284_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Mesh
struct  Mesh_t3648964284  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESH_T3648964284_H
#ifndef TEXTURE2D_T3840446185_H
#define TEXTURE2D_T3840446185_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Texture2D
struct  Texture2D_t3840446185  : public Texture_t3661962703
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTURE2D_T3840446185_H
#ifndef RENDERTEXTURE_T2108887433_H
#define RENDERTEXTURE_T2108887433_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RenderTexture
struct  RenderTexture_t2108887433  : public Texture_t3661962703
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERTEXTURE_T2108887433_H
#ifndef DEFAULTWEBCAMTEXADAPTOR_T2452636845_H
#define DEFAULTWEBCAMTEXADAPTOR_T2452636845_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.DefaultWebCamTexAdaptor
struct  DefaultWebCamTexAdaptor_t2452636845  : public RuntimeObject
{
public:
	// UnityEngine.Texture2D Vuforia.DefaultWebCamTexAdaptor::mTexture
	Texture2D_t3840446185 * ___mTexture_0;
	// System.Boolean Vuforia.DefaultWebCamTexAdaptor::mPseudoPlaying
	bool ___mPseudoPlaying_1;
	// System.Double Vuforia.DefaultWebCamTexAdaptor::mMsBetweenFrames
	double ___mMsBetweenFrames_2;
	// System.DateTime Vuforia.DefaultWebCamTexAdaptor::mLastFrame
	DateTime_t3738529785  ___mLastFrame_3;

public:
	inline static int32_t get_offset_of_mTexture_0() { return static_cast<int32_t>(offsetof(DefaultWebCamTexAdaptor_t2452636845, ___mTexture_0)); }
	inline Texture2D_t3840446185 * get_mTexture_0() const { return ___mTexture_0; }
	inline Texture2D_t3840446185 ** get_address_of_mTexture_0() { return &___mTexture_0; }
	inline void set_mTexture_0(Texture2D_t3840446185 * value)
	{
		___mTexture_0 = value;
		Il2CppCodeGenWriteBarrier((&___mTexture_0), value);
	}

	inline static int32_t get_offset_of_mPseudoPlaying_1() { return static_cast<int32_t>(offsetof(DefaultWebCamTexAdaptor_t2452636845, ___mPseudoPlaying_1)); }
	inline bool get_mPseudoPlaying_1() const { return ___mPseudoPlaying_1; }
	inline bool* get_address_of_mPseudoPlaying_1() { return &___mPseudoPlaying_1; }
	inline void set_mPseudoPlaying_1(bool value)
	{
		___mPseudoPlaying_1 = value;
	}

	inline static int32_t get_offset_of_mMsBetweenFrames_2() { return static_cast<int32_t>(offsetof(DefaultWebCamTexAdaptor_t2452636845, ___mMsBetweenFrames_2)); }
	inline double get_mMsBetweenFrames_2() const { return ___mMsBetweenFrames_2; }
	inline double* get_address_of_mMsBetweenFrames_2() { return &___mMsBetweenFrames_2; }
	inline void set_mMsBetweenFrames_2(double value)
	{
		___mMsBetweenFrames_2 = value;
	}

	inline static int32_t get_offset_of_mLastFrame_3() { return static_cast<int32_t>(offsetof(DefaultWebCamTexAdaptor_t2452636845, ___mLastFrame_3)); }
	inline DateTime_t3738529785  get_mLastFrame_3() const { return ___mLastFrame_3; }
	inline DateTime_t3738529785 * get_address_of_mLastFrame_3() { return &___mLastFrame_3; }
	inline void set_mLastFrame_3(DateTime_t3738529785  value)
	{
		___mLastFrame_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTWEBCAMTEXADAPTOR_T2452636845_H
#ifndef VUFORIACONFIGURATION_T1763229349_H
#define VUFORIACONFIGURATION_T1763229349_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaConfiguration
struct  VuforiaConfiguration_t1763229349  : public ScriptableObject_t2528358522
{
public:
	// Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration Vuforia.VuforiaConfiguration::vuforia
	GenericVuforiaConfiguration_t3697830469 * ___vuforia_4;
	// Vuforia.VuforiaConfiguration/DigitalEyewearConfiguration Vuforia.VuforiaConfiguration::digitalEyewear
	DigitalEyewearConfiguration_t546560202 * ___digitalEyewear_5;
	// Vuforia.VuforiaConfiguration/VideoBackgroundConfiguration Vuforia.VuforiaConfiguration::videoBackground
	VideoBackgroundConfiguration_t3392414655 * ___videoBackground_6;
	// Vuforia.VuforiaConfiguration/DeviceTrackerConfiguration Vuforia.VuforiaConfiguration::deviceTracker
	DeviceTrackerConfiguration_t721467671 * ___deviceTracker_7;
	// Vuforia.VuforiaConfiguration/SmartTerrainConfiguration Vuforia.VuforiaConfiguration::smartTerrain
	SmartTerrainConfiguration_t1514074484 * ___smartTerrain_8;
	// Vuforia.VuforiaConfiguration/WebCamConfiguration Vuforia.VuforiaConfiguration::webcam
	WebCamConfiguration_t1101614731 * ___webcam_9;

public:
	inline static int32_t get_offset_of_vuforia_4() { return static_cast<int32_t>(offsetof(VuforiaConfiguration_t1763229349, ___vuforia_4)); }
	inline GenericVuforiaConfiguration_t3697830469 * get_vuforia_4() const { return ___vuforia_4; }
	inline GenericVuforiaConfiguration_t3697830469 ** get_address_of_vuforia_4() { return &___vuforia_4; }
	inline void set_vuforia_4(GenericVuforiaConfiguration_t3697830469 * value)
	{
		___vuforia_4 = value;
		Il2CppCodeGenWriteBarrier((&___vuforia_4), value);
	}

	inline static int32_t get_offset_of_digitalEyewear_5() { return static_cast<int32_t>(offsetof(VuforiaConfiguration_t1763229349, ___digitalEyewear_5)); }
	inline DigitalEyewearConfiguration_t546560202 * get_digitalEyewear_5() const { return ___digitalEyewear_5; }
	inline DigitalEyewearConfiguration_t546560202 ** get_address_of_digitalEyewear_5() { return &___digitalEyewear_5; }
	inline void set_digitalEyewear_5(DigitalEyewearConfiguration_t546560202 * value)
	{
		___digitalEyewear_5 = value;
		Il2CppCodeGenWriteBarrier((&___digitalEyewear_5), value);
	}

	inline static int32_t get_offset_of_videoBackground_6() { return static_cast<int32_t>(offsetof(VuforiaConfiguration_t1763229349, ___videoBackground_6)); }
	inline VideoBackgroundConfiguration_t3392414655 * get_videoBackground_6() const { return ___videoBackground_6; }
	inline VideoBackgroundConfiguration_t3392414655 ** get_address_of_videoBackground_6() { return &___videoBackground_6; }
	inline void set_videoBackground_6(VideoBackgroundConfiguration_t3392414655 * value)
	{
		___videoBackground_6 = value;
		Il2CppCodeGenWriteBarrier((&___videoBackground_6), value);
	}

	inline static int32_t get_offset_of_deviceTracker_7() { return static_cast<int32_t>(offsetof(VuforiaConfiguration_t1763229349, ___deviceTracker_7)); }
	inline DeviceTrackerConfiguration_t721467671 * get_deviceTracker_7() const { return ___deviceTracker_7; }
	inline DeviceTrackerConfiguration_t721467671 ** get_address_of_deviceTracker_7() { return &___deviceTracker_7; }
	inline void set_deviceTracker_7(DeviceTrackerConfiguration_t721467671 * value)
	{
		___deviceTracker_7 = value;
		Il2CppCodeGenWriteBarrier((&___deviceTracker_7), value);
	}

	inline static int32_t get_offset_of_smartTerrain_8() { return static_cast<int32_t>(offsetof(VuforiaConfiguration_t1763229349, ___smartTerrain_8)); }
	inline SmartTerrainConfiguration_t1514074484 * get_smartTerrain_8() const { return ___smartTerrain_8; }
	inline SmartTerrainConfiguration_t1514074484 ** get_address_of_smartTerrain_8() { return &___smartTerrain_8; }
	inline void set_smartTerrain_8(SmartTerrainConfiguration_t1514074484 * value)
	{
		___smartTerrain_8 = value;
		Il2CppCodeGenWriteBarrier((&___smartTerrain_8), value);
	}

	inline static int32_t get_offset_of_webcam_9() { return static_cast<int32_t>(offsetof(VuforiaConfiguration_t1763229349, ___webcam_9)); }
	inline WebCamConfiguration_t1101614731 * get_webcam_9() const { return ___webcam_9; }
	inline WebCamConfiguration_t1101614731 ** get_address_of_webcam_9() { return &___webcam_9; }
	inline void set_webcam_9(WebCamConfiguration_t1101614731 * value)
	{
		___webcam_9 = value;
		Il2CppCodeGenWriteBarrier((&___webcam_9), value);
	}
};

struct VuforiaConfiguration_t1763229349_StaticFields
{
public:
	// Vuforia.VuforiaConfiguration Vuforia.VuforiaConfiguration::mInstance
	VuforiaConfiguration_t1763229349 * ___mInstance_2;
	// System.Object Vuforia.VuforiaConfiguration::mPadlock
	RuntimeObject * ___mPadlock_3;

public:
	inline static int32_t get_offset_of_mInstance_2() { return static_cast<int32_t>(offsetof(VuforiaConfiguration_t1763229349_StaticFields, ___mInstance_2)); }
	inline VuforiaConfiguration_t1763229349 * get_mInstance_2() const { return ___mInstance_2; }
	inline VuforiaConfiguration_t1763229349 ** get_address_of_mInstance_2() { return &___mInstance_2; }
	inline void set_mInstance_2(VuforiaConfiguration_t1763229349 * value)
	{
		___mInstance_2 = value;
		Il2CppCodeGenWriteBarrier((&___mInstance_2), value);
	}

	inline static int32_t get_offset_of_mPadlock_3() { return static_cast<int32_t>(offsetof(VuforiaConfiguration_t1763229349_StaticFields, ___mPadlock_3)); }
	inline RuntimeObject * get_mPadlock_3() const { return ___mPadlock_3; }
	inline RuntimeObject ** get_address_of_mPadlock_3() { return &___mPadlock_3; }
	inline void set_mPadlock_3(RuntimeObject * value)
	{
		___mPadlock_3 = value;
		Il2CppCodeGenWriteBarrier((&___mPadlock_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VUFORIACONFIGURATION_T1763229349_H
#ifndef WEBCAMPROFILE_T4166408645_H
#define WEBCAMPROFILE_T4166408645_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.WebCamProfile
struct  WebCamProfile_t4166408645  : public RuntimeObject
{
public:
	// Vuforia.WebCamProfile/ProfileCollection Vuforia.WebCamProfile::mProfileCollection
	ProfileCollection_t901995765  ___mProfileCollection_0;

public:
	inline static int32_t get_offset_of_mProfileCollection_0() { return static_cast<int32_t>(offsetof(WebCamProfile_t4166408645, ___mProfileCollection_0)); }
	inline ProfileCollection_t901995765  get_mProfileCollection_0() const { return ___mProfileCollection_0; }
	inline ProfileCollection_t901995765 * get_address_of_mProfileCollection_0() { return &___mProfileCollection_0; }
	inline void set_mProfileCollection_0(ProfileCollection_t901995765  value)
	{
		___mProfileCollection_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEBCAMPROFILE_T4166408645_H
#ifndef TRANSFORM_T3600365921_H
#define TRANSFORM_T3600365921_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform
struct  Transform_t3600365921  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_T3600365921_H
#ifndef FUNC_3_T3440825513_H
#define FUNC_3_T3440825513_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`3<System.String,Vuforia.WebCamProfile/ProfileData,Vuforia.IWebCamTexAdaptor>
struct  Func_3_t3440825513  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_3_T3440825513_H
#ifndef MESHFILTER_T3523625662_H
#define MESHFILTER_T3523625662_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MeshFilter
struct  MeshFilter_t3523625662  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESHFILTER_T3523625662_H
#ifndef RENDERER_T2627027031_H
#define RENDERER_T2627027031_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Renderer
struct  Renderer_t2627027031  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERER_T2627027031_H
#ifndef COLLIDER_T1773347010_H
#define COLLIDER_T1773347010_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collider
struct  Collider_t1773347010  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLIDER_T1773347010_H
#ifndef BEHAVIOUR_T1437897464_H
#define BEHAVIOUR_T1437897464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t1437897464  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T1437897464_H
#ifndef WEBCAMTEXTURE_T1514609158_H
#define WEBCAMTEXTURE_T1514609158_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.WebCamTexture
struct  WebCamTexture_t1514609158  : public Texture_t3661962703
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEBCAMTEXTURE_T1514609158_H
#ifndef CAMERA_T4157153871_H
#define CAMERA_T4157153871_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Camera
struct  Camera_t4157153871  : public Behaviour_t1437897464
{
public:

public:
};

struct Camera_t4157153871_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t190067161 * ___onPreCull_2;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t190067161 * ___onPreRender_3;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t190067161 * ___onPostRender_4;

public:
	inline static int32_t get_offset_of_onPreCull_2() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPreCull_2)); }
	inline CameraCallback_t190067161 * get_onPreCull_2() const { return ___onPreCull_2; }
	inline CameraCallback_t190067161 ** get_address_of_onPreCull_2() { return &___onPreCull_2; }
	inline void set_onPreCull_2(CameraCallback_t190067161 * value)
	{
		___onPreCull_2 = value;
		Il2CppCodeGenWriteBarrier((&___onPreCull_2), value);
	}

	inline static int32_t get_offset_of_onPreRender_3() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPreRender_3)); }
	inline CameraCallback_t190067161 * get_onPreRender_3() const { return ___onPreRender_3; }
	inline CameraCallback_t190067161 ** get_address_of_onPreRender_3() { return &___onPreRender_3; }
	inline void set_onPreRender_3(CameraCallback_t190067161 * value)
	{
		___onPreRender_3 = value;
		Il2CppCodeGenWriteBarrier((&___onPreRender_3), value);
	}

	inline static int32_t get_offset_of_onPostRender_4() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPostRender_4)); }
	inline CameraCallback_t190067161 * get_onPostRender_4() const { return ___onPostRender_4; }
	inline CameraCallback_t190067161 ** get_address_of_onPostRender_4() { return &___onPostRender_4; }
	inline void set_onPostRender_4(CameraCallback_t190067161 * value)
	{
		___onPostRender_4 = value;
		Il2CppCodeGenWriteBarrier((&___onPostRender_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERA_T4157153871_H
#ifndef MONOBEHAVIOUR_T3962482529_H
#define MONOBEHAVIOUR_T3962482529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t3962482529  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T3962482529_H
#ifndef VUFORIAMONOBEHAVIOUR_T1150221792_H
#define VUFORIAMONOBEHAVIOUR_T1150221792_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VuforiaMonoBehaviour
struct  VuforiaMonoBehaviour_t1150221792  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VUFORIAMONOBEHAVIOUR_T1150221792_H
#ifndef VUFORIABEHAVIOUR_T2151848540_H
#define VUFORIABEHAVIOUR_T2151848540_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaBehaviour
struct  VuforiaBehaviour_t2151848540  : public VuforiaMonoBehaviour_t1150221792
{
public:
	// Vuforia.VuforiaARController/WorldCenterMode Vuforia.VuforiaBehaviour::mWorldCenterMode
	int32_t ___mWorldCenterMode_3;
	// Vuforia.TrackableBehaviour Vuforia.VuforiaBehaviour::mWorldCenter
	TrackableBehaviour_t1113559212 * ___mWorldCenter_4;
	// System.Boolean Vuforia.VuforiaBehaviour::mAppIsQuitting
	bool ___mAppIsQuitting_5;
	// System.Action Vuforia.VuforiaBehaviour::AwakeEvent
	Action_t1264377477 * ___AwakeEvent_8;
	// System.Action Vuforia.VuforiaBehaviour::OnEnableEvent
	Action_t1264377477 * ___OnEnableEvent_9;
	// System.Action Vuforia.VuforiaBehaviour::StartEvent
	Action_t1264377477 * ___StartEvent_10;
	// System.Action Vuforia.VuforiaBehaviour::UpdateEvent
	Action_t1264377477 * ___UpdateEvent_11;
	// System.Action Vuforia.VuforiaBehaviour::OnLevelWasLoadedEvent
	Action_t1264377477 * ___OnLevelWasLoadedEvent_12;
	// System.Action`1<System.Boolean> Vuforia.VuforiaBehaviour::OnApplicationPauseEvent
	Action_1_t269755560 * ___OnApplicationPauseEvent_13;
	// System.Action Vuforia.VuforiaBehaviour::OnDisableEvent
	Action_t1264377477 * ___OnDisableEvent_14;
	// System.Action Vuforia.VuforiaBehaviour::OnDestroyEvent
	Action_t1264377477 * ___OnDestroyEvent_15;

public:
	inline static int32_t get_offset_of_mWorldCenterMode_3() { return static_cast<int32_t>(offsetof(VuforiaBehaviour_t2151848540, ___mWorldCenterMode_3)); }
	inline int32_t get_mWorldCenterMode_3() const { return ___mWorldCenterMode_3; }
	inline int32_t* get_address_of_mWorldCenterMode_3() { return &___mWorldCenterMode_3; }
	inline void set_mWorldCenterMode_3(int32_t value)
	{
		___mWorldCenterMode_3 = value;
	}

	inline static int32_t get_offset_of_mWorldCenter_4() { return static_cast<int32_t>(offsetof(VuforiaBehaviour_t2151848540, ___mWorldCenter_4)); }
	inline TrackableBehaviour_t1113559212 * get_mWorldCenter_4() const { return ___mWorldCenter_4; }
	inline TrackableBehaviour_t1113559212 ** get_address_of_mWorldCenter_4() { return &___mWorldCenter_4; }
	inline void set_mWorldCenter_4(TrackableBehaviour_t1113559212 * value)
	{
		___mWorldCenter_4 = value;
		Il2CppCodeGenWriteBarrier((&___mWorldCenter_4), value);
	}

	inline static int32_t get_offset_of_mAppIsQuitting_5() { return static_cast<int32_t>(offsetof(VuforiaBehaviour_t2151848540, ___mAppIsQuitting_5)); }
	inline bool get_mAppIsQuitting_5() const { return ___mAppIsQuitting_5; }
	inline bool* get_address_of_mAppIsQuitting_5() { return &___mAppIsQuitting_5; }
	inline void set_mAppIsQuitting_5(bool value)
	{
		___mAppIsQuitting_5 = value;
	}

	inline static int32_t get_offset_of_AwakeEvent_8() { return static_cast<int32_t>(offsetof(VuforiaBehaviour_t2151848540, ___AwakeEvent_8)); }
	inline Action_t1264377477 * get_AwakeEvent_8() const { return ___AwakeEvent_8; }
	inline Action_t1264377477 ** get_address_of_AwakeEvent_8() { return &___AwakeEvent_8; }
	inline void set_AwakeEvent_8(Action_t1264377477 * value)
	{
		___AwakeEvent_8 = value;
		Il2CppCodeGenWriteBarrier((&___AwakeEvent_8), value);
	}

	inline static int32_t get_offset_of_OnEnableEvent_9() { return static_cast<int32_t>(offsetof(VuforiaBehaviour_t2151848540, ___OnEnableEvent_9)); }
	inline Action_t1264377477 * get_OnEnableEvent_9() const { return ___OnEnableEvent_9; }
	inline Action_t1264377477 ** get_address_of_OnEnableEvent_9() { return &___OnEnableEvent_9; }
	inline void set_OnEnableEvent_9(Action_t1264377477 * value)
	{
		___OnEnableEvent_9 = value;
		Il2CppCodeGenWriteBarrier((&___OnEnableEvent_9), value);
	}

	inline static int32_t get_offset_of_StartEvent_10() { return static_cast<int32_t>(offsetof(VuforiaBehaviour_t2151848540, ___StartEvent_10)); }
	inline Action_t1264377477 * get_StartEvent_10() const { return ___StartEvent_10; }
	inline Action_t1264377477 ** get_address_of_StartEvent_10() { return &___StartEvent_10; }
	inline void set_StartEvent_10(Action_t1264377477 * value)
	{
		___StartEvent_10 = value;
		Il2CppCodeGenWriteBarrier((&___StartEvent_10), value);
	}

	inline static int32_t get_offset_of_UpdateEvent_11() { return static_cast<int32_t>(offsetof(VuforiaBehaviour_t2151848540, ___UpdateEvent_11)); }
	inline Action_t1264377477 * get_UpdateEvent_11() const { return ___UpdateEvent_11; }
	inline Action_t1264377477 ** get_address_of_UpdateEvent_11() { return &___UpdateEvent_11; }
	inline void set_UpdateEvent_11(Action_t1264377477 * value)
	{
		___UpdateEvent_11 = value;
		Il2CppCodeGenWriteBarrier((&___UpdateEvent_11), value);
	}

	inline static int32_t get_offset_of_OnLevelWasLoadedEvent_12() { return static_cast<int32_t>(offsetof(VuforiaBehaviour_t2151848540, ___OnLevelWasLoadedEvent_12)); }
	inline Action_t1264377477 * get_OnLevelWasLoadedEvent_12() const { return ___OnLevelWasLoadedEvent_12; }
	inline Action_t1264377477 ** get_address_of_OnLevelWasLoadedEvent_12() { return &___OnLevelWasLoadedEvent_12; }
	inline void set_OnLevelWasLoadedEvent_12(Action_t1264377477 * value)
	{
		___OnLevelWasLoadedEvent_12 = value;
		Il2CppCodeGenWriteBarrier((&___OnLevelWasLoadedEvent_12), value);
	}

	inline static int32_t get_offset_of_OnApplicationPauseEvent_13() { return static_cast<int32_t>(offsetof(VuforiaBehaviour_t2151848540, ___OnApplicationPauseEvent_13)); }
	inline Action_1_t269755560 * get_OnApplicationPauseEvent_13() const { return ___OnApplicationPauseEvent_13; }
	inline Action_1_t269755560 ** get_address_of_OnApplicationPauseEvent_13() { return &___OnApplicationPauseEvent_13; }
	inline void set_OnApplicationPauseEvent_13(Action_1_t269755560 * value)
	{
		___OnApplicationPauseEvent_13 = value;
		Il2CppCodeGenWriteBarrier((&___OnApplicationPauseEvent_13), value);
	}

	inline static int32_t get_offset_of_OnDisableEvent_14() { return static_cast<int32_t>(offsetof(VuforiaBehaviour_t2151848540, ___OnDisableEvent_14)); }
	inline Action_t1264377477 * get_OnDisableEvent_14() const { return ___OnDisableEvent_14; }
	inline Action_t1264377477 ** get_address_of_OnDisableEvent_14() { return &___OnDisableEvent_14; }
	inline void set_OnDisableEvent_14(Action_t1264377477 * value)
	{
		___OnDisableEvent_14 = value;
		Il2CppCodeGenWriteBarrier((&___OnDisableEvent_14), value);
	}

	inline static int32_t get_offset_of_OnDestroyEvent_15() { return static_cast<int32_t>(offsetof(VuforiaBehaviour_t2151848540, ___OnDestroyEvent_15)); }
	inline Action_t1264377477 * get_OnDestroyEvent_15() const { return ___OnDestroyEvent_15; }
	inline Action_t1264377477 ** get_address_of_OnDestroyEvent_15() { return &___OnDestroyEvent_15; }
	inline void set_OnDestroyEvent_15(Action_t1264377477 * value)
	{
		___OnDestroyEvent_15 = value;
		Il2CppCodeGenWriteBarrier((&___OnDestroyEvent_15), value);
	}
};

struct VuforiaBehaviour_t2151848540_StaticFields
{
public:
	// Vuforia.VuforiaBehaviour Vuforia.VuforiaBehaviour::mVuforiaBehaviour
	VuforiaBehaviour_t2151848540 * ___mVuforiaBehaviour_2;
	// System.Action`1<Vuforia.VuforiaBehaviour> Vuforia.VuforiaBehaviour::BehaviourCreated
	Action_1_t2324316135 * ___BehaviourCreated_6;
	// System.Action`1<Vuforia.VuforiaBehaviour> Vuforia.VuforiaBehaviour::BehaviourDestroyed
	Action_1_t2324316135 * ___BehaviourDestroyed_7;

public:
	inline static int32_t get_offset_of_mVuforiaBehaviour_2() { return static_cast<int32_t>(offsetof(VuforiaBehaviour_t2151848540_StaticFields, ___mVuforiaBehaviour_2)); }
	inline VuforiaBehaviour_t2151848540 * get_mVuforiaBehaviour_2() const { return ___mVuforiaBehaviour_2; }
	inline VuforiaBehaviour_t2151848540 ** get_address_of_mVuforiaBehaviour_2() { return &___mVuforiaBehaviour_2; }
	inline void set_mVuforiaBehaviour_2(VuforiaBehaviour_t2151848540 * value)
	{
		___mVuforiaBehaviour_2 = value;
		Il2CppCodeGenWriteBarrier((&___mVuforiaBehaviour_2), value);
	}

	inline static int32_t get_offset_of_BehaviourCreated_6() { return static_cast<int32_t>(offsetof(VuforiaBehaviour_t2151848540_StaticFields, ___BehaviourCreated_6)); }
	inline Action_1_t2324316135 * get_BehaviourCreated_6() const { return ___BehaviourCreated_6; }
	inline Action_1_t2324316135 ** get_address_of_BehaviourCreated_6() { return &___BehaviourCreated_6; }
	inline void set_BehaviourCreated_6(Action_1_t2324316135 * value)
	{
		___BehaviourCreated_6 = value;
		Il2CppCodeGenWriteBarrier((&___BehaviourCreated_6), value);
	}

	inline static int32_t get_offset_of_BehaviourDestroyed_7() { return static_cast<int32_t>(offsetof(VuforiaBehaviour_t2151848540_StaticFields, ___BehaviourDestroyed_7)); }
	inline Action_1_t2324316135 * get_BehaviourDestroyed_7() const { return ___BehaviourDestroyed_7; }
	inline Action_1_t2324316135 ** get_address_of_BehaviourDestroyed_7() { return &___BehaviourDestroyed_7; }
	inline void set_BehaviourDestroyed_7(Action_1_t2324316135 * value)
	{
		___BehaviourDestroyed_7 = value;
		Il2CppCodeGenWriteBarrier((&___BehaviourDestroyed_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VUFORIABEHAVIOUR_T2151848540_H
#ifndef TRACKABLEBEHAVIOUR_T1113559212_H
#define TRACKABLEBEHAVIOUR_T1113559212_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.TrackableBehaviour
struct  TrackableBehaviour_t1113559212  : public VuforiaMonoBehaviour_t1150221792
{
public:
	// System.Double Vuforia.TrackableBehaviour::<TimeStamp>k__BackingField
	double ___U3CTimeStampU3Ek__BackingField_2;
	// System.String Vuforia.TrackableBehaviour::mTrackableName
	String_t* ___mTrackableName_3;
	// System.Boolean Vuforia.TrackableBehaviour::mPreserveChildSize
	bool ___mPreserveChildSize_4;
	// System.Boolean Vuforia.TrackableBehaviour::mInitializedInEditor
	bool ___mInitializedInEditor_5;
	// UnityEngine.Vector3 Vuforia.TrackableBehaviour::mPreviousScale
	Vector3_t3722313464  ___mPreviousScale_6;
	// Vuforia.TrackableBehaviour/Status Vuforia.TrackableBehaviour::mStatus
	int32_t ___mStatus_7;
	// Vuforia.Trackable Vuforia.TrackableBehaviour::mTrackable
	RuntimeObject* ___mTrackable_8;
	// System.Collections.Generic.List`1<Vuforia.ITrackableEventHandler> Vuforia.TrackableBehaviour::mTrackableEventHandlers
	List_1_t2968050330 * ___mTrackableEventHandlers_9;

public:
	inline static int32_t get_offset_of_U3CTimeStampU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t1113559212, ___U3CTimeStampU3Ek__BackingField_2)); }
	inline double get_U3CTimeStampU3Ek__BackingField_2() const { return ___U3CTimeStampU3Ek__BackingField_2; }
	inline double* get_address_of_U3CTimeStampU3Ek__BackingField_2() { return &___U3CTimeStampU3Ek__BackingField_2; }
	inline void set_U3CTimeStampU3Ek__BackingField_2(double value)
	{
		___U3CTimeStampU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_mTrackableName_3() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t1113559212, ___mTrackableName_3)); }
	inline String_t* get_mTrackableName_3() const { return ___mTrackableName_3; }
	inline String_t** get_address_of_mTrackableName_3() { return &___mTrackableName_3; }
	inline void set_mTrackableName_3(String_t* value)
	{
		___mTrackableName_3 = value;
		Il2CppCodeGenWriteBarrier((&___mTrackableName_3), value);
	}

	inline static int32_t get_offset_of_mPreserveChildSize_4() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t1113559212, ___mPreserveChildSize_4)); }
	inline bool get_mPreserveChildSize_4() const { return ___mPreserveChildSize_4; }
	inline bool* get_address_of_mPreserveChildSize_4() { return &___mPreserveChildSize_4; }
	inline void set_mPreserveChildSize_4(bool value)
	{
		___mPreserveChildSize_4 = value;
	}

	inline static int32_t get_offset_of_mInitializedInEditor_5() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t1113559212, ___mInitializedInEditor_5)); }
	inline bool get_mInitializedInEditor_5() const { return ___mInitializedInEditor_5; }
	inline bool* get_address_of_mInitializedInEditor_5() { return &___mInitializedInEditor_5; }
	inline void set_mInitializedInEditor_5(bool value)
	{
		___mInitializedInEditor_5 = value;
	}

	inline static int32_t get_offset_of_mPreviousScale_6() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t1113559212, ___mPreviousScale_6)); }
	inline Vector3_t3722313464  get_mPreviousScale_6() const { return ___mPreviousScale_6; }
	inline Vector3_t3722313464 * get_address_of_mPreviousScale_6() { return &___mPreviousScale_6; }
	inline void set_mPreviousScale_6(Vector3_t3722313464  value)
	{
		___mPreviousScale_6 = value;
	}

	inline static int32_t get_offset_of_mStatus_7() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t1113559212, ___mStatus_7)); }
	inline int32_t get_mStatus_7() const { return ___mStatus_7; }
	inline int32_t* get_address_of_mStatus_7() { return &___mStatus_7; }
	inline void set_mStatus_7(int32_t value)
	{
		___mStatus_7 = value;
	}

	inline static int32_t get_offset_of_mTrackable_8() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t1113559212, ___mTrackable_8)); }
	inline RuntimeObject* get_mTrackable_8() const { return ___mTrackable_8; }
	inline RuntimeObject** get_address_of_mTrackable_8() { return &___mTrackable_8; }
	inline void set_mTrackable_8(RuntimeObject* value)
	{
		___mTrackable_8 = value;
		Il2CppCodeGenWriteBarrier((&___mTrackable_8), value);
	}

	inline static int32_t get_offset_of_mTrackableEventHandlers_9() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t1113559212, ___mTrackableEventHandlers_9)); }
	inline List_1_t2968050330 * get_mTrackableEventHandlers_9() const { return ___mTrackableEventHandlers_9; }
	inline List_1_t2968050330 ** get_address_of_mTrackableEventHandlers_9() { return &___mTrackableEventHandlers_9; }
	inline void set_mTrackableEventHandlers_9(List_1_t2968050330 * value)
	{
		___mTrackableEventHandlers_9 = value;
		Il2CppCodeGenWriteBarrier((&___mTrackableEventHandlers_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRACKABLEBEHAVIOUR_T1113559212_H
#ifndef WIREFRAMETRACKABLEEVENTHANDLER_T2143753312_H
#define WIREFRAMETRACKABLEEVENTHANDLER_T2143753312_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.WireframeTrackableEventHandler
struct  WireframeTrackableEventHandler_t2143753312  : public VuforiaMonoBehaviour_t1150221792
{
public:
	// Vuforia.TrackableBehaviour Vuforia.WireframeTrackableEventHandler::mTrackableBehaviour
	TrackableBehaviour_t1113559212 * ___mTrackableBehaviour_2;

public:
	inline static int32_t get_offset_of_mTrackableBehaviour_2() { return static_cast<int32_t>(offsetof(WireframeTrackableEventHandler_t2143753312, ___mTrackableBehaviour_2)); }
	inline TrackableBehaviour_t1113559212 * get_mTrackableBehaviour_2() const { return ___mTrackableBehaviour_2; }
	inline TrackableBehaviour_t1113559212 ** get_address_of_mTrackableBehaviour_2() { return &___mTrackableBehaviour_2; }
	inline void set_mTrackableBehaviour_2(TrackableBehaviour_t1113559212 * value)
	{
		___mTrackableBehaviour_2 = value;
		Il2CppCodeGenWriteBarrier((&___mTrackableBehaviour_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WIREFRAMETRACKABLEEVENTHANDLER_T2143753312_H
#ifndef WIREFRAMEBEHAVIOUR_T1831066704_H
#define WIREFRAMEBEHAVIOUR_T1831066704_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.WireframeBehaviour
struct  WireframeBehaviour_t1831066704  : public VuforiaMonoBehaviour_t1150221792
{
public:
	// UnityEngine.Material Vuforia.WireframeBehaviour::lineMaterial
	Material_t340375123 * ___lineMaterial_2;
	// System.Boolean Vuforia.WireframeBehaviour::ShowLines
	bool ___ShowLines_3;
	// UnityEngine.Color Vuforia.WireframeBehaviour::LineColor
	Color_t2555686324  ___LineColor_4;
	// UnityEngine.Material Vuforia.WireframeBehaviour::mLineMaterial
	Material_t340375123 * ___mLineMaterial_5;

public:
	inline static int32_t get_offset_of_lineMaterial_2() { return static_cast<int32_t>(offsetof(WireframeBehaviour_t1831066704, ___lineMaterial_2)); }
	inline Material_t340375123 * get_lineMaterial_2() const { return ___lineMaterial_2; }
	inline Material_t340375123 ** get_address_of_lineMaterial_2() { return &___lineMaterial_2; }
	inline void set_lineMaterial_2(Material_t340375123 * value)
	{
		___lineMaterial_2 = value;
		Il2CppCodeGenWriteBarrier((&___lineMaterial_2), value);
	}

	inline static int32_t get_offset_of_ShowLines_3() { return static_cast<int32_t>(offsetof(WireframeBehaviour_t1831066704, ___ShowLines_3)); }
	inline bool get_ShowLines_3() const { return ___ShowLines_3; }
	inline bool* get_address_of_ShowLines_3() { return &___ShowLines_3; }
	inline void set_ShowLines_3(bool value)
	{
		___ShowLines_3 = value;
	}

	inline static int32_t get_offset_of_LineColor_4() { return static_cast<int32_t>(offsetof(WireframeBehaviour_t1831066704, ___LineColor_4)); }
	inline Color_t2555686324  get_LineColor_4() const { return ___LineColor_4; }
	inline Color_t2555686324 * get_address_of_LineColor_4() { return &___LineColor_4; }
	inline void set_LineColor_4(Color_t2555686324  value)
	{
		___LineColor_4 = value;
	}

	inline static int32_t get_offset_of_mLineMaterial_5() { return static_cast<int32_t>(offsetof(WireframeBehaviour_t1831066704, ___mLineMaterial_5)); }
	inline Material_t340375123 * get_mLineMaterial_5() const { return ___mLineMaterial_5; }
	inline Material_t340375123 ** get_address_of_mLineMaterial_5() { return &___mLineMaterial_5; }
	inline void set_mLineMaterial_5(Material_t340375123 * value)
	{
		___mLineMaterial_5 = value;
		Il2CppCodeGenWriteBarrier((&___mLineMaterial_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WIREFRAMEBEHAVIOUR_T1831066704_H
// UnityEngine.Camera[]
struct CameraU5BU5D_t1709987734  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Camera_t4157153871 * m_Items[1];

public:
	inline Camera_t4157153871 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Camera_t4157153871 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Camera_t4157153871 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Camera_t4157153871 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Camera_t4157153871 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Camera_t4157153871 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.WebCamDevice[]
struct WebCamDeviceU5BU5D_t4294070825  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) WebCamDevice_t1322781432  m_Items[1];

public:
	inline WebCamDevice_t1322781432  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline WebCamDevice_t1322781432 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, WebCamDevice_t1322781432  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline WebCamDevice_t1322781432  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline WebCamDevice_t1322781432 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, WebCamDevice_t1322781432  value)
	{
		m_Items[index] = value;
	}
};
// System.Int32[]
struct Int32U5BU5D_t385246372  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Color32[]
struct Color32U5BU5D_t3850468773  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Color32_t2600501292  m_Items[1];

public:
	inline Color32_t2600501292  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Color32_t2600501292 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Color32_t2600501292  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Color32_t2600501292  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Color32_t2600501292 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Color32_t2600501292  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1718750761  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector3_t3722313464  m_Items[1];

public:
	inline Vector3_t3722313464  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t3722313464 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t3722313464  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t3722313464  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t3722313464 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t3722313464  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Collider[]
struct ColliderU5BU5D_t4234922487  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Collider_t1773347010 * m_Items[1];

public:
	inline Collider_t1773347010 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Collider_t1773347010 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Collider_t1773347010 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Collider_t1773347010 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Collider_t1773347010 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Collider_t1773347010 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Vuforia.WireframeBehaviour[]
struct WireframeBehaviourU5BU5D_t4114094193  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) WireframeBehaviour_t1831066704 * m_Items[1];

public:
	inline WireframeBehaviour_t1831066704 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline WireframeBehaviour_t1831066704 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, WireframeBehaviour_t1831066704 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline WireframeBehaviour_t1831066704 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline WireframeBehaviour_t1831066704 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, WireframeBehaviour_t1831066704 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.Renderer[]
struct RendererU5BU5D_t3210418286  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Renderer_t2627027031 * m_Items[1];

public:
	inline Renderer_t2627027031 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Renderer_t2627027031 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Renderer_t2627027031 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Renderer_t2627027031 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Renderer_t2627027031 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Renderer_t2627027031 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};


// !2 System.Func`3<System.Object,Vuforia.WebCamProfile/ProfileData,System.Object>::Invoke(!0,!1)
extern "C"  RuntimeObject * Func_3_Invoke_m1710983919_gshared (Func_3_t917206208 * __this, RuntimeObject * p0, ProfileData_t3519391925  p1, const RuntimeMethod* method);
// System.Void System.Func`3<System.Object,Vuforia.WebCamProfile/ProfileData,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void Func_3__ctor_m1845711009_gshared (Func_3_t917206208 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// T[] Vuforia.UnityComponentExtensions::GetComponentsOnlyInChildren<System.Object>(UnityEngine.Component)
extern "C"  ObjectU5BU5D_t2843939325* UnityComponentExtensions_GetComponentsOnlyInChildren_TisRuntimeObject_m2620794288_gshared (RuntimeObject * __this /* static, unused */, Component_t1923634451 * ___obj0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::TryGetValue(!0,!1&)
extern "C"  bool Dictionary_2_TryGetValue_m3004143623_gshared (Dictionary_2_t571830913 * __this, RuntimeObject * p0, ProfileData_t3519391925 * p1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::ContainsKey(!0)
extern "C"  bool Dictionary_2_ContainsKey_m757242677_gshared (Dictionary_2_t571830913 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// !!0[] UnityEngine.GameObject::GetComponentsInChildren<System.Object>()
extern "C"  ObjectU5BU5D_t2843939325* GameObject_GetComponentsInChildren_TisRuntimeObject_m1461871634_gshared (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C"  RuntimeObject * Component_GetComponent_TisRuntimeObject_m2906321015_gshared (Component_t1923634451 * __this, const RuntimeMethod* method);
// !!0[] UnityEngine.Component::GetComponentsInChildren<System.Object>(System.Boolean)
extern "C"  ObjectU5BU5D_t2843939325* Component_GetComponentsInChildren_TisRuntimeObject_m2748495586_gshared (Component_t1923634451 * __this, bool p0, const RuntimeMethod* method);

// System.Boolean Vuforia.WebCam::get_IsTextureSizeAvailable()
extern "C"  bool WebCam_get_IsTextureSizeAvailable_m2013217807 (WebCam_t2427002488 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.TextureRenderer::get_Width()
extern "C"  int32_t TextureRenderer_get_Width_m3088621639 (TextureRenderer_t3278815845 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.TextureRenderer::get_Height()
extern "C"  int32_t TextureRenderer_get_Height_m721659918 (TextureRenderer_t3278815845 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaRenderer/Vec2I::.ctor(System.Int32,System.Int32)
extern "C"  void Vec2I__ctor_m1553072655 (Vec2I_t3527036565 * __this, int32_t ___v10, int32_t ___v21, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Object::.ctor()
extern "C"  void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaRuntimeUtilities::IsPlayMode()
extern "C"  bool VuforiaRuntimeUtilities_IsPlayMode_m4165764373 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Camera::get_cullingMask()
extern "C"  int32_t Camera_get_cullingMask_m679085748 (Camera_t4157153871 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::set_cullingMask(System.Int32)
extern "C"  void Camera_set_cullingMask_m1402455777 (Camera_t4157153871 * __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WebCamProfile::.ctor()
extern "C"  void WebCamProfile__ctor_m820471938 (WebCamProfile_t4166408645 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaRuntimeUtilities::IsVuforiaEnabled()
extern "C"  bool VuforiaRuntimeUtilities_IsVuforiaEnabled_m1152377305 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.WebCamDevice[] UnityEngine.WebCamTexture::get_devices()
extern "C"  WebCamDeviceU5BU5D_t4294070825* WebCamTexture_get_devices_m844246756 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.WebCamDevice::get_name()
extern "C"  String_t* WebCamDevice_get_name_m3782173082 (WebCamDevice_t1322781432 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::Equals(System.String)
extern "C"  bool String_Equals_m2270643605 (String_t* __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Vuforia.WebCamProfile/ProfileData Vuforia.WebCamProfile::GetProfile(System.String)
extern "C"  ProfileData_t3519391925  WebCamProfile_GetProfile_m3959388229 (WebCamProfile_t4166408645 * __this, String_t* ___webcamName0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !2 System.Func`3<System.String,Vuforia.WebCamProfile/ProfileData,Vuforia.IWebCamTexAdaptor>::Invoke(!0,!1)
#define Func_3_Invoke_m2574976179(__this, p0, p1, method) ((  RuntimeObject* (*) (Func_3_t3440825513 *, String_t*, ProfileData_t3519391925 , const RuntimeMethod*))Func_3_Invoke_m1710983919_gshared)(__this, p0, p1, method)
// Vuforia.WebCamProfile/ProfileData Vuforia.WebCamProfile::get_Default()
extern "C"  ProfileData_t3519391925  WebCamProfile_get_Default_m3789142228 (WebCamProfile_t4166408645 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DefaultWebCamTexAdaptor::.ctor(System.Int32,Vuforia.VuforiaRenderer/Vec2I)
extern "C"  void DefaultWebCamTexAdaptor__ctor_m299475590 (DefaultWebCamTexAdaptor_t2452636845 * __this, int32_t ___requestedFPS0, Vec2I_t3527036565  ___requestedTextureSize1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WebCam::StartCamera()
extern "C"  void WebCam_StartCamera_m784729827 (WebCam_t2427002488 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WebCam::StopCamera()
extern "C"  void WebCam_StopCamera_m1511219799 (WebCam_t2427002488 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RenderTexture Vuforia.TextureRenderer::Render()
extern "C"  RenderTexture_t2108887433 * TextureRenderer_Render_m2768706254 (TextureRenderer_t3278815845 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RenderTexture::set_active(UnityEngine.RenderTexture)
extern "C"  void RenderTexture_set_active_m1437732586 (RuntimeObject * __this /* static, unused */, RenderTexture_t2108887433 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::ReadPixels(UnityEngine.Rect,System.Int32,System.Int32,System.Boolean)
extern "C"  void Texture2D_ReadPixels_m1510783487 (Texture2D_t3840446185 * __this, Rect_t2360479859  p0, int32_t p1, int32_t p2, bool p3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color32[] UnityEngine.Texture2D::GetPixels32()
extern "C"  Color32U5BU5D_t3850468773* Texture2D_GetPixels32_m647746242 (Texture2D_t3840446185 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RenderTexture::ReleaseTemporary(UnityEngine.RenderTexture)
extern "C"  void RenderTexture_ReleaseTemporary_m2400081536 (RuntimeObject * __this /* static, unused */, RenderTexture_t2108887433 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Vuforia.VuforiaRenderer Vuforia.VuforiaRenderer::get_Instance()
extern "C"  VuforiaRenderer_t3433045970 * VuforiaRenderer_get_Instance_m1013623488 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture Vuforia.VuforiaRenderer::get_VideoBackgroundTexture()
extern "C"  Texture_t3661962703 * VuforiaRenderer_get_VideoBackgroundTexture_m954851426 (VuforiaRenderer_t3433045970 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern "C"  bool Object_op_Inequality_m4071470834 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Vuforia.CameraDevice Vuforia.CameraDevice::get_Instance()
extern "C"  CameraDevice_t960297568 * CameraDevice_get_Instance_m2002290155 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Vuforia.Image Vuforia.CameraDevice::GetCameraImage(Vuforia.Image/PIXEL_FORMAT)
extern "C"  Image_t745056343 * CameraDevice_GetCameraImage_m151166382 (CameraDevice_t960297568 * __this, int32_t ___format0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.Image::get_BufferWidth()
extern "C"  int32_t Image_get_BufferWidth_m2324972437 (Image_t745056343 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.Image::get_BufferHeight()
extern "C"  int32_t Image_get_BufferHeight_m1709821308 (Image_t745056343 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TextureFormat UnityEngine.Texture2D::get_format()
extern "C"  int32_t Texture2D_get_format_m2371899271 (Texture2D_t3840446185 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Texture2D::Resize(System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean)
extern "C"  bool Texture2D_Resize_m2702227255 (Texture2D_t3840446185 * __this, int32_t p0, int32_t p1, int32_t p2, bool p3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color32[] Vuforia.Image::GetPixels32()
extern "C"  Color32U5BU5D_t3850468773* Image_GetPixels32_m1416524729 (Image_t745056343 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::SetPixels32(UnityEngine.Color32[])
extern "C"  void Texture2D_SetPixels32_m1141065075 (Texture2D_t3840446185 * __this, Color32U5BU5D_t3850468773* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::Apply()
extern "C"  void Texture2D_Apply_m2271746283 (Texture2D_t3840446185 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WebCam::set_IsTextureSizeAvailable(System.Boolean)
extern "C"  void WebCam_set_IsTextureSizeAvailable_m2087388218 (WebCam_t2427002488 * __this, bool ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextureRenderer::Destroy()
extern "C"  void TextureRenderer_Destroy_m719921383 (TextureRenderer_t3278815845 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WebCam::ComputeResampledTextureSize()
extern "C"  void WebCam_ComputeResampledTextureSize_m321498482 (WebCam_t2427002488 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Vuforia.IVuforiaWrapper Vuforia.VuforiaWrapper::get_Instance()
extern "C"  RuntimeObject* VuforiaWrapper_get_Instance_m2947582594 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextureRenderer::.ctor(UnityEngine.Texture,System.Int32,Vuforia.VuforiaRenderer/Vec2I)
extern "C"  void TextureRenderer__ctor_m495126481 (TextureRenderer_t3278815845 * __this, Texture_t3661962703 * ___textureToRender0, int32_t ___renderTextureLayer1, Vec2I_t3527036565  ___requestedTextureSize2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32)
extern "C"  void Texture2D__ctor_m373113269 (Texture2D_t3840446185 * __this, int32_t p0, int32_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C"  void Rect__ctor_m2614021312 (Rect_t2360479859 * __this, float p0, float p1, float p2, float p3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Func`3<System.String,Vuforia.WebCamProfile/ProfileData,Vuforia.IWebCamTexAdaptor>::.ctor(System.Object,System.IntPtr)
#define Func_3__ctor_m3165450366(__this, p0, p1, method) ((  void (*) (Func_3_t3440825513 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_3__ctor_m1845711009_gshared)(__this, p0, p1, method)
// System.Void Vuforia.ARController::.ctor()
extern "C"  void ARController__ctor_m2746373751 (ARController_t116632334 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Monitor::Enter(System.Object)
extern "C"  void Monitor_Enter_m2249409497 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WebCamARController::.ctor()
extern "C"  void WebCamARController__ctor_m751483383 (WebCamARController_t3718642882 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Monitor::Exit(System.Object)
extern "C"  void Monitor_Exit_m3585316909 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Vuforia.WebCamARController Vuforia.WebCamARController::get_Instance()
extern "C"  WebCamARController_t3718642882 * WebCamARController_get_Instance_m1980552932 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ARController::Register(Vuforia.ARController)
extern "C"  void ARController_Register_m1901857971 (RuntimeObject * __this /* static, unused */, ARController_t116632334 * ___controller0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.WebCam::get_IsPlaying()
extern "C"  bool WebCam_get_IsPlaying_m2513986056 (WebCam_t2427002488 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Application::set_runInBackground(System.Boolean)
extern "C"  void Application_set_runInBackground_m2169704730 (RuntimeObject * __this /* static, unused */, bool p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Vuforia.VuforiaBehaviour Vuforia.ARController::get_VuforiaBehaviour()
extern "C"  VuforiaBehaviour_t2151848540 * ARController_get_VuforiaBehaviour_m4257639924 (ARController_t116632334 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// T[] Vuforia.UnityComponentExtensions::GetComponentsOnlyInChildren<UnityEngine.Camera>(UnityEngine.Component)
#define UnityComponentExtensions_GetComponentsOnlyInChildren_TisCamera_t4157153871_m2275549933(__this /* static, unused */, ___obj0, method) ((  CameraU5BU5D_t1709987734* (*) (RuntimeObject * /* static, unused */, Component_t1923634451 *, const RuntimeMethod*))UnityComponentExtensions_GetComponentsOnlyInChildren_TisRuntimeObject_m2620794288_gshared)(__this /* static, unused */, ___obj0, method)
// System.Void Vuforia.WebCam::.ctor(UnityEngine.Camera[],System.Int32,System.String,System.Boolean,System.Func`3<System.String,Vuforia.WebCamProfile/ProfileData,Vuforia.IWebCamTexAdaptor>)
extern "C"  void WebCam__ctor_m2427464772 (WebCam_t2427002488 * __this, CameraU5BU5D_t1709987734* ___arCameras0, int32_t ___renderTextureLayer1, String_t* ___webcamDeviceName2, bool ___flipHorizontally3, Func_3_t3440825513 * ___webCamTexProvider4, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Vuforia.VuforiaConfiguration Vuforia.VuforiaConfiguration::get_Instance()
extern "C"  VuforiaConfiguration_t1763229349 * VuforiaConfiguration_get_Instance_m3335903280 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Vuforia.VuforiaConfiguration/WebCamConfiguration Vuforia.VuforiaConfiguration::get_WebCam()
extern "C"  WebCamConfiguration_t1101614731 * VuforiaConfiguration_get_WebCam_m946983315 (VuforiaConfiguration_t1763229349 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaConfiguration/WebCamConfiguration::get_RenderTextureLayer()
extern "C"  int32_t WebCamConfiguration_get_RenderTextureLayer_m1149468349 (WebCamConfiguration_t1101614731 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String Vuforia.VuforiaConfiguration/WebCamConfiguration::get_DeviceNameSetInEditor()
extern "C"  String_t* WebCamConfiguration_get_DeviceNameSetInEditor_m553266002 (WebCamConfiguration_t1101614731 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaConfiguration/WebCamConfiguration::get_FlipHorizontally()
extern "C"  bool WebCamConfiguration_get_FlipHorizontally_m4118647777 (WebCamConfiguration_t1101614731 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WebCam::ResetPlaying()
extern "C"  void WebCam_ResetPlaying_m697251242 (WebCam_t2427002488 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WebCam::OnDestroy()
extern "C"  void WebCam_OnDestroy_m332336637 (WebCam_t2427002488 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WebCam::Update()
extern "C"  void WebCam_Update_m3572144808 (WebCam_t2427002488 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WebCamARController/<>c::.ctor()
extern "C"  void U3CU3Ec__ctor_m3450078098 (U3CU3Ec_t3582055403 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WebCamTexAdaptor::.ctor(System.String,Vuforia.WebCamProfile/ProfileData)
extern "C"  void WebCamTexAdaptor__ctor_m852957585 (WebCamTexAdaptor_t3430449046 * __this, String_t* ___deviceName0, ProfileData_t3519391925  ___profile1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Vuforia.IPlayModeEditorUtility Vuforia.PlayModeEditorUtility::get_Instance()
extern "C"  RuntimeObject* PlayModeEditorUtility_get_Instance_m334266941 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::ToLower()
extern "C"  String_t* String_ToLower_m2029374922 (String_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Vuforia.WebCamProfile/ProfileData>::TryGetValue(!0,!1&)
#define Dictionary_2_TryGetValue_m1260807329(__this, p0, p1, method) ((  bool (*) (Dictionary_2_t3304648224 *, String_t*, ProfileData_t3519391925 *, const RuntimeMethod*))Dictionary_2_TryGetValue_m3004143623_gshared)(__this, p0, p1, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Vuforia.WebCamProfile/ProfileData>::ContainsKey(!0)
#define Dictionary_2_ContainsKey_m4190276240(__this, p0, method) ((  bool (*) (Dictionary_2_t3304648224 *, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m757242677_gshared)(__this, p0, method)
// System.Void Vuforia.WebCamProfile/ProfileCollection::.ctor(Vuforia.WebCamProfile/ProfileData,System.Collections.Generic.Dictionary`2<System.String,Vuforia.WebCamProfile/ProfileData>)
extern "C"  void ProfileCollection__ctor_m3713293092 (ProfileCollection_t901995765 * __this, ProfileData_t3519391925  ___defaultProfile0, Dictionary_2_t3304648224 * ___profiles1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.WebCamTexture::get_didUpdateThisFrame()
extern "C"  bool WebCamTexture_get_didUpdateThisFrame_m567567483 (WebCamTexture_t1514609158 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.WebCamTexture::get_isPlaying()
extern "C"  bool WebCamTexture_get_isPlaying_m3525118025 (WebCamTexture_t1514609158 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WebCamTexture::.ctor()
extern "C"  void WebCamTexture__ctor_m2601640589 (WebCamTexture_t1514609158 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WebCamTexture::set_deviceName(System.String)
extern "C"  void WebCamTexture_set_deviceName_m2479609938 (WebCamTexture_t1514609158 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WebCamTexture::set_requestedFPS(System.Single)
extern "C"  void WebCamTexture_set_requestedFPS_m1422816314 (WebCamTexture_t1514609158 * __this, float p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WebCamTexture::set_requestedWidth(System.Int32)
extern "C"  void WebCamTexture_set_requestedWidth_m1301971691 (WebCamTexture_t1514609158 * __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WebCamTexture::set_requestedHeight(System.Int32)
extern "C"  void WebCamTexture_set_requestedHeight_m3636279808 (WebCamTexture_t1514609158 * __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Application::HasUserAuthorization(UnityEngine.UserAuthorization)
extern "C"  bool Application_HasUserAuthorization_m3146187033 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AsyncOperation UnityEngine.Application::RequestUserAuthorization(UnityEngine.UserAuthorization)
extern "C"  AsyncOperation_t1445031843 * Application_RequestUserAuthorization_m1407144003 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WebCamTexture::Play()
extern "C"  void WebCamTexture_Play_m3866603461 (WebCamTexture_t1514609158 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WebCamTexture::Stop()
extern "C"  void WebCamTexture_Stop_m3471034432 (WebCamTexture_t1514609158 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.AsyncOperation::get_isDone()
extern "C"  bool AsyncOperation_get_isDone_m412925263 (AsyncOperation_t1445031843 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::.ctor(UnityEngine.Material)
extern "C"  void Material__ctor_m249231841 (Material_t340375123 * __this, Material_t340375123 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
extern "C"  void Debug_LogWarning_m3752629331 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Vuforia.VuforiaManager Vuforia.VuforiaManager::get_Instance()
extern "C"  VuforiaManager_t1653423889 * VuforiaManager_get_Instance_m100367560 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform Vuforia.VuforiaManager::get_ARCameraTransform()
extern "C"  Transform_t3600365921 * VuforiaManager_get_ARCameraTransform_m958890547 (VuforiaManager_t1653423889 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C"  GameObject_t1113636619 * Component_get_gameObject_m442555142 (Component_t1923634451 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0[] UnityEngine.GameObject::GetComponentsInChildren<UnityEngine.Camera>()
#define GameObject_GetComponentsInChildren_TisCamera_t4157153871_m926460427(__this, method) ((  CameraU5BU5D_t1709987734* (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponentsInChildren_TisRuntimeObject_m1461871634_gshared)(__this, method)
// UnityEngine.Camera UnityEngine.Camera::get_current()
extern "C"  Camera_t4157153871 * Camera_get_current_m929992396 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
extern "C"  bool Object_op_Equality_m1810815630 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<UnityEngine.MeshFilter>()
#define Component_GetComponent_TisMeshFilter_t3523625662_m569847836(__this, method) ((  MeshFilter_t3523625662 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
extern "C"  bool Object_op_Implicit_m3574996620 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Mesh UnityEngine.MeshFilter::get_sharedMesh()
extern "C"  Mesh_t3648964284 * MeshFilter_get_sharedMesh_m1726897210 (MeshFilter_t3523625662 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] UnityEngine.Mesh::get_vertices()
extern "C"  Vector3U5BU5D_t1718750761* Mesh_get_vertices_m3585684815 (Mesh_t3648964284 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32[] UnityEngine.Mesh::get_triangles()
extern "C"  Int32U5BU5D_t385246372* Mesh_get_triangles_m3059934743 (Mesh_t3648964284 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::PushMatrix()
extern "C"  void GL_PushMatrix_m1848274883 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C"  Transform_t3600365921 * Component_get_transform_m3162698980 (Component_t1923634451 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Transform::get_localToWorldMatrix()
extern "C"  Matrix4x4_t1817901843  Transform_get_localToWorldMatrix_m4155710351 (Transform_t3600365921 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::MultMatrix(UnityEngine.Matrix4x4)
extern "C"  void GL_MultMatrix_m3576884247 (RuntimeObject * __this /* static, unused */, Matrix4x4_t1817901843  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Material::SetPass(System.Int32)
extern "C"  bool Material_SetPass_m686253719 (Material_t340375123 * __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetColor(System.String,UnityEngine.Color)
extern "C"  void Material_SetColor_m2020215303 (Material_t340375123 * __this, String_t* p0, Color_t2555686324  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::Begin(System.Int32)
extern "C"  void GL_Begin_m1290681325 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::Vertex(UnityEngine.Vector3)
extern "C"  void GL_Vertex_m691990801 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::End()
extern "C"  void GL_End_m539612367 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::PopMatrix()
extern "C"  void GL_PopMatrix_m3416050869 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Behaviour::get_enabled()
extern "C"  bool Behaviour_get_enabled_m753527255 (Behaviour_t1437897464 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
extern "C"  Transform_t3600365921 * GameObject_get_transform_m1369836730 (GameObject_t1113636619 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
extern "C"  Vector3_t3722313464  Transform_get_position_m36019626 (Transform_t3600365921 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
extern "C"  Quaternion_t2301928331  Transform_get_rotation_m3502953881 (Transform_t3600365921 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_lossyScale()
extern "C"  Vector3_t3722313464  Transform_get_lossyScale_m465496651 (Transform_t3600365921 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::TRS(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
extern "C"  Matrix4x4_t1817901843  Matrix4x4_TRS_m3801934620 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Quaternion_t2301928331  p1, Vector3_t3722313464  p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gizmos::set_matrix(UnityEngine.Matrix4x4)
extern "C"  void Gizmos_set_matrix_m3287403258 (RuntimeObject * __this /* static, unused */, Matrix4x4_t1817901843  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gizmos::set_color(UnityEngine.Color)
extern "C"  void Gizmos_set_color_m3399737545 (RuntimeObject * __this /* static, unused */, Color_t2555686324  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gizmos::DrawLine(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  void Gizmos_DrawLine_m3273476787 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Color::get_green()
extern "C"  Color_t2555686324  Color_get_green_m490390750 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void VuforiaMonoBehaviour::.ctor()
extern "C"  void VuforiaMonoBehaviour__ctor_m348562674 (VuforiaMonoBehaviour_t1150221792 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<Vuforia.TrackableBehaviour>()
#define Component_GetComponent_TisTrackableBehaviour_t1113559212_m1736119408(__this, method) ((  TrackableBehaviour_t1113559212 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// System.Void Vuforia.TrackableBehaviour::RegisterTrackableEventHandler(Vuforia.ITrackableEventHandler)
extern "C"  void TrackableBehaviour_RegisterTrackableEventHandler_m2462783619 (TrackableBehaviour_t1113559212 * __this, RuntimeObject* ___trackableEventHandler0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WireframeTrackableEventHandler::OnTrackingFound()
extern "C"  void WireframeTrackableEventHandler_OnTrackingFound_m2813716415 (WireframeTrackableEventHandler_t2143753312 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WireframeTrackableEventHandler::OnTrackingLost()
extern "C"  void WireframeTrackableEventHandler_OnTrackingLost_m1967211472 (WireframeTrackableEventHandler_t2143753312 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.Renderer>(System.Boolean)
#define Component_GetComponentsInChildren_TisRenderer_t2627027031_m2673895911(__this, p0, method) ((  RendererU5BU5D_t3210418286* (*) (Component_t1923634451 *, bool, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m2748495586_gshared)(__this, p0, method)
// !!0[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.Collider>(System.Boolean)
#define Component_GetComponentsInChildren_TisCollider_t1773347010_m2667952426(__this, p0, method) ((  ColliderU5BU5D_t4234922487* (*) (Component_t1923634451 *, bool, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m2748495586_gshared)(__this, p0, method)
// !!0[] UnityEngine.Component::GetComponentsInChildren<Vuforia.WireframeBehaviour>(System.Boolean)
#define Component_GetComponentsInChildren_TisWireframeBehaviour_t1831066704_m2022065013(__this, p0, method) ((  WireframeBehaviourU5BU5D_t4114094193* (*) (Component_t1923634451 *, bool, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m2748495586_gshared)(__this, p0, method)
// System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
extern "C"  void Renderer_set_enabled_m1727253150 (Renderer_t2627027031 * __this, bool p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Collider::set_enabled(System.Boolean)
extern "C"  void Collider_set_enabled_m1517463283 (Collider_t1773347010 * __this, bool p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
extern "C"  void Behaviour_set_enabled_m20417929 (Behaviour_t1437897464 * __this, bool p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String Vuforia.TrackableBehaviour::get_TrackableName()
extern "C"  String_t* TrackableBehaviour_get_TrackableName_m3644057705 (TrackableBehaviour_t1113559212 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String,System.String,System.String)
extern "C"  String_t* String_Concat_m3755062657 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, String_t* p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::Log(System.Object)
extern "C"  void Debug_Log_m4051431634 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C"  void MonoBehaviour__ctor_m1579109191 (MonoBehaviour_t3962482529 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Vuforia.WebCam::get_DidUpdateThisFrame()
extern "C"  bool WebCam_get_DidUpdateThisFrame_m2722596423 (WebCam_t2427002488 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebCam_get_DidUpdateThisFrame_m2722596423_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = WebCam_get_IsTextureSizeAvailable_m2013217807(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		RuntimeObject* L_1 = __this->get_mWebCamTexture_2();
		NullCheck(L_1);
		bool L_2 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean Vuforia.IWebCamTexAdaptor::get_DidUpdateThisFrame() */, IWebCamTexAdaptor_t3823546776_il2cpp_TypeInfo_var, L_1);
		return L_2;
	}

IL_0014:
	{
		return (bool)0;
	}
}
// System.Boolean Vuforia.WebCam::get_IsPlaying()
extern "C"  bool WebCam_get_IsPlaying_m2513986056 (WebCam_t2427002488 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebCam_get_IsPlaying_m2513986056_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_mWebCamTexture_2();
		NullCheck(L_0);
		bool L_1 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean Vuforia.IWebCamTexAdaptor::get_IsPlaying() */, IWebCamTexAdaptor_t3823546776_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Int32 Vuforia.WebCam::get_ActualWidth()
extern "C"  int32_t WebCam_get_ActualWidth_m1009219810 (WebCam_t2427002488 * __this, const RuntimeMethod* method)
{
	{
		TextureRenderer_t3278815845 * L_0 = __this->get_mTextureRenderer_5();
		NullCheck(L_0);
		int32_t L_1 = TextureRenderer_get_Width_m3088621639(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 Vuforia.WebCam::get_ActualHeight()
extern "C"  int32_t WebCam_get_ActualHeight_m4039447561 (WebCam_t2427002488 * __this, const RuntimeMethod* method)
{
	{
		TextureRenderer_t3278815845 * L_0 = __this->get_mTextureRenderer_5();
		NullCheck(L_0);
		int32_t L_1 = TextureRenderer_get_Height_m721659918(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean Vuforia.WebCam::get_IsTextureSizeAvailable()
extern "C"  bool WebCam_get_IsTextureSizeAvailable_m2013217807 (WebCam_t2427002488 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CIsTextureSizeAvailableU3Ek__BackingField_14();
		return L_0;
	}
}
// System.Void Vuforia.WebCam::set_IsTextureSizeAvailable(System.Boolean)
extern "C"  void WebCam_set_IsTextureSizeAvailable_m2087388218 (WebCam_t2427002488 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CIsTextureSizeAvailableU3Ek__BackingField_14(L_0);
		return;
	}
}
// System.Boolean Vuforia.WebCam::get_FlipHorizontally()
extern "C"  bool WebCam_get_FlipHorizontally_m1687226069 (WebCam_t2427002488 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_mFlipHorizontally_9();
		return L_0;
	}
}
// Vuforia.VuforiaRenderer/Vec2I Vuforia.WebCam::get_ResampledTextureSize()
extern "C"  Vec2I_t3527036565  WebCam_get_ResampledTextureSize_m744105525 (WebCam_t2427002488 * __this, const RuntimeMethod* method)
{
	{
		ProfileData_t3519391925 * L_0 = __this->get_address_of_mWebCamProfile_8();
		Vec2I_t3527036565  L_1 = L_0->get_ResampledTextureSize_1();
		return L_1;
	}
}
// System.Void Vuforia.WebCam::ComputeResampledTextureSize()
extern "C"  void WebCam_ComputeResampledTextureSize_m321498482 (WebCam_t2427002488 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebCam_ComputeResampledTextureSize_m321498482_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	ProfileData_t3519391925  V_3;
	memset(&V_3, 0, sizeof(V_3));
	ProfileData_t3519391925  V_4;
	memset(&V_4, 0, sizeof(V_4));
	{
		RuntimeObject* L_0 = __this->get_mWebCamTexture_2();
		NullCheck(L_0);
		Texture_t3661962703 * L_1 = InterfaceFuncInvoker0< Texture_t3661962703 * >::Invoke(2 /* UnityEngine.Texture Vuforia.IWebCamTexAdaptor::get_Texture() */, IWebCamTexAdaptor_t3823546776_il2cpp_TypeInfo_var, L_0);
		NullCheck(L_1);
		int32_t L_2 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_1);
		RuntimeObject* L_3 = __this->get_mWebCamTexture_2();
		NullCheck(L_3);
		Texture_t3661962703 * L_4 = InterfaceFuncInvoker0< Texture_t3661962703 * >::Invoke(2 /* UnityEngine.Texture Vuforia.IWebCamTexAdaptor::get_Texture() */, IWebCamTexAdaptor_t3823546776_il2cpp_TypeInfo_var, L_3);
		NullCheck(L_4);
		int32_t L_5 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_4);
		V_0 = ((float)((float)(((float)((float)L_2)))/(float)(((float)((float)L_5)))));
		ProfileData_t3519391925 * L_6 = __this->get_address_of_mWebCamProfile_8();
		Vec2I_t3527036565 * L_7 = L_6->get_address_of_ResampledTextureSize_1();
		int32_t L_8 = L_7->get_x_0();
		float L_9 = V_0;
		V_1 = ((float)il2cpp_codegen_multiply((float)(((float)((float)L_8))), (float)L_9));
		float L_10 = V_1;
		V_2 = (((int32_t)((int32_t)L_10)));
		float L_11 = V_1;
		float L_12 = fabsf(((float)il2cpp_codegen_subtract((float)(480.0f), (float)L_11)));
		if ((!(((float)L_12) <= ((float)(1.0f)))))
		{
			goto IL_0054;
		}
	}
	{
		V_2 = ((int32_t)480);
	}

IL_0054:
	{
		float L_13 = V_1;
		float L_14 = fabsf(((float)il2cpp_codegen_subtract((float)(360.0f), (float)L_13)));
		if ((!(((float)L_14) <= ((float)(1.0f)))))
		{
			goto IL_006d;
		}
	}
	{
		V_2 = ((int32_t)360);
	}

IL_006d:
	{
		il2cpp_codegen_initobj((&V_4), sizeof(ProfileData_t3519391925 ));
		ProfileData_t3519391925 * L_15 = __this->get_address_of_mWebCamProfile_8();
		Vec2I_t3527036565  L_16 = L_15->get_RequestedTextureSize_0();
		(&V_4)->set_RequestedTextureSize_0(L_16);
		ProfileData_t3519391925 * L_17 = __this->get_address_of_mWebCamProfile_8();
		Vec2I_t3527036565 * L_18 = L_17->get_address_of_ResampledTextureSize_1();
		int32_t L_19 = L_18->get_x_0();
		int32_t L_20 = V_2;
		Vec2I_t3527036565  L_21;
		memset(&L_21, 0, sizeof(L_21));
		Vec2I__ctor_m1553072655((&L_21), L_19, L_20, /*hidden argument*/NULL);
		(&V_4)->set_ResampledTextureSize_1(L_21);
		ProfileData_t3519391925 * L_22 = __this->get_address_of_mWebCamProfile_8();
		int32_t L_23 = L_22->get_RequestedFPS_2();
		(&V_4)->set_RequestedFPS_2(L_23);
		ProfileData_t3519391925  L_24 = V_4;
		V_3 = L_24;
		ProfileData_t3519391925  L_25 = V_3;
		__this->set_mWebCamProfile_8(L_25);
		return;
	}
}
// System.Void Vuforia.WebCam::.ctor(UnityEngine.Camera[],System.Int32,System.String,System.Boolean,System.Func`3<System.String,Vuforia.WebCamProfile/ProfileData,Vuforia.IWebCamTexAdaptor>)
extern "C"  void WebCam__ctor_m2427464772 (WebCam_t2427002488 * __this, CameraU5BU5D_t1709987734* ___arCameras0, int32_t ___renderTextureLayer1, String_t* ___webcamDeviceName2, bool ___flipHorizontally3, Func_3_t3440825513 * ___webCamTexProvider4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebCam__ctor_m2427464772_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	WebCamProfile_t4166408645 * V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	WebCamDeviceU5BU5D_t4294070825* V_3 = NULL;
	int32_t V_4 = 0;
	WebCamDevice_t1322781432  V_5;
	memset(&V_5, 0, sizeof(V_5));
	{
		__this->set_mIsDirty_10((bool)1);
		__this->set_mLastFrameIdx_11((-1));
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaRuntimeUtilities_t399660591_il2cpp_TypeInfo_var);
		bool L_0 = VuforiaRuntimeUtilities_IsPlayMode_m4165764373(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_013e;
		}
	}
	{
		int32_t L_1 = ___renderTextureLayer1;
		__this->set_mRenderTextureLayer_12(L_1);
		CameraU5BU5D_t1709987734* L_2 = ___arCameras0;
		__this->set_mARCameras_0(L_2);
		CameraU5BU5D_t1709987734* L_3 = __this->get_mARCameras_0();
		NullCheck(L_3);
		__this->set_mOriginalCameraCullMask_1(((Int32U5BU5D_t385246372*)SZArrayNew(Int32U5BU5D_t385246372_il2cpp_TypeInfo_var, (uint32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_3)->max_length)))))));
		V_1 = 0;
		goto IL_007c;
	}

IL_0043:
	{
		Int32U5BU5D_t385246372* L_4 = __this->get_mOriginalCameraCullMask_1();
		int32_t L_5 = V_1;
		CameraU5BU5D_t1709987734* L_6 = __this->get_mARCameras_0();
		int32_t L_7 = V_1;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		Camera_t4157153871 * L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_9);
		int32_t L_10 = Camera_get_cullingMask_m679085748(L_9, /*hidden argument*/NULL);
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (int32_t)L_10);
		CameraU5BU5D_t1709987734* L_11 = __this->get_mARCameras_0();
		int32_t L_12 = V_1;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		Camera_t4157153871 * L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		Camera_t4157153871 * L_15 = L_14;
		NullCheck(L_15);
		int32_t L_16 = Camera_get_cullingMask_m679085748(L_15, /*hidden argument*/NULL);
		int32_t L_17 = __this->get_mRenderTextureLayer_12();
		NullCheck(L_15);
		Camera_set_cullingMask_m1402455777(L_15, ((int32_t)((int32_t)L_16&(int32_t)((~((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)L_17&(int32_t)((int32_t)31))))))))), /*hidden argument*/NULL);
		int32_t L_18 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
	}

IL_007c:
	{
		int32_t L_19 = V_1;
		CameraU5BU5D_t1709987734* L_20 = __this->get_mARCameras_0();
		NullCheck(L_20);
		if ((((int32_t)L_19) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_20)->max_length)))))))
		{
			goto IL_0043;
		}
	}
	{
		WebCamProfile_t4166408645 * L_21 = (WebCamProfile_t4166408645 *)il2cpp_codegen_object_new(WebCamProfile_t4166408645_il2cpp_TypeInfo_var);
		WebCamProfile__ctor_m820471938(L_21, /*hidden argument*/NULL);
		V_0 = L_21;
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaRuntimeUtilities_t399660591_il2cpp_TypeInfo_var);
		bool L_22 = VuforiaRuntimeUtilities_IsVuforiaEnabled_m1152377305(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_22)
		{
			goto IL_0109;
		}
	}
	{
		WebCamDeviceU5BU5D_t4294070825* L_23 = WebCamTexture_get_devices_m844246756(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_23);
		if (!(((RuntimeArray *)L_23)->max_length))
		{
			goto IL_0109;
		}
	}
	{
		V_2 = (bool)0;
		WebCamDeviceU5BU5D_t4294070825* L_24 = WebCamTexture_get_devices_m844246756(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_3 = L_24;
		V_4 = 0;
		goto IL_00ca;
	}

IL_00a9:
	{
		WebCamDeviceU5BU5D_t4294070825* L_25 = V_3;
		int32_t L_26 = V_4;
		NullCheck(L_25);
		int32_t L_27 = L_26;
		WebCamDevice_t1322781432  L_28 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		V_5 = L_28;
		String_t* L_29 = WebCamDevice_get_name_m3782173082((WebCamDevice_t1322781432 *)(&V_5), /*hidden argument*/NULL);
		String_t* L_30 = ___webcamDeviceName2;
		NullCheck(L_29);
		bool L_31 = String_Equals_m2270643605(L_29, L_30, /*hidden argument*/NULL);
		if (!L_31)
		{
			goto IL_00c4;
		}
	}
	{
		V_2 = (bool)1;
	}

IL_00c4:
	{
		int32_t L_32 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)1));
	}

IL_00ca:
	{
		int32_t L_33 = V_4;
		WebCamDeviceU5BU5D_t4294070825* L_34 = V_3;
		NullCheck(L_34);
		if ((((int32_t)L_33) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_34)->max_length)))))))
		{
			goto IL_00a9;
		}
	}
	{
		bool L_35 = V_2;
		if (L_35)
		{
			goto IL_00e6;
		}
	}
	{
		WebCamDeviceU5BU5D_t4294070825* L_36 = WebCamTexture_get_devices_m844246756(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_36);
		String_t* L_37 = WebCamDevice_get_name_m3782173082((WebCamDevice_t1322781432 *)((L_36)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), /*hidden argument*/NULL);
		___webcamDeviceName2 = L_37;
	}

IL_00e6:
	{
		WebCamProfile_t4166408645 * L_38 = V_0;
		String_t* L_39 = ___webcamDeviceName2;
		NullCheck(L_38);
		ProfileData_t3519391925  L_40 = WebCamProfile_GetProfile_m3959388229(L_38, L_39, /*hidden argument*/NULL);
		__this->set_mWebCamProfile_8(L_40);
		Func_3_t3440825513 * L_41 = ___webCamTexProvider4;
		String_t* L_42 = ___webcamDeviceName2;
		ProfileData_t3519391925  L_43 = __this->get_mWebCamProfile_8();
		NullCheck(L_41);
		RuntimeObject* L_44 = Func_3_Invoke_m2574976179(L_41, L_42, L_43, /*hidden argument*/Func_3_Invoke_m2574976179_RuntimeMethod_var);
		__this->set_mWebCamTexture_2(L_44);
		goto IL_0136;
	}

IL_0109:
	{
		WebCamProfile_t4166408645 * L_45 = V_0;
		NullCheck(L_45);
		ProfileData_t3519391925  L_46 = WebCamProfile_get_Default_m3789142228(L_45, /*hidden argument*/NULL);
		__this->set_mWebCamProfile_8(L_46);
		ProfileData_t3519391925 * L_47 = __this->get_address_of_mWebCamProfile_8();
		int32_t L_48 = L_47->get_RequestedFPS_2();
		ProfileData_t3519391925 * L_49 = __this->get_address_of_mWebCamProfile_8();
		Vec2I_t3527036565  L_50 = L_49->get_RequestedTextureSize_0();
		DefaultWebCamTexAdaptor_t2452636845 * L_51 = (DefaultWebCamTexAdaptor_t2452636845 *)il2cpp_codegen_object_new(DefaultWebCamTexAdaptor_t2452636845_il2cpp_TypeInfo_var);
		DefaultWebCamTexAdaptor__ctor_m299475590(L_51, L_48, L_50, /*hidden argument*/NULL);
		__this->set_mWebCamTexture_2(L_51);
	}

IL_0136:
	{
		bool L_52 = ___flipHorizontally3;
		__this->set_mFlipHorizontally_9(L_52);
	}

IL_013e:
	{
		return;
	}
}
// System.Void Vuforia.WebCam::StartCamera()
extern "C"  void WebCam_StartCamera_m784729827 (WebCam_t2427002488 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebCam_StartCamera_m784729827_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_mWebcamPlaying_13((bool)1);
		RuntimeObject* L_0 = __this->get_mWebCamTexture_2();
		NullCheck(L_0);
		bool L_1 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean Vuforia.IWebCamTexAdaptor::get_IsPlaying() */, IWebCamTexAdaptor_t3823546776_il2cpp_TypeInfo_var, L_0);
		if (L_1)
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_2 = __this->get_mWebCamTexture_2();
		NullCheck(L_2);
		InterfaceActionInvoker0::Invoke(3 /* System.Void Vuforia.IWebCamTexAdaptor::Play() */, IWebCamTexAdaptor_t3823546776_il2cpp_TypeInfo_var, L_2);
	}

IL_001f:
	{
		return;
	}
}
// System.Void Vuforia.WebCam::StopCamera()
extern "C"  void WebCam_StopCamera_m1511219799 (WebCam_t2427002488 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebCam_StopCamera_m1511219799_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_mWebcamPlaying_13((bool)0);
		RuntimeObject* L_0 = __this->get_mWebCamTexture_2();
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(4 /* System.Void Vuforia.IWebCamTexAdaptor::Stop() */, IWebCamTexAdaptor_t3823546776_il2cpp_TypeInfo_var, L_0);
		return;
	}
}
// System.Void Vuforia.WebCam::ResetPlaying()
extern "C"  void WebCam_ResetPlaying_m697251242 (WebCam_t2427002488 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_mWebcamPlaying_13();
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		WebCam_StartCamera_m784729827(__this, /*hidden argument*/NULL);
		return;
	}

IL_000f:
	{
		WebCam_StopCamera_m1511219799(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Color32[] Vuforia.WebCam::GetPixels32AndBufferFrame()
extern "C"  Color32U5BU5D_t3850468773* WebCam_GetPixels32AndBufferFrame_m3124949850 (WebCam_t2427002488 * __this, const RuntimeMethod* method)
{
	RenderTexture_t2108887433 * V_0 = NULL;
	{
		TextureRenderer_t3278815845 * L_0 = __this->get_mTextureRenderer_5();
		NullCheck(L_0);
		RenderTexture_t2108887433 * L_1 = TextureRenderer_Render_m2768706254(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		RenderTexture_t2108887433 * L_2 = V_0;
		RenderTexture_set_active_m1437732586(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		Texture2D_t3840446185 * L_3 = __this->get_mBufferReadTexture_6();
		Rect_t2360479859  L_4 = __this->get_mReadPixelsRect_7();
		NullCheck(L_3);
		Texture2D_ReadPixels_m1510783487(L_3, L_4, 0, 0, (bool)0, /*hidden argument*/NULL);
		Texture2D_t3840446185 * L_5 = __this->get_mBufferReadTexture_6();
		NullCheck(L_5);
		Color32U5BU5D_t3850468773* L_6 = Texture2D_GetPixels32_m647746242(L_5, /*hidden argument*/NULL);
		RenderTexture_t2108887433 * L_7 = V_0;
		RenderTexture_ReleaseTemporary_m2400081536(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Void Vuforia.WebCam::RenderFrame(System.Int32)
extern "C"  void WebCam_RenderFrame_m2496994751 (WebCam_t2427002488 * __this, int32_t ___frameIndex0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebCam_RenderFrame_m2496994751_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Texture_t3661962703 * V_0 = NULL;
	Texture2D_t3840446185 * V_1 = NULL;
	Image_t745056343 * V_2 = NULL;
	{
		int32_t L_0 = __this->get_mLastFrameIdx_11();
		int32_t L_1 = ___frameIndex0;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0092;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaRenderer_t3433045970_il2cpp_TypeInfo_var);
		VuforiaRenderer_t3433045970 * L_2 = VuforiaRenderer_get_Instance_m1013623488(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		Texture_t3661962703 * L_3 = VuforiaRenderer_get_VideoBackgroundTexture_m954851426(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		Texture_t3661962703 * L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_4, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_008b;
		}
	}
	{
		Texture_t3661962703 * L_6 = V_0;
		if (!((Texture2D_t3840446185 *)IsInstSealed((RuntimeObject*)L_6, Texture2D_t3840446185_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}
	{
		Texture_t3661962703 * L_7 = V_0;
		V_1 = ((Texture2D_t3840446185 *)CastclassSealed((RuntimeObject*)L_7, Texture2D_t3840446185_il2cpp_TypeInfo_var));
		IL2CPP_RUNTIME_CLASS_INIT(CameraDevice_t960297568_il2cpp_TypeInfo_var);
		CameraDevice_t960297568 * L_8 = CameraDevice_get_Instance_m2002290155(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_8);
		Image_t745056343 * L_9 = CameraDevice_GetCameraImage_m151166382(L_8, ((int32_t)16), /*hidden argument*/NULL);
		V_2 = L_9;
		Image_t745056343 * L_10 = V_2;
		if (!L_10)
		{
			goto IL_008b;
		}
	}
	{
		Texture2D_t3840446185 * L_11 = V_1;
		NullCheck(L_11);
		int32_t L_12 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_11);
		Image_t745056343 * L_13 = V_2;
		NullCheck(L_13);
		int32_t L_14 = Image_get_BufferWidth_m2324972437(L_13, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_12) == ((uint32_t)L_14))))
		{
			goto IL_0064;
		}
	}
	{
		Texture2D_t3840446185 * L_15 = V_1;
		NullCheck(L_15);
		int32_t L_16 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_15);
		Image_t745056343 * L_17 = V_2;
		NullCheck(L_17);
		int32_t L_18 = Image_get_BufferHeight_m1709821308(L_17, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_16) == ((uint32_t)L_18))))
		{
			goto IL_0064;
		}
	}
	{
		Texture2D_t3840446185 * L_19 = V_1;
		NullCheck(L_19);
		int32_t L_20 = Texture2D_get_format_m2371899271(L_19, /*hidden argument*/NULL);
		if ((((int32_t)L_20) == ((int32_t)3)))
		{
			goto IL_0079;
		}
	}

IL_0064:
	{
		Texture2D_t3840446185 * L_21 = V_1;
		Image_t745056343 * L_22 = V_2;
		NullCheck(L_22);
		int32_t L_23 = Image_get_BufferWidth_m2324972437(L_22, /*hidden argument*/NULL);
		Image_t745056343 * L_24 = V_2;
		NullCheck(L_24);
		int32_t L_25 = Image_get_BufferHeight_m1709821308(L_24, /*hidden argument*/NULL);
		NullCheck(L_21);
		Texture2D_Resize_m2702227255(L_21, L_23, L_25, 3, (bool)0, /*hidden argument*/NULL);
	}

IL_0079:
	{
		Texture2D_t3840446185 * L_26 = V_1;
		Image_t745056343 * L_27 = V_2;
		NullCheck(L_27);
		Color32U5BU5D_t3850468773* L_28 = Image_GetPixels32_m1416524729(L_27, /*hidden argument*/NULL);
		NullCheck(L_26);
		Texture2D_SetPixels32_m1141065075(L_26, L_28, /*hidden argument*/NULL);
		Texture2D_t3840446185 * L_29 = V_1;
		NullCheck(L_29);
		Texture2D_Apply_m2271746283(L_29, /*hidden argument*/NULL);
	}

IL_008b:
	{
		int32_t L_30 = ___frameIndex0;
		__this->set_mLastFrameIdx_11(L_30);
	}

IL_0092:
	{
		return;
	}
}
// Vuforia.CameraDevice/VideoModeData Vuforia.WebCam::GetVideoMode()
extern "C"  VideoModeData_t2066817255  WebCam_GetVideoMode_m2800376222 (WebCam_t2427002488 * __this, const RuntimeMethod* method)
{
	{
		VideoModeData_t2066817255  L_0 = __this->get_mVideoModeData_3();
		return L_0;
	}
}
// Vuforia.VuforiaRenderer/VideoTextureInfo Vuforia.WebCam::GetVideoTextureInfo()
extern "C"  VideoTextureInfo_t1805965052  WebCam_GetVideoTextureInfo_m3653413215 (WebCam_t2427002488 * __this, const RuntimeMethod* method)
{
	{
		VideoTextureInfo_t1805965052  L_0 = __this->get_mVideoTextureInfo_4();
		return L_0;
	}
}
// System.Boolean Vuforia.WebCam::IsRendererDirty()
extern "C"  bool WebCam_IsRendererDirty_m3358873122 (WebCam_t2427002488 * __this, const RuntimeMethod* method)
{
	int32_t G_B3_0 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B4_0 = 0;
	{
		bool L_0 = WebCam_get_IsTextureSizeAvailable_m2013217807(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		bool L_1 = __this->get_mIsDirty_10();
		G_B3_0 = ((int32_t)(L_1));
		goto IL_0011;
	}

IL_0010:
	{
		G_B3_0 = 0;
	}

IL_0011:
	{
		int32_t L_2 = G_B3_0;
		G_B4_0 = L_2;
		if (!L_2)
		{
			G_B5_0 = L_2;
			goto IL_001b;
		}
	}
	{
		__this->set_mIsDirty_10((bool)0);
		G_B5_0 = G_B4_0;
	}

IL_001b:
	{
		return (bool)G_B5_0;
	}
}
// System.Void Vuforia.WebCam::OnDestroy()
extern "C"  void WebCam_OnDestroy_m332336637 (WebCam_t2427002488 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebCam_OnDestroy_m332336637_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaRuntimeUtilities_t399660591_il2cpp_TypeInfo_var);
		bool L_0 = VuforiaRuntimeUtilities_IsPlayMode_m4165764373(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0059;
		}
	}
	{
		V_0 = 0;
		goto IL_0034;
	}

IL_000b:
	{
		CameraU5BU5D_t1709987734* L_1 = __this->get_mARCameras_0();
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Camera_t4157153871 * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_4, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		CameraU5BU5D_t1709987734* L_6 = __this->get_mARCameras_0();
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		Camera_t4157153871 * L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		Int32U5BU5D_t385246372* L_10 = __this->get_mOriginalCameraCullMask_1();
		int32_t L_11 = V_0;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		int32_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		NullCheck(L_9);
		Camera_set_cullingMask_m1402455777(L_9, L_13, /*hidden argument*/NULL);
	}

IL_0030:
	{
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
	}

IL_0034:
	{
		int32_t L_15 = V_0;
		CameraU5BU5D_t1709987734* L_16 = __this->get_mARCameras_0();
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_16)->max_length)))))))
		{
			goto IL_000b;
		}
	}
	{
		WebCam_set_IsTextureSizeAvailable_m2087388218(__this, (bool)0, /*hidden argument*/NULL);
		TextureRenderer_t3278815845 * L_17 = __this->get_mTextureRenderer_5();
		if (!L_17)
		{
			goto IL_0059;
		}
	}
	{
		TextureRenderer_t3278815845 * L_18 = __this->get_mTextureRenderer_5();
		NullCheck(L_18);
		TextureRenderer_Destroy_m719921383(L_18, /*hidden argument*/NULL);
	}

IL_0059:
	{
		return;
	}
}
// System.Void Vuforia.WebCam::Update()
extern "C"  void WebCam_Update_m3572144808 (WebCam_t2427002488 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebCam_Update_m3572144808_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vec2I_t3527036565  V_0;
	memset(&V_0, 0, sizeof(V_0));
	VideoModeData_t2066817255  V_1;
	memset(&V_1, 0, sizeof(V_1));
	VideoTextureInfo_t1805965052  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaRuntimeUtilities_t399660591_il2cpp_TypeInfo_var);
		bool L_0 = VuforiaRuntimeUtilities_IsPlayMode_m4165764373(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0170;
		}
	}
	{
		RuntimeObject* L_1 = __this->get_mWebCamTexture_2();
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(5 /* System.Void Vuforia.IWebCamTexAdaptor::CheckPermissions() */, IWebCamTexAdaptor_t3823546776_il2cpp_TypeInfo_var, L_1);
		bool L_2 = WebCam_get_IsTextureSizeAvailable_m2013217807(__this, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0170;
		}
	}
	{
		RuntimeObject* L_3 = __this->get_mWebCamTexture_2();
		NullCheck(L_3);
		bool L_4 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean Vuforia.IWebCamTexAdaptor::get_DidUpdateThisFrame() */, IWebCamTexAdaptor_t3823546776_il2cpp_TypeInfo_var, L_3);
		if (!L_4)
		{
			goto IL_0170;
		}
	}
	{
		WebCam_set_IsTextureSizeAvailable_m2087388218(__this, (bool)1, /*hidden argument*/NULL);
		ProfileData_t3519391925 * L_5 = __this->get_address_of_mWebCamProfile_8();
		Vec2I_t3527036565 * L_6 = L_5->get_address_of_ResampledTextureSize_1();
		int32_t L_7 = L_6->get_y_1();
		if (L_7)
		{
			goto IL_00b2;
		}
	}
	{
		WebCam_ComputeResampledTextureSize_m321498482(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaWrapper_t2763746413_il2cpp_TypeInfo_var);
		RuntimeObject* L_8 = VuforiaWrapper_get_Instance_m2947582594(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_8);
		InterfaceFuncInvoker0< int32_t >::Invoke(23 /* System.Int32 Vuforia.IVuforiaWrapper::CameraDeviceStopCamera() */, IVuforiaWrapper_t2381307640_il2cpp_TypeInfo_var, L_8);
		RuntimeObject* L_9 = VuforiaWrapper_get_Instance_m2947582594(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_9);
		InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 Vuforia.IVuforiaWrapper::CameraDeviceDeinitCamera() */, IVuforiaWrapper_t2381307640_il2cpp_TypeInfo_var, L_9);
		RuntimeObject* L_10 = VuforiaWrapper_get_Instance_m2947582594(NULL /*static, unused*/, /*hidden argument*/NULL);
		ProfileData_t3519391925 * L_11 = __this->get_address_of_mWebCamProfile_8();
		Vec2I_t3527036565 * L_12 = L_11->get_address_of_ResampledTextureSize_1();
		int32_t L_13 = L_12->get_x_0();
		ProfileData_t3519391925 * L_14 = __this->get_address_of_mWebCamProfile_8();
		Vec2I_t3527036565 * L_15 = L_14->get_address_of_ResampledTextureSize_1();
		int32_t L_16 = L_15->get_y_1();
		NullCheck(L_10);
		InterfaceActionInvoker2< int32_t, int32_t >::Invoke(14 /* System.Void Vuforia.IVuforiaWrapper::CameraDeviceSetCameraConfiguration(System.Int32,System.Int32) */, IVuforiaWrapper_t2381307640_il2cpp_TypeInfo_var, L_10, L_13, L_16);
		RuntimeObject* L_17 = VuforiaWrapper_get_Instance_m2947582594(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_17);
		InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(12 /* System.Int32 Vuforia.IVuforiaWrapper::CameraDeviceInitCamera(System.Int32) */, IVuforiaWrapper_t2381307640_il2cpp_TypeInfo_var, L_17, 1);
		RuntimeObject* L_18 = VuforiaWrapper_get_Instance_m2947582594(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_18);
		InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(13 /* System.Int32 Vuforia.IVuforiaWrapper::CameraDeviceSelectVideoMode(System.Int32) */, IVuforiaWrapper_t2381307640_il2cpp_TypeInfo_var, L_18, (-1));
		RuntimeObject* L_19 = VuforiaWrapper_get_Instance_m2947582594(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_19);
		InterfaceFuncInvoker0< int32_t >::Invoke(22 /* System.Int32 Vuforia.IVuforiaWrapper::CameraDeviceStartCamera() */, IVuforiaWrapper_t2381307640_il2cpp_TypeInfo_var, L_19);
	}

IL_00b2:
	{
		ProfileData_t3519391925 * L_20 = __this->get_address_of_mWebCamProfile_8();
		Vec2I_t3527036565  L_21 = L_20->get_ResampledTextureSize_1();
		V_0 = L_21;
		il2cpp_codegen_initobj((&V_1), sizeof(VideoModeData_t2066817255 ));
		Vec2I_t3527036565  L_22 = V_0;
		int32_t L_23 = L_22.get_x_0();
		(&V_1)->set_width_0(L_23);
		Vec2I_t3527036565  L_24 = V_0;
		int32_t L_25 = L_24.get_y_1();
		(&V_1)->set_height_1(L_25);
		ProfileData_t3519391925 * L_26 = __this->get_address_of_mWebCamProfile_8();
		int32_t L_27 = L_26->get_RequestedFPS_2();
		(&V_1)->set_frameRate_2((((float)((float)L_27))));
		VideoModeData_t2066817255  L_28 = V_1;
		__this->set_mVideoModeData_3(L_28);
		il2cpp_codegen_initobj((&V_2), sizeof(VideoTextureInfo_t1805965052 ));
		Vec2I_t3527036565  L_29 = V_0;
		(&V_2)->set_imageSize_1(L_29);
		Vec2I_t3527036565  L_30 = V_0;
		(&V_2)->set_textureSize_0(L_30);
		VideoTextureInfo_t1805965052  L_31 = V_2;
		__this->set_mVideoTextureInfo_4(L_31);
		RuntimeObject* L_32 = __this->get_mWebCamTexture_2();
		NullCheck(L_32);
		Texture_t3661962703 * L_33 = InterfaceFuncInvoker0< Texture_t3661962703 * >::Invoke(2 /* UnityEngine.Texture Vuforia.IWebCamTexAdaptor::get_Texture() */, IWebCamTexAdaptor_t3823546776_il2cpp_TypeInfo_var, L_32);
		int32_t L_34 = __this->get_mRenderTextureLayer_12();
		Vec2I_t3527036565  L_35 = V_0;
		TextureRenderer_t3278815845 * L_36 = (TextureRenderer_t3278815845 *)il2cpp_codegen_object_new(TextureRenderer_t3278815845_il2cpp_TypeInfo_var);
		TextureRenderer__ctor_m495126481(L_36, L_33, L_34, L_35, /*hidden argument*/NULL);
		__this->set_mTextureRenderer_5(L_36);
		Vec2I_t3527036565  L_37 = V_0;
		int32_t L_38 = L_37.get_x_0();
		Vec2I_t3527036565  L_39 = V_0;
		int32_t L_40 = L_39.get_y_1();
		Texture2D_t3840446185 * L_41 = (Texture2D_t3840446185 *)il2cpp_codegen_object_new(Texture2D_t3840446185_il2cpp_TypeInfo_var);
		Texture2D__ctor_m373113269(L_41, L_38, L_40, /*hidden argument*/NULL);
		__this->set_mBufferReadTexture_6(L_41);
		Vec2I_t3527036565  L_42 = V_0;
		int32_t L_43 = L_42.get_x_0();
		Vec2I_t3527036565  L_44 = V_0;
		int32_t L_45 = L_44.get_y_1();
		Rect_t2360479859  L_46;
		memset(&L_46, 0, sizeof(L_46));
		Rect__ctor_m2614021312((&L_46), (0.0f), (0.0f), (((float)((float)L_43))), (((float)((float)L_45))), /*hidden argument*/NULL);
		__this->set_mReadPixelsRect_7(L_46);
	}

IL_0170:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Vuforia.WebCamARController::.ctor()
extern "C"  void WebCamARController__ctor_m751483383 (WebCamARController_t3718642882 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebCamARController__ctor_m751483383_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Func_3_t3440825513 * G_B2_0 = NULL;
	WebCamARController_t3718642882 * G_B2_1 = NULL;
	Func_3_t3440825513 * G_B1_0 = NULL;
	WebCamARController_t3718642882 * G_B1_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t3582055403_il2cpp_TypeInfo_var);
		Func_3_t3440825513 * L_0 = ((U3CU3Ec_t3582055403_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3582055403_il2cpp_TypeInfo_var))->get_U3CU3E9__7_0_1();
		Func_3_t3440825513 * L_1 = L_0;
		G_B1_0 = L_1;
		G_B1_1 = __this;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			goto IL_0020;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t3582055403_il2cpp_TypeInfo_var);
		U3CU3Ec_t3582055403 * L_2 = ((U3CU3Ec_t3582055403_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3582055403_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		intptr_t L_3 = (intptr_t)U3CU3Ec_U3C_ctorU3Eb__7_0_m3175983664_RuntimeMethod_var;
		Func_3_t3440825513 * L_4 = (Func_3_t3440825513 *)il2cpp_codegen_object_new(Func_3_t3440825513_il2cpp_TypeInfo_var);
		Func_3__ctor_m3165450366(L_4, L_2, L_3, /*hidden argument*/Func_3__ctor_m3165450366_RuntimeMethod_var);
		Func_3_t3440825513 * L_5 = L_4;
		((U3CU3Ec_t3582055403_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3582055403_il2cpp_TypeInfo_var))->set_U3CU3E9__7_0_1(L_5);
		G_B2_0 = L_5;
		G_B2_1 = G_B1_1;
	}

IL_0020:
	{
		NullCheck(G_B2_1);
		G_B2_1->set_mWebCamTexAdaptorProvider_5(G_B2_0);
		ARController__ctor_m2746373751(__this, /*hidden argument*/NULL);
		return;
	}
}
// Vuforia.WebCamARController Vuforia.WebCamARController::get_Instance()
extern "C"  WebCamARController_t3718642882 * WebCamARController_get_Instance_m1980552932 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebCamARController_get_Instance_m1980552932_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(WebCamARController_t3718642882_il2cpp_TypeInfo_var);
		WebCamARController_t3718642882 * L_0 = ((WebCamARController_t3718642882_StaticFields*)il2cpp_codegen_static_fields_for(WebCamARController_t3718642882_il2cpp_TypeInfo_var))->get_mInstance_6();
		if (L_0)
		{
			goto IL_002d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(WebCamARController_t3718642882_il2cpp_TypeInfo_var);
		RuntimeObject * L_1 = ((WebCamARController_t3718642882_StaticFields*)il2cpp_codegen_static_fields_for(WebCamARController_t3718642882_il2cpp_TypeInfo_var))->get_mPadlock_7();
		V_0 = L_1;
		RuntimeObject * L_2 = V_0;
		Monitor_Enter_m2249409497(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
	}

IL_0013:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(WebCamARController_t3718642882_il2cpp_TypeInfo_var);
			WebCamARController_t3718642882 * L_3 = ((WebCamARController_t3718642882_StaticFields*)il2cpp_codegen_static_fields_for(WebCamARController_t3718642882_il2cpp_TypeInfo_var))->get_mInstance_6();
			if (L_3)
			{
				goto IL_0024;
			}
		}

IL_001a:
		{
			WebCamARController_t3718642882 * L_4 = (WebCamARController_t3718642882 *)il2cpp_codegen_object_new(WebCamARController_t3718642882_il2cpp_TypeInfo_var);
			WebCamARController__ctor_m751483383(L_4, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(WebCamARController_t3718642882_il2cpp_TypeInfo_var);
			((WebCamARController_t3718642882_StaticFields*)il2cpp_codegen_static_fields_for(WebCamARController_t3718642882_il2cpp_TypeInfo_var))->set_mInstance_6(L_4);
		}

IL_0024:
		{
			IL2CPP_LEAVE(0x2D, FINALLY_0026);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0026;
	}

FINALLY_0026:
	{ // begin finally (depth: 1)
		RuntimeObject * L_5 = V_0;
		Monitor_Exit_m3585316909(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(38)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(38)
	{
		IL2CPP_JUMP_TBL(0x2D, IL_002d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_002d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(WebCamARController_t3718642882_il2cpp_TypeInfo_var);
		WebCamARController_t3718642882 * L_6 = ((WebCamARController_t3718642882_StaticFields*)il2cpp_codegen_static_fields_for(WebCamARController_t3718642882_il2cpp_TypeInfo_var))->get_mInstance_6();
		return L_6;
	}
}
// System.Void Vuforia.WebCamARController::RegisterARController()
extern "C"  void WebCamARController_RegisterARController_m2119076139 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebCamARController_RegisterARController_m2119076139_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(WebCamARController_t3718642882_il2cpp_TypeInfo_var);
		WebCamARController_t3718642882 * L_0 = WebCamARController_get_Instance_m1980552932(NULL /*static, unused*/, /*hidden argument*/NULL);
		ARController_Register_m1901857971(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.String Vuforia.WebCamARController::get_DeviceName()
extern "C"  String_t* WebCamARController_get_DeviceName_m370257792 (WebCamARController_t3718642882 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_mDeviceNameSetInEditor_2();
		return L_0;
	}
}
// System.Void Vuforia.WebCamARController::set_DeviceName(System.String)
extern "C"  void WebCamARController_set_DeviceName_m150226649 (WebCamARController_t3718642882 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_mDeviceNameSetInEditor_2(L_0);
		return;
	}
}
// System.Boolean Vuforia.WebCamARController::get_FlipHorizontally()
extern "C"  bool WebCamARController_get_FlipHorizontally_m2274555993 (WebCamARController_t3718642882 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_mFlipHorizontally_3();
		return L_0;
	}
}
// System.Void Vuforia.WebCamARController::set_FlipHorizontally(System.Boolean)
extern "C"  void WebCamARController_set_FlipHorizontally_m357972424 (WebCamARController_t3718642882 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_mFlipHorizontally_3(L_0);
		return;
	}
}
// System.Boolean Vuforia.WebCamARController::get_IsPlaying()
extern "C"  bool WebCamARController_get_IsPlaying_m1662877527 (WebCamARController_t3718642882 * __this, const RuntimeMethod* method)
{
	{
		WebCam_t2427002488 * L_0 = __this->get_mWebCamImpl_4();
		NullCheck(L_0);
		bool L_1 = WebCam_get_IsPlaying_m2513986056(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// Vuforia.WebCam Vuforia.WebCamARController::get_ImplementationClass()
extern "C"  WebCam_t2427002488 * WebCamARController_get_ImplementationClass_m2936222632 (WebCamARController_t3718642882 * __this, const RuntimeMethod* method)
{
	{
		WebCam_t2427002488 * L_0 = __this->get_mWebCamImpl_4();
		return L_0;
	}
}
// System.Void Vuforia.WebCamARController::InitCamera()
extern "C"  void WebCamARController_InitCamera_m1118184140 (WebCamARController_t3718642882 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebCamARController_InitCamera_m1118184140_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	CameraU5BU5D_t1709987734* V_0 = NULL;
	{
		WebCam_t2427002488 * L_0 = __this->get_mWebCamImpl_4();
		if (L_0)
		{
			goto IL_003e;
		}
	}
	{
		Application_set_runInBackground_m2169704730(NULL /*static, unused*/, (bool)1, /*hidden argument*/NULL);
		VuforiaBehaviour_t2151848540 * L_1 = ARController_get_VuforiaBehaviour_m4257639924(__this, /*hidden argument*/NULL);
		CameraU5BU5D_t1709987734* L_2 = UnityComponentExtensions_GetComponentsOnlyInChildren_TisCamera_t4157153871_m2275549933(NULL /*static, unused*/, L_1, /*hidden argument*/UnityComponentExtensions_GetComponentsOnlyInChildren_TisCamera_t4157153871_m2275549933_RuntimeMethod_var);
		V_0 = L_2;
		CameraU5BU5D_t1709987734* L_3 = V_0;
		int32_t L_4 = __this->get_RenderTextureLayer_1();
		String_t* L_5 = __this->get_mDeviceNameSetInEditor_2();
		bool L_6 = __this->get_mFlipHorizontally_3();
		Func_3_t3440825513 * L_7 = __this->get_mWebCamTexAdaptorProvider_5();
		WebCam_t2427002488 * L_8 = (WebCam_t2427002488 *)il2cpp_codegen_object_new(WebCam_t2427002488_il2cpp_TypeInfo_var);
		WebCam__ctor_m2427464772(L_8, L_3, L_4, L_5, L_6, L_7, /*hidden argument*/NULL);
		__this->set_mWebCamImpl_4(L_8);
	}

IL_003e:
	{
		return;
	}
}
// System.Void Vuforia.WebCamARController::SetWebCamTexAdaptorProvider(System.Func`3<System.String,Vuforia.WebCamProfile/ProfileData,Vuforia.IWebCamTexAdaptor>)
extern "C"  void WebCamARController_SetWebCamTexAdaptorProvider_m3011708764 (WebCamARController_t3718642882 * __this, Func_3_t3440825513 * ___provider0, const RuntimeMethod* method)
{
	{
		Func_3_t3440825513 * L_0 = ___provider0;
		__this->set_mWebCamTexAdaptorProvider_5(L_0);
		return;
	}
}
// System.Void Vuforia.WebCamARController::Awake()
extern "C"  void WebCamARController_Awake_m4020518652 (WebCamARController_t3718642882 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebCamARController_Awake_m4020518652_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	WebCamConfiguration_t1101614731 * V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaConfiguration_t1763229349_il2cpp_TypeInfo_var);
		VuforiaConfiguration_t1763229349 * L_0 = VuforiaConfiguration_get_Instance_m3335903280(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		WebCamConfiguration_t1101614731 * L_1 = VuforiaConfiguration_get_WebCam_m946983315(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		WebCamConfiguration_t1101614731 * L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3 = WebCamConfiguration_get_RenderTextureLayer_m1149468349(L_2, /*hidden argument*/NULL);
		__this->set_RenderTextureLayer_1(L_3);
		WebCamConfiguration_t1101614731 * L_4 = V_0;
		NullCheck(L_4);
		String_t* L_5 = WebCamConfiguration_get_DeviceNameSetInEditor_m553266002(L_4, /*hidden argument*/NULL);
		__this->set_mDeviceNameSetInEditor_2(L_5);
		WebCamConfiguration_t1101614731 * L_6 = V_0;
		NullCheck(L_6);
		bool L_7 = WebCamConfiguration_get_FlipHorizontally_m4118647777(L_6, /*hidden argument*/NULL);
		__this->set_mFlipHorizontally_3(L_7);
		return;
	}
}
// System.Void Vuforia.WebCamARController::OnLevelWasLoaded()
extern "C"  void WebCamARController_OnLevelWasLoaded_m3407873239 (WebCamARController_t3718642882 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebCamARController_OnLevelWasLoaded_m3407873239_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaRuntimeUtilities_t399660591_il2cpp_TypeInfo_var);
		bool L_0 = VuforiaRuntimeUtilities_IsPlayMode_m4165764373(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		WebCam_t2427002488 * L_1 = __this->get_mWebCamImpl_4();
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		WebCam_t2427002488 * L_2 = __this->get_mWebCamImpl_4();
		NullCheck(L_2);
		WebCam_ResetPlaying_m697251242(L_2, /*hidden argument*/NULL);
	}

IL_001a:
	{
		return;
	}
}
// System.Void Vuforia.WebCamARController::OnDestroy()
extern "C"  void WebCamARController_OnDestroy_m1720525424 (WebCamARController_t3718642882 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebCamARController_OnDestroy_m1720525424_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaRuntimeUtilities_t399660591_il2cpp_TypeInfo_var);
		bool L_0 = VuforiaRuntimeUtilities_IsPlayMode_m4165764373(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		WebCam_t2427002488 * L_1 = __this->get_mWebCamImpl_4();
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		WebCam_t2427002488 * L_2 = __this->get_mWebCamImpl_4();
		NullCheck(L_2);
		WebCam_OnDestroy_m332336637(L_2, /*hidden argument*/NULL);
	}

IL_001a:
	{
		return;
	}
}
// System.Void Vuforia.WebCamARController::Update()
extern "C"  void WebCamARController_Update_m2251066661 (WebCamARController_t3718642882 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebCamARController_Update_m2251066661_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaRuntimeUtilities_t399660591_il2cpp_TypeInfo_var);
		bool L_0 = VuforiaRuntimeUtilities_IsPlayMode_m4165764373(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		WebCam_t2427002488 * L_1 = __this->get_mWebCamImpl_4();
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		WebCam_t2427002488 * L_2 = __this->get_mWebCamImpl_4();
		NullCheck(L_2);
		WebCam_Update_m3572144808(L_2, /*hidden argument*/NULL);
	}

IL_001a:
	{
		return;
	}
}
// System.Void Vuforia.WebCamARController::.cctor()
extern "C"  void WebCamARController__cctor_m3035936290 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebCamARController__cctor_m3035936290_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m297566312(L_0, /*hidden argument*/NULL);
		((WebCamARController_t3718642882_StaticFields*)il2cpp_codegen_static_fields_for(WebCamARController_t3718642882_il2cpp_TypeInfo_var))->set_mPadlock_7(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Vuforia.WebCamARController/<>c::.cctor()
extern "C"  void U3CU3Ec__cctor_m4266389493 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__cctor_m4266389493_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t3582055403 * L_0 = (U3CU3Ec_t3582055403 *)il2cpp_codegen_object_new(U3CU3Ec_t3582055403_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m3450078098(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t3582055403_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3582055403_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Vuforia.WebCamARController/<>c::.ctor()
extern "C"  void U3CU3Ec__ctor_m3450078098 (U3CU3Ec_t3582055403 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// Vuforia.IWebCamTexAdaptor Vuforia.WebCamARController/<>c::<.ctor>b__7_0(System.String,Vuforia.WebCamProfile/ProfileData)
extern "C"  RuntimeObject* U3CU3Ec_U3C_ctorU3Eb__7_0_m3175983664 (U3CU3Ec_t3582055403 * __this, String_t* ___name0, ProfileData_t3519391925  ___profileData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3C_ctorU3Eb__7_0_m3175983664_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___name0;
		ProfileData_t3519391925  L_1 = ___profileData1;
		WebCamTexAdaptor_t3430449046 * L_2 = (WebCamTexAdaptor_t3430449046 *)il2cpp_codegen_object_new(WebCamTexAdaptor_t3430449046_il2cpp_TypeInfo_var);
		WebCamTexAdaptor__ctor_m852957585(L_2, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Vuforia.WebCamProfile/ProfileData Vuforia.WebCamProfile::get_Default()
extern "C"  ProfileData_t3519391925  WebCamProfile_get_Default_m3789142228 (WebCamProfile_t4166408645 * __this, const RuntimeMethod* method)
{
	{
		ProfileCollection_t901995765  L_0 = __this->get_mProfileCollection_0();
		ProfileData_t3519391925  L_1 = L_0.get_DefaultProfile_0();
		return L_1;
	}
}
// System.Void Vuforia.WebCamProfile::.ctor()
extern "C"  void WebCamProfile__ctor_m820471938 (WebCamProfile_t4166408645 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebCamProfile__ctor_m820471938_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		RuntimeObject* L_0 = PlayModeEditorUtility_get_Instance_m334266941(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		ProfileCollection_t901995765  L_1 = InterfaceFuncInvoker0< ProfileCollection_t901995765  >::Invoke(1 /* Vuforia.WebCamProfile/ProfileCollection Vuforia.IPlayModeEditorUtility::LoadAndParseWebcamProfiles() */, IPlayModeEditorUtility_t752570519_il2cpp_TypeInfo_var, L_0);
		__this->set_mProfileCollection_0(L_1);
		return;
	}
}
// Vuforia.WebCamProfile/ProfileData Vuforia.WebCamProfile::GetProfile(System.String)
extern "C"  ProfileData_t3519391925  WebCamProfile_GetProfile_m3959388229 (WebCamProfile_t4166408645 * __this, String_t* ___webcamName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebCamProfile_GetProfile_m3959388229_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ProfileData_t3519391925  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		ProfileCollection_t901995765  L_0 = __this->get_mProfileCollection_0();
		Dictionary_2_t3304648224 * L_1 = L_0.get_Profiles_1();
		String_t* L_2 = ___webcamName0;
		NullCheck(L_2);
		String_t* L_3 = String_ToLower_m2029374922(L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_4 = Dictionary_2_TryGetValue_m1260807329(L_1, L_3, (ProfileData_t3519391925 *)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m1260807329_RuntimeMethod_var);
		if (!L_4)
		{
			goto IL_001c;
		}
	}
	{
		ProfileData_t3519391925  L_5 = V_0;
		return L_5;
	}

IL_001c:
	{
		ProfileCollection_t901995765  L_6 = __this->get_mProfileCollection_0();
		ProfileData_t3519391925  L_7 = L_6.get_DefaultProfile_0();
		return L_7;
	}
}
// System.Boolean Vuforia.WebCamProfile::ProfileAvailable(System.String)
extern "C"  bool WebCamProfile_ProfileAvailable_m801322015 (WebCamProfile_t4166408645 * __this, String_t* ___webcamName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebCamProfile_ProfileAvailable_m801322015_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ProfileCollection_t901995765  L_0 = __this->get_mProfileCollection_0();
		Dictionary_2_t3304648224 * L_1 = L_0.get_Profiles_1();
		String_t* L_2 = ___webcamName0;
		NullCheck(L_2);
		String_t* L_3 = String_ToLower_m2029374922(L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_4 = Dictionary_2_ContainsKey_m4190276240(L_1, L_3, /*hidden argument*/Dictionary_2_ContainsKey_m4190276240_RuntimeMethod_var);
		return L_4;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Vuforia.WebCamProfile/ProfileCollection
extern "C" void ProfileCollection_t901995765_marshal_pinvoke(const ProfileCollection_t901995765& unmarshaled, ProfileCollection_t901995765_marshaled_pinvoke& marshaled)
{
	Exception_t* ___Profiles_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Profiles' of type 'ProfileCollection'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Profiles_1Exception, NULL, NULL);
}
extern "C" void ProfileCollection_t901995765_marshal_pinvoke_back(const ProfileCollection_t901995765_marshaled_pinvoke& marshaled, ProfileCollection_t901995765& unmarshaled)
{
	Exception_t* ___Profiles_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Profiles' of type 'ProfileCollection'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Profiles_1Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: Vuforia.WebCamProfile/ProfileCollection
extern "C" void ProfileCollection_t901995765_marshal_pinvoke_cleanup(ProfileCollection_t901995765_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Vuforia.WebCamProfile/ProfileCollection
extern "C" void ProfileCollection_t901995765_marshal_com(const ProfileCollection_t901995765& unmarshaled, ProfileCollection_t901995765_marshaled_com& marshaled)
{
	Exception_t* ___Profiles_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Profiles' of type 'ProfileCollection'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Profiles_1Exception, NULL, NULL);
}
extern "C" void ProfileCollection_t901995765_marshal_com_back(const ProfileCollection_t901995765_marshaled_com& marshaled, ProfileCollection_t901995765& unmarshaled)
{
	Exception_t* ___Profiles_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Profiles' of type 'ProfileCollection'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Profiles_1Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: Vuforia.WebCamProfile/ProfileCollection
extern "C" void ProfileCollection_t901995765_marshal_com_cleanup(ProfileCollection_t901995765_marshaled_com& marshaled)
{
}
// System.Void Vuforia.WebCamProfile/ProfileCollection::.ctor(Vuforia.WebCamProfile/ProfileData,System.Collections.Generic.Dictionary`2<System.String,Vuforia.WebCamProfile/ProfileData>)
extern "C"  void ProfileCollection__ctor_m3713293092 (ProfileCollection_t901995765 * __this, ProfileData_t3519391925  ___defaultProfile0, Dictionary_2_t3304648224 * ___profiles1, const RuntimeMethod* method)
{
	{
		ProfileData_t3519391925  L_0 = ___defaultProfile0;
		__this->set_DefaultProfile_0(L_0);
		Dictionary_2_t3304648224 * L_1 = ___profiles1;
		__this->set_Profiles_1(L_1);
		return;
	}
}
extern "C"  void ProfileCollection__ctor_m3713293092_AdjustorThunk (RuntimeObject * __this, ProfileData_t3519391925  ___defaultProfile0, Dictionary_2_t3304648224 * ___profiles1, const RuntimeMethod* method)
{
	ProfileCollection_t901995765 * _thisAdjusted = reinterpret_cast<ProfileCollection_t901995765 *>(__this + 1);
	ProfileCollection__ctor_m3713293092(_thisAdjusted, ___defaultProfile0, ___profiles1, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Vuforia.WebCamTexAdaptor::get_DidUpdateThisFrame()
extern "C"  bool WebCamTexAdaptor_get_DidUpdateThisFrame_m3597507630 (WebCamTexAdaptor_t3430449046 * __this, const RuntimeMethod* method)
{
	{
		WebCamTexture_t1514609158 * L_0 = __this->get_mWebCamTexture_0();
		NullCheck(L_0);
		bool L_1 = WebCamTexture_get_didUpdateThisFrame_m567567483(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean Vuforia.WebCamTexAdaptor::get_IsPlaying()
extern "C"  bool WebCamTexAdaptor_get_IsPlaying_m1243887004 (WebCamTexAdaptor_t3430449046 * __this, const RuntimeMethod* method)
{
	{
		WebCamTexture_t1514609158 * L_0 = __this->get_mWebCamTexture_0();
		NullCheck(L_0);
		bool L_1 = WebCamTexture_get_isPlaying_m3525118025(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// UnityEngine.Texture Vuforia.WebCamTexAdaptor::get_Texture()
extern "C"  Texture_t3661962703 * WebCamTexAdaptor_get_Texture_m2106402337 (WebCamTexAdaptor_t3430449046 * __this, const RuntimeMethod* method)
{
	{
		WebCamTexture_t1514609158 * L_0 = __this->get_mWebCamTexture_0();
		return L_0;
	}
}
// System.Void Vuforia.WebCamTexAdaptor::.ctor(System.String,Vuforia.WebCamProfile/ProfileData)
extern "C"  void WebCamTexAdaptor__ctor_m852957585 (WebCamTexAdaptor_t3430449046 * __this, String_t* ___deviceName0, ProfileData_t3519391925  ___profile1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebCamTexAdaptor__ctor_m852957585_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		WebCamTexture_t1514609158 * L_0 = (WebCamTexture_t1514609158 *)il2cpp_codegen_object_new(WebCamTexture_t1514609158_il2cpp_TypeInfo_var);
		WebCamTexture__ctor_m2601640589(L_0, /*hidden argument*/NULL);
		__this->set_mWebCamTexture_0(L_0);
		WebCamTexture_t1514609158 * L_1 = __this->get_mWebCamTexture_0();
		String_t* L_2 = ___deviceName0;
		NullCheck(L_1);
		WebCamTexture_set_deviceName_m2479609938(L_1, L_2, /*hidden argument*/NULL);
		WebCamTexture_t1514609158 * L_3 = __this->get_mWebCamTexture_0();
		ProfileData_t3519391925  L_4 = ___profile1;
		int32_t L_5 = L_4.get_RequestedFPS_2();
		NullCheck(L_3);
		WebCamTexture_set_requestedFPS_m1422816314(L_3, (((float)((float)L_5))), /*hidden argument*/NULL);
		WebCamTexture_t1514609158 * L_6 = __this->get_mWebCamTexture_0();
		ProfileData_t3519391925  L_7 = ___profile1;
		Vec2I_t3527036565  L_8 = L_7.get_RequestedTextureSize_0();
		int32_t L_9 = L_8.get_x_0();
		NullCheck(L_6);
		WebCamTexture_set_requestedWidth_m1301971691(L_6, L_9, /*hidden argument*/NULL);
		WebCamTexture_t1514609158 * L_10 = __this->get_mWebCamTexture_0();
		ProfileData_t3519391925  L_11 = ___profile1;
		Vec2I_t3527036565  L_12 = L_11.get_RequestedTextureSize_0();
		int32_t L_13 = L_12.get_y_1();
		NullCheck(L_10);
		WebCamTexture_set_requestedHeight_m3636279808(L_10, L_13, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuforia.WebCamTexAdaptor::Play()
extern "C"  void WebCamTexAdaptor_Play_m2085954092 (WebCamTexAdaptor_t3430449046 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = Application_HasUserAuthorization_m3146187033(NULL /*static, unused*/, 1, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		AsyncOperation_t1445031843 * L_1 = Application_RequestUserAuthorization_m1407144003(NULL /*static, unused*/, 1, /*hidden argument*/NULL);
		__this->set_mCheckCameraPermissions_1(L_1);
		return;
	}

IL_0015:
	{
		WebCamTexture_t1514609158 * L_2 = __this->get_mWebCamTexture_0();
		NullCheck(L_2);
		WebCamTexture_Play_m3866603461(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuforia.WebCamTexAdaptor::Stop()
extern "C"  void WebCamTexAdaptor_Stop_m3089842407 (WebCamTexAdaptor_t3430449046 * __this, const RuntimeMethod* method)
{
	{
		WebCamTexture_t1514609158 * L_0 = __this->get_mWebCamTexture_0();
		NullCheck(L_0);
		WebCamTexture_Stop_m3471034432(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuforia.WebCamTexAdaptor::CheckPermissions()
extern "C"  void WebCamTexAdaptor_CheckPermissions_m4247082500 (WebCamTexAdaptor_t3430449046 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebCamTexAdaptor_CheckPermissions_m4247082500_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncOperation_t1445031843 * L_0 = __this->get_mCheckCameraPermissions_1();
		if (!L_0)
		{
			goto IL_0040;
		}
	}
	{
		AsyncOperation_t1445031843 * L_1 = __this->get_mCheckCameraPermissions_1();
		NullCheck(L_1);
		bool L_2 = AsyncOperation_get_isDone_m412925263(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0040;
		}
	}
	{
		bool L_3 = Application_HasUserAuthorization_m3146187033(NULL /*static, unused*/, 1, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		WebCamTexture_t1514609158 * L_4 = __this->get_mWebCamTexture_0();
		NullCheck(L_4);
		WebCamTexture_Play_m3866603461(L_4, /*hidden argument*/NULL);
		goto IL_0039;
	}

IL_002a:
	{
		RuntimeObject* L_5 = PlayModeEditorUtility_get_Instance_m334266941(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_5);
		InterfaceActionInvoker1< String_t* >::Invoke(3 /* System.Void Vuforia.IPlayModeEditorUtility::ShowErrorInMouseOverWindow(System.String) */, IPlayModeEditorUtility_t752570519_il2cpp_TypeInfo_var, L_5, _stringLiteral2036431799);
	}

IL_0039:
	{
		__this->set_mCheckCameraPermissions_1((AsyncOperation_t1445031843 *)NULL);
	}

IL_0040:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Vuforia.WireframeBehaviour::Start()
extern "C"  void WireframeBehaviour_Start_m3567912005 (WireframeBehaviour_t1831066704 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WireframeBehaviour_Start_m3567912005_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Material_t340375123 * L_0 = __this->get_lineMaterial_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		Material_t340375123 * L_2 = __this->get_lineMaterial_2();
		Material_t340375123 * L_3 = (Material_t340375123 *)il2cpp_codegen_object_new(Material_t340375123_il2cpp_TypeInfo_var);
		Material__ctor_m249231841(L_3, L_2, /*hidden argument*/NULL);
		__this->set_mLineMaterial_5(L_3);
		return;
	}

IL_0020:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogWarning_m3752629331(NULL /*static, unused*/, _stringLiteral1571861241, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuforia.WireframeBehaviour::OnRenderObject()
extern "C"  void WireframeBehaviour_OnRenderObject_m913596852 (WireframeBehaviour_t1831066704 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WireframeBehaviour_OnRenderObject_m913596852_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	MeshFilter_t3523625662 * V_1 = NULL;
	Vector3U5BU5D_t1718750761* V_2 = NULL;
	Int32U5BU5D_t385246372* V_3 = NULL;
	CameraU5BU5D_t1709987734* V_4 = NULL;
	int32_t V_5 = 0;
	Camera_t4157153871 * V_6 = NULL;
	int32_t V_7 = 0;
	Vector3_t3722313464  V_8;
	memset(&V_8, 0, sizeof(V_8));
	Vector3_t3722313464  V_9;
	memset(&V_9, 0, sizeof(V_9));
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaManager_t1653423889_il2cpp_TypeInfo_var);
		VuforiaManager_t1653423889 * L_0 = VuforiaManager_get_Instance_m100367560(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_t3600365921 * L_1 = VuforiaManager_get_ARCameraTransform_m958890547(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		GameObject_t1113636619 * L_2 = Component_get_gameObject_m442555142(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		CameraU5BU5D_t1709987734* L_3 = GameObject_GetComponentsInChildren_TisCamera_t4157153871_m926460427(L_2, /*hidden argument*/GameObject_GetComponentsInChildren_TisCamera_t4157153871_m926460427_RuntimeMethod_var);
		V_0 = (bool)0;
		V_4 = L_3;
		V_5 = 0;
		goto IL_003a;
	}

IL_001d:
	{
		CameraU5BU5D_t1709987734* L_4 = V_4;
		int32_t L_5 = V_5;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		Camera_t4157153871 * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_6 = L_7;
		Camera_t4157153871 * L_8 = Camera_get_current_m929992396(NULL /*static, unused*/, /*hidden argument*/NULL);
		Camera_t4157153871 * L_9 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_10 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_8, L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0034;
		}
	}
	{
		V_0 = (bool)1;
	}

IL_0034:
	{
		int32_t L_11 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_003a:
	{
		int32_t L_12 = V_5;
		CameraU5BU5D_t1709987734* L_13 = V_4;
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_13)->max_length)))))))
		{
			goto IL_001d;
		}
	}
	{
		bool L_14 = V_0;
		if (L_14)
		{
			goto IL_0046;
		}
	}
	{
		return;
	}

IL_0046:
	{
		bool L_15 = __this->get_ShowLines_3();
		if (L_15)
		{
			goto IL_004f;
		}
	}
	{
		return;
	}

IL_004f:
	{
		MeshFilter_t3523625662 * L_16 = Component_GetComponent_TisMeshFilter_t3523625662_m569847836(__this, /*hidden argument*/Component_GetComponent_TisMeshFilter_t3523625662_m569847836_RuntimeMethod_var);
		V_1 = L_16;
		MeshFilter_t3523625662 * L_17 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_18 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		if (L_18)
		{
			goto IL_005f;
		}
	}
	{
		return;
	}

IL_005f:
	{
		Material_t340375123 * L_19 = __this->get_mLineMaterial_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_20 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_19, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_20)
		{
			goto IL_0078;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogWarning_m3752629331(NULL /*static, unused*/, _stringLiteral1571861241, /*hidden argument*/NULL);
		return;
	}

IL_0078:
	{
		MeshFilter_t3523625662 * L_21 = V_1;
		NullCheck(L_21);
		Mesh_t3648964284 * L_22 = MeshFilter_get_sharedMesh_m1726897210(L_21, /*hidden argument*/NULL);
		Mesh_t3648964284 * L_23 = L_22;
		NullCheck(L_23);
		Vector3U5BU5D_t1718750761* L_24 = Mesh_get_vertices_m3585684815(L_23, /*hidden argument*/NULL);
		V_2 = L_24;
		NullCheck(L_23);
		Int32U5BU5D_t385246372* L_25 = Mesh_get_triangles_m3059934743(L_23, /*hidden argument*/NULL);
		V_3 = L_25;
		GL_PushMatrix_m1848274883(NULL /*static, unused*/, /*hidden argument*/NULL);
		Transform_t3600365921 * L_26 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_26);
		Matrix4x4_t1817901843  L_27 = Transform_get_localToWorldMatrix_m4155710351(L_26, /*hidden argument*/NULL);
		GL_MultMatrix_m3576884247(NULL /*static, unused*/, L_27, /*hidden argument*/NULL);
		Material_t340375123 * L_28 = __this->get_mLineMaterial_5();
		NullCheck(L_28);
		Material_SetPass_m686253719(L_28, 0, /*hidden argument*/NULL);
		Material_t340375123 * L_29 = __this->get_mLineMaterial_5();
		Color_t2555686324  L_30 = __this->get_LineColor_4();
		NullCheck(L_29);
		Material_SetColor_m2020215303(L_29, _stringLiteral3957048425, L_30, /*hidden argument*/NULL);
		GL_Begin_m1290681325(NULL /*static, unused*/, 1, /*hidden argument*/NULL);
		V_7 = 0;
		goto IL_0121;
	}

IL_00ce:
	{
		Vector3U5BU5D_t1718750761* L_31 = V_2;
		Int32U5BU5D_t385246372* L_32 = V_3;
		int32_t L_33 = V_7;
		NullCheck(L_32);
		int32_t L_34 = L_33;
		int32_t L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		NullCheck(L_31);
		int32_t L_36 = L_35;
		Vector3_t3722313464  L_37 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		V_8 = L_37;
		Vector3U5BU5D_t1718750761* L_38 = V_2;
		Int32U5BU5D_t385246372* L_39 = V_3;
		int32_t L_40 = V_7;
		NullCheck(L_39);
		int32_t L_41 = ((int32_t)il2cpp_codegen_add((int32_t)L_40, (int32_t)1));
		int32_t L_42 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		NullCheck(L_38);
		int32_t L_43 = L_42;
		Vector3_t3722313464  L_44 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		V_9 = L_44;
		Vector3U5BU5D_t1718750761* L_45 = V_2;
		Int32U5BU5D_t385246372* L_46 = V_3;
		int32_t L_47 = V_7;
		NullCheck(L_46);
		int32_t L_48 = ((int32_t)il2cpp_codegen_add((int32_t)L_47, (int32_t)2));
		int32_t L_49 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		NullCheck(L_45);
		int32_t L_50 = L_49;
		Vector3_t3722313464  L_51 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_50));
		Vector3_t3722313464  L_52 = V_8;
		GL_Vertex_m691990801(NULL /*static, unused*/, L_52, /*hidden argument*/NULL);
		Vector3_t3722313464  L_53 = V_9;
		GL_Vertex_m691990801(NULL /*static, unused*/, L_53, /*hidden argument*/NULL);
		Vector3_t3722313464  L_54 = V_9;
		GL_Vertex_m691990801(NULL /*static, unused*/, L_54, /*hidden argument*/NULL);
		Vector3_t3722313464  L_55 = L_51;
		GL_Vertex_m691990801(NULL /*static, unused*/, L_55, /*hidden argument*/NULL);
		GL_Vertex_m691990801(NULL /*static, unused*/, L_55, /*hidden argument*/NULL);
		Vector3_t3722313464  L_56 = V_8;
		GL_Vertex_m691990801(NULL /*static, unused*/, L_56, /*hidden argument*/NULL);
		int32_t L_57 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_57, (int32_t)3));
	}

IL_0121:
	{
		int32_t L_58 = V_7;
		Int32U5BU5D_t385246372* L_59 = V_3;
		NullCheck(L_59);
		if ((((int32_t)L_58) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_59)->max_length)))))))
		{
			goto IL_00ce;
		}
	}
	{
		GL_End_m539612367(NULL /*static, unused*/, /*hidden argument*/NULL);
		GL_PopMatrix_m3416050869(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuforia.WireframeBehaviour::OnDrawGizmos()
extern "C"  void WireframeBehaviour_OnDrawGizmos_m1837418945 (WireframeBehaviour_t1831066704 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WireframeBehaviour_OnDrawGizmos_m1837418945_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MeshFilter_t3523625662 * V_0 = NULL;
	Mesh_t3648964284 * V_1 = NULL;
	Vector3U5BU5D_t1718750761* V_2 = NULL;
	Int32U5BU5D_t385246372* V_3 = NULL;
	int32_t V_4 = 0;
	Vector3_t3722313464  V_5;
	memset(&V_5, 0, sizeof(V_5));
	Vector3_t3722313464  V_6;
	memset(&V_6, 0, sizeof(V_6));
	Vector3_t3722313464  V_7;
	memset(&V_7, 0, sizeof(V_7));
	{
		bool L_0 = __this->get_ShowLines_3();
		if (!L_0)
		{
			goto IL_00de;
		}
	}
	{
		bool L_1 = Behaviour_get_enabled_m753527255(__this, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_00de;
		}
	}
	{
		MeshFilter_t3523625662 * L_2 = Component_GetComponent_TisMeshFilter_t3523625662_m569847836(__this, /*hidden argument*/Component_GetComponent_TisMeshFilter_t3523625662_m569847836_RuntimeMethod_var);
		V_0 = L_2;
		MeshFilter_t3523625662 * L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0026;
		}
	}
	{
		return;
	}

IL_0026:
	{
		GameObject_t1113636619 * L_5 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		Transform_t3600365921 * L_6 = GameObject_get_transform_m1369836730(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector3_t3722313464  L_7 = Transform_get_position_m36019626(L_6, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_8 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		Transform_t3600365921 * L_9 = GameObject_get_transform_m1369836730(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		Quaternion_t2301928331  L_10 = Transform_get_rotation_m3502953881(L_9, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_11 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		Transform_t3600365921 * L_12 = GameObject_get_transform_m1369836730(L_11, /*hidden argument*/NULL);
		NullCheck(L_12);
		Vector3_t3722313464  L_13 = Transform_get_lossyScale_m465496651(L_12, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Matrix4x4_t1817901843_il2cpp_TypeInfo_var);
		Matrix4x4_t1817901843  L_14 = Matrix4x4_TRS_m3801934620(NULL /*static, unused*/, L_7, L_10, L_13, /*hidden argument*/NULL);
		Gizmos_set_matrix_m3287403258(NULL /*static, unused*/, L_14, /*hidden argument*/NULL);
		Color_t2555686324  L_15 = __this->get_LineColor_4();
		Gizmos_set_color_m3399737545(NULL /*static, unused*/, L_15, /*hidden argument*/NULL);
		MeshFilter_t3523625662 * L_16 = V_0;
		NullCheck(L_16);
		Mesh_t3648964284 * L_17 = MeshFilter_get_sharedMesh_m1726897210(L_16, /*hidden argument*/NULL);
		V_1 = L_17;
		Mesh_t3648964284 * L_18 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_19 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_18, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_00de;
		}
	}
	{
		Mesh_t3648964284 * L_20 = V_1;
		NullCheck(L_20);
		Vector3U5BU5D_t1718750761* L_21 = Mesh_get_vertices_m3585684815(L_20, /*hidden argument*/NULL);
		V_2 = L_21;
		Mesh_t3648964284 * L_22 = V_1;
		NullCheck(L_22);
		Int32U5BU5D_t385246372* L_23 = Mesh_get_triangles_m3059934743(L_22, /*hidden argument*/NULL);
		V_3 = L_23;
		V_4 = 0;
		goto IL_00d7;
	}

IL_008e:
	{
		Vector3U5BU5D_t1718750761* L_24 = V_2;
		Int32U5BU5D_t385246372* L_25 = V_3;
		int32_t L_26 = V_4;
		NullCheck(L_25);
		int32_t L_27 = L_26;
		int32_t L_28 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		NullCheck(L_24);
		int32_t L_29 = L_28;
		Vector3_t3722313464  L_30 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		V_5 = L_30;
		Vector3U5BU5D_t1718750761* L_31 = V_2;
		Int32U5BU5D_t385246372* L_32 = V_3;
		int32_t L_33 = V_4;
		NullCheck(L_32);
		int32_t L_34 = ((int32_t)il2cpp_codegen_add((int32_t)L_33, (int32_t)1));
		int32_t L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		NullCheck(L_31);
		int32_t L_36 = L_35;
		Vector3_t3722313464  L_37 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		V_6 = L_37;
		Vector3U5BU5D_t1718750761* L_38 = V_2;
		Int32U5BU5D_t385246372* L_39 = V_3;
		int32_t L_40 = V_4;
		NullCheck(L_39);
		int32_t L_41 = ((int32_t)il2cpp_codegen_add((int32_t)L_40, (int32_t)2));
		int32_t L_42 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		NullCheck(L_38);
		int32_t L_43 = L_42;
		Vector3_t3722313464  L_44 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		V_7 = L_44;
		Vector3_t3722313464  L_45 = V_5;
		Vector3_t3722313464  L_46 = V_6;
		Gizmos_DrawLine_m3273476787(NULL /*static, unused*/, L_45, L_46, /*hidden argument*/NULL);
		Vector3_t3722313464  L_47 = V_6;
		Vector3_t3722313464  L_48 = V_7;
		Gizmos_DrawLine_m3273476787(NULL /*static, unused*/, L_47, L_48, /*hidden argument*/NULL);
		Vector3_t3722313464  L_49 = V_7;
		Vector3_t3722313464  L_50 = V_5;
		Gizmos_DrawLine_m3273476787(NULL /*static, unused*/, L_49, L_50, /*hidden argument*/NULL);
		int32_t L_51 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_51, (int32_t)3));
	}

IL_00d7:
	{
		int32_t L_52 = V_4;
		Int32U5BU5D_t385246372* L_53 = V_3;
		NullCheck(L_53);
		if ((((int32_t)L_52) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_53)->max_length)))))))
		{
			goto IL_008e;
		}
	}

IL_00de:
	{
		return;
	}
}
// System.Void Vuforia.WireframeBehaviour::.ctor()
extern "C"  void WireframeBehaviour__ctor_m2452166919 (WireframeBehaviour_t1831066704 * __this, const RuntimeMethod* method)
{
	{
		__this->set_ShowLines_3((bool)1);
		Color_t2555686324  L_0 = Color_get_green_m490390750(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_LineColor_4(L_0);
		VuforiaMonoBehaviour__ctor_m348562674(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Vuforia.WireframeTrackableEventHandler::Start()
extern "C"  void WireframeTrackableEventHandler_Start_m3436697873 (WireframeTrackableEventHandler_t2143753312 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WireframeTrackableEventHandler_Start_m3436697873_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		TrackableBehaviour_t1113559212 * L_0 = Component_GetComponent_TisTrackableBehaviour_t1113559212_m1736119408(__this, /*hidden argument*/Component_GetComponent_TisTrackableBehaviour_t1113559212_m1736119408_RuntimeMethod_var);
		__this->set_mTrackableBehaviour_2(L_0);
		TrackableBehaviour_t1113559212 * L_1 = __this->get_mTrackableBehaviour_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0025;
		}
	}
	{
		TrackableBehaviour_t1113559212 * L_3 = __this->get_mTrackableBehaviour_2();
		NullCheck(L_3);
		TrackableBehaviour_RegisterTrackableEventHandler_m2462783619(L_3, __this, /*hidden argument*/NULL);
	}

IL_0025:
	{
		return;
	}
}
// System.Void Vuforia.WireframeTrackableEventHandler::OnTrackableStateChanged(Vuforia.TrackableBehaviour/Status,Vuforia.TrackableBehaviour/Status)
extern "C"  void WireframeTrackableEventHandler_OnTrackableStateChanged_m519024718 (WireframeTrackableEventHandler_t2143753312 * __this, int32_t ___previousStatus0, int32_t ___newStatus1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___newStatus1;
		if ((((int32_t)L_0) == ((int32_t)2)))
		{
			goto IL_0008;
		}
	}
	{
		int32_t L_1 = ___newStatus1;
		if ((!(((uint32_t)L_1) == ((uint32_t)3))))
		{
			goto IL_000f;
		}
	}

IL_0008:
	{
		WireframeTrackableEventHandler_OnTrackingFound_m2813716415(__this, /*hidden argument*/NULL);
		return;
	}

IL_000f:
	{
		WireframeTrackableEventHandler_OnTrackingLost_m1967211472(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuforia.WireframeTrackableEventHandler::OnTrackingFound()
extern "C"  void WireframeTrackableEventHandler_OnTrackingFound_m2813716415 (WireframeTrackableEventHandler_t2143753312 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WireframeTrackableEventHandler_OnTrackingFound_m2813716415_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ColliderU5BU5D_t4234922487* V_0 = NULL;
	WireframeBehaviourU5BU5D_t4114094193* V_1 = NULL;
	RendererU5BU5D_t3210418286* V_2 = NULL;
	int32_t V_3 = 0;
	ColliderU5BU5D_t4234922487* V_4 = NULL;
	WireframeBehaviourU5BU5D_t4114094193* V_5 = NULL;
	{
		RendererU5BU5D_t3210418286* L_0 = Component_GetComponentsInChildren_TisRenderer_t2627027031_m2673895911(__this, (bool)1, /*hidden argument*/Component_GetComponentsInChildren_TisRenderer_t2627027031_m2673895911_RuntimeMethod_var);
		ColliderU5BU5D_t4234922487* L_1 = Component_GetComponentsInChildren_TisCollider_t1773347010_m2667952426(__this, (bool)1, /*hidden argument*/Component_GetComponentsInChildren_TisCollider_t1773347010_m2667952426_RuntimeMethod_var);
		V_0 = L_1;
		WireframeBehaviourU5BU5D_t4114094193* L_2 = Component_GetComponentsInChildren_TisWireframeBehaviour_t1831066704_m2022065013(__this, (bool)1, /*hidden argument*/Component_GetComponentsInChildren_TisWireframeBehaviour_t1831066704_m2022065013_RuntimeMethod_var);
		V_1 = L_2;
		V_2 = L_0;
		V_3 = 0;
		goto IL_0029;
	}

IL_001c:
	{
		RendererU5BU5D_t3210418286* L_3 = V_2;
		int32_t L_4 = V_3;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		Renderer_t2627027031 * L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(L_6);
		Renderer_set_enabled_m1727253150(L_6, (bool)1, /*hidden argument*/NULL);
		int32_t L_7 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0029:
	{
		int32_t L_8 = V_3;
		RendererU5BU5D_t3210418286* L_9 = V_2;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_9)->max_length)))))))
		{
			goto IL_001c;
		}
	}
	{
		ColliderU5BU5D_t4234922487* L_10 = V_0;
		V_4 = L_10;
		V_3 = 0;
		goto IL_0044;
	}

IL_0036:
	{
		ColliderU5BU5D_t4234922487* L_11 = V_4;
		int32_t L_12 = V_3;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		Collider_t1773347010 * L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_14);
		Collider_set_enabled_m1517463283(L_14, (bool)1, /*hidden argument*/NULL);
		int32_t L_15 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_0044:
	{
		int32_t L_16 = V_3;
		ColliderU5BU5D_t4234922487* L_17 = V_4;
		NullCheck(L_17);
		if ((((int32_t)L_16) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_17)->max_length)))))))
		{
			goto IL_0036;
		}
	}
	{
		WireframeBehaviourU5BU5D_t4114094193* L_18 = V_1;
		V_5 = L_18;
		V_3 = 0;
		goto IL_0060;
	}

IL_0052:
	{
		WireframeBehaviourU5BU5D_t4114094193* L_19 = V_5;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21 = L_20;
		WireframeBehaviour_t1831066704 * L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		NullCheck(L_22);
		Behaviour_set_enabled_m20417929(L_22, (bool)1, /*hidden argument*/NULL);
		int32_t L_23 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
	}

IL_0060:
	{
		int32_t L_24 = V_3;
		WireframeBehaviourU5BU5D_t4114094193* L_25 = V_5;
		NullCheck(L_25);
		if ((((int32_t)L_24) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_25)->max_length)))))))
		{
			goto IL_0052;
		}
	}
	{
		TrackableBehaviour_t1113559212 * L_26 = __this->get_mTrackableBehaviour_2();
		NullCheck(L_26);
		String_t* L_27 = TrackableBehaviour_get_TrackableName_m3644057705(L_26, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_28 = String_Concat_m3755062657(NULL /*static, unused*/, _stringLiteral3820270571, L_27, _stringLiteral3073488411, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_28, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuforia.WireframeTrackableEventHandler::OnTrackingLost()
extern "C"  void WireframeTrackableEventHandler_OnTrackingLost_m1967211472 (WireframeTrackableEventHandler_t2143753312 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WireframeTrackableEventHandler_OnTrackingLost_m1967211472_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ColliderU5BU5D_t4234922487* V_0 = NULL;
	WireframeBehaviourU5BU5D_t4114094193* V_1 = NULL;
	RendererU5BU5D_t3210418286* V_2 = NULL;
	int32_t V_3 = 0;
	ColliderU5BU5D_t4234922487* V_4 = NULL;
	WireframeBehaviourU5BU5D_t4114094193* V_5 = NULL;
	{
		RendererU5BU5D_t3210418286* L_0 = Component_GetComponentsInChildren_TisRenderer_t2627027031_m2673895911(__this, (bool)1, /*hidden argument*/Component_GetComponentsInChildren_TisRenderer_t2627027031_m2673895911_RuntimeMethod_var);
		ColliderU5BU5D_t4234922487* L_1 = Component_GetComponentsInChildren_TisCollider_t1773347010_m2667952426(__this, (bool)1, /*hidden argument*/Component_GetComponentsInChildren_TisCollider_t1773347010_m2667952426_RuntimeMethod_var);
		V_0 = L_1;
		WireframeBehaviourU5BU5D_t4114094193* L_2 = Component_GetComponentsInChildren_TisWireframeBehaviour_t1831066704_m2022065013(__this, (bool)1, /*hidden argument*/Component_GetComponentsInChildren_TisWireframeBehaviour_t1831066704_m2022065013_RuntimeMethod_var);
		V_1 = L_2;
		V_2 = L_0;
		V_3 = 0;
		goto IL_0029;
	}

IL_001c:
	{
		RendererU5BU5D_t3210418286* L_3 = V_2;
		int32_t L_4 = V_3;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		Renderer_t2627027031 * L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(L_6);
		Renderer_set_enabled_m1727253150(L_6, (bool)0, /*hidden argument*/NULL);
		int32_t L_7 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0029:
	{
		int32_t L_8 = V_3;
		RendererU5BU5D_t3210418286* L_9 = V_2;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_9)->max_length)))))))
		{
			goto IL_001c;
		}
	}
	{
		ColliderU5BU5D_t4234922487* L_10 = V_0;
		V_4 = L_10;
		V_3 = 0;
		goto IL_0044;
	}

IL_0036:
	{
		ColliderU5BU5D_t4234922487* L_11 = V_4;
		int32_t L_12 = V_3;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		Collider_t1773347010 * L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_14);
		Collider_set_enabled_m1517463283(L_14, (bool)0, /*hidden argument*/NULL);
		int32_t L_15 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_0044:
	{
		int32_t L_16 = V_3;
		ColliderU5BU5D_t4234922487* L_17 = V_4;
		NullCheck(L_17);
		if ((((int32_t)L_16) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_17)->max_length)))))))
		{
			goto IL_0036;
		}
	}
	{
		WireframeBehaviourU5BU5D_t4114094193* L_18 = V_1;
		V_5 = L_18;
		V_3 = 0;
		goto IL_0060;
	}

IL_0052:
	{
		WireframeBehaviourU5BU5D_t4114094193* L_19 = V_5;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21 = L_20;
		WireframeBehaviour_t1831066704 * L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		NullCheck(L_22);
		Behaviour_set_enabled_m20417929(L_22, (bool)0, /*hidden argument*/NULL);
		int32_t L_23 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
	}

IL_0060:
	{
		int32_t L_24 = V_3;
		WireframeBehaviourU5BU5D_t4114094193* L_25 = V_5;
		NullCheck(L_25);
		if ((((int32_t)L_24) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_25)->max_length)))))))
		{
			goto IL_0052;
		}
	}
	{
		TrackableBehaviour_t1113559212 * L_26 = __this->get_mTrackableBehaviour_2();
		NullCheck(L_26);
		String_t* L_27 = TrackableBehaviour_get_TrackableName_m3644057705(L_26, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_28 = String_Concat_m3755062657(NULL /*static, unused*/, _stringLiteral3820270571, L_27, _stringLiteral3483481617, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_28, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuforia.WireframeTrackableEventHandler::.ctor()
extern "C"  void WireframeTrackableEventHandler__ctor_m2994238637 (WireframeTrackableEventHandler_t2143753312 * __this, const RuntimeMethod* method)
{
	{
		VuforiaMonoBehaviour__ctor_m348562674(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Vuforia.WSAUnityPlayer::LoadNativeLibraries()
extern "C"  void WSAUnityPlayer_LoadNativeLibraries_m3240794706 (WSAUnityPlayer_t3135728299 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void Vuforia.WSAUnityPlayer::InitializePlatform()
extern "C"  void WSAUnityPlayer_InitializePlatform_m618442718 (WSAUnityPlayer_t3135728299 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// Vuforia.VuforiaUnity/InitError Vuforia.WSAUnityPlayer::InitializeVuforia(System.String)
extern "C"  int32_t WSAUnityPlayer_InitializeVuforia_m1469206804 (WSAUnityPlayer_t3135728299 * __this, String_t* ___licenseKey0, const RuntimeMethod* method)
{
	{
		return (int32_t)((-1));
	}
}
// System.Void Vuforia.WSAUnityPlayer::StartScene()
extern "C"  void WSAUnityPlayer_StartScene_m426981829 (WSAUnityPlayer_t3135728299 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void Vuforia.WSAUnityPlayer::Update()
extern "C"  void WSAUnityPlayer_Update_m2619224026 (WSAUnityPlayer_t3135728299 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void Vuforia.WSAUnityPlayer::Dispose()
extern "C"  void WSAUnityPlayer_Dispose_m2347149042 (WSAUnityPlayer_t3135728299 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void Vuforia.WSAUnityPlayer::OnPause()
extern "C"  void WSAUnityPlayer_OnPause_m33757750 (WSAUnityPlayer_t3135728299 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void Vuforia.WSAUnityPlayer::OnResume()
extern "C"  void WSAUnityPlayer_OnResume_m1549828269 (WSAUnityPlayer_t3135728299 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void Vuforia.WSAUnityPlayer::OnDestroy()
extern "C"  void WSAUnityPlayer_OnDestroy_m3595342806 (WSAUnityPlayer_t3135728299 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void Vuforia.WSAUnityPlayer::.ctor()
extern "C"  void WSAUnityPlayer__ctor_m3852159652 (WSAUnityPlayer_t3135728299 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void VuforiaMonoBehaviour::.ctor()
extern "C"  void VuforiaMonoBehaviour__ctor_m348562674 (VuforiaMonoBehaviour_t1150221792 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
