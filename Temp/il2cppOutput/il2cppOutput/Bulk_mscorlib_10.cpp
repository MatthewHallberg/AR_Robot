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

template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
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
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericVirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t950877179;
// System.ArgumentNullException
struct ArgumentNullException_t1615371798;
// System.String
struct String_t;
// System.UnauthorizedAccessException
struct UnauthorizedAccessException_t490705335;
// System.SystemException
struct SystemException_t176217640;
// System.Exception
struct Exception_t;
// System.UnhandledExceptionEventArgs
struct UnhandledExceptionEventArgs_t2886101344;
// System.EventArgs
struct EventArgs_t3591816995;
// System.UnhandledExceptionEventHandler
struct UnhandledExceptionEventHandler_t3101989324;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// System.UnitySerializationHolder
struct UnitySerializationHolder_t431912834;
// System.Type
struct Type_t;
// System.DBNull
struct DBNull_t3725197148;
// System.Reflection.Module
struct Module_t2987026101;
// System.Reflection.Assembly
struct Assembly_t;
// System.NotSupportedException
struct NotSupportedException_t1314879016;
// System.ValueType
struct ValueType_t3640485471;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// System.Version
struct Version_t3456873960;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.ArgumentException
struct ArgumentException_t132251570;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_t777629997;
// System.WeakReference
struct WeakReference_t1334886716;
// System.Collections.Hashtable
struct Hashtable_t1853889766;
// System.Collections.ArrayList
struct ArrayList_t2718874744;
// System.Runtime.Serialization.IFormatterConverter
struct IFormatterConverter_t2171992254;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Byte
struct Byte_t1134296376;
// System.Double
struct Double_t594665363;
// System.UInt16
struct UInt16_t2177724958;
// System.Void
struct Void_t1185182177;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t1677132599;
// System.Reflection.Assembly/ResolveEventHolder
struct ResolveEventHolder_t2120639521;
// System.Security.Policy.Evidence
struct Evidence_t2008144148;
// System.Security.PermissionSet
struct PermissionSet_t223948603;
// System.Type[]
struct TypeU5BU5D_t3940880105;
// System.Reflection.MemberFilter
struct MemberFilter_t426314064;
// System.Reflection.TypeFilter
struct TypeFilter_t2356120900;

extern RuntimeClass* UIntPtr_t_il2cpp_TypeInfo_var;
extern const uint32_t UIntPtr__cctor_m3513964473_MetadataUsageId;
extern RuntimeClass* ArgumentNullException_t1615371798_il2cpp_TypeInfo_var;
extern const RuntimeMethod* UIntPtr_System_Runtime_Serialization_ISerializable_GetObjectData_m1767630151_RuntimeMethod_var;
extern String_t* _stringLiteral79347;
extern String_t* _stringLiteral1363226343;
extern const uint32_t UIntPtr_System_Runtime_Serialization_ISerializable_GetObjectData_m1767630151_MetadataUsageId;
extern const uint32_t UIntPtr_Equals_m1316671746_MetadataUsageId;
extern String_t* _stringLiteral563158065;
extern const uint32_t UnauthorizedAccessException__ctor_m246605039_MetadataUsageId;
extern RuntimeClass* EventArgs_t3591816995_il2cpp_TypeInfo_var;
extern const uint32_t UnhandledExceptionEventArgs__ctor_m224348470_MetadataUsageId;
extern String_t* _stringLiteral2037252898;
extern String_t* _stringLiteral3283586028;
extern String_t* _stringLiteral209558951;
extern const uint32_t UnitySerializationHolder__ctor_m3869442095_MetadataUsageId;
extern const RuntimeType* UnitySerializationHolder_t431912834_0_0_0_var;
extern RuntimeClass* Type_t_il2cpp_TypeInfo_var;
extern const uint32_t UnitySerializationHolder_GetTypeData_m2453779479_MetadataUsageId;
extern const uint32_t UnitySerializationHolder_GetDBNullData_m714211970_MetadataUsageId;
extern const uint32_t UnitySerializationHolder_GetModuleData_m1550266881_MetadataUsageId;
extern RuntimeClass* NotSupportedException_t1314879016_il2cpp_TypeInfo_var;
extern const RuntimeMethod* UnitySerializationHolder_GetObjectData_m3377455907_RuntimeMethod_var;
extern const uint32_t UnitySerializationHolder_GetObjectData_m3377455907_MetadataUsageId;
extern RuntimeClass* DBNull_t3725197148_il2cpp_TypeInfo_var;
extern const RuntimeMethod* UnitySerializationHolder_GetRealObject_m1624354633_RuntimeMethod_var;
extern String_t* _stringLiteral553700296;
extern const uint32_t UnitySerializationHolder_GetRealObject_m1624354633_MetadataUsageId;
extern RuntimeClass* CharU5BU5D_t3528271667_il2cpp_TypeInfo_var;
extern RuntimeClass* ArgumentException_t132251570_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Version__ctor_m1394137037_RuntimeMethod_var;
extern String_t* _stringLiteral1902401671;
extern String_t* _stringLiteral1532400954;
extern const uint32_t Version__ctor_m1394137037_MetadataUsageId;
extern RuntimeClass* ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Version_CheckedSet_m654078179_RuntimeMethod_var;
extern String_t* _stringLiteral419133523;
extern String_t* _stringLiteral2762033855;
extern String_t* _stringLiteral437191301;
extern String_t* _stringLiteral3187820736;
extern const uint32_t Version_CheckedSet_m654078179_MetadataUsageId;
extern RuntimeClass* Version_t3456873960_il2cpp_TypeInfo_var;
extern const uint32_t Version_Clone_m1749041863_MetadataUsageId;
extern const RuntimeMethod* Version_CompareTo_m1662919407_RuntimeMethod_var;
extern String_t* _stringLiteral3512823065;
extern const uint32_t Version_CompareTo_m1662919407_MetadataUsageId;
extern const uint32_t Version_Equals_m3073813696_MetadataUsageId;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3452614530;
extern const uint32_t Version_ToString_m2279867705_MetadataUsageId;
extern RuntimeClass* Char_t3634460470_il2cpp_TypeInfo_var;
extern const uint32_t Version_CreateFromString_m719054818_MetadataUsageId;
extern const RuntimeType* RuntimeObject_0_0_0_var;
extern const RuntimeMethod* WeakReference__ctor_m1244067698_RuntimeMethod_var;
extern String_t* _stringLiteral3234942771;
extern String_t* _stringLiteral2922588279;
extern const uint32_t WeakReference__ctor_m1244067698_MetadataUsageId;
extern RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
extern const RuntimeMethod* WeakReference_GetObjectData_m2192383095_RuntimeMethod_var;
extern const uint32_t WeakReference_GetObjectData_m2192383095_MetadataUsageId;

struct ObjectU5BU5D_t2843939325;
struct StringU5BU5D_t1281789340;
struct CharU5BU5D_t3528271667;


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
#ifndef VERSION_T3456873960_H
#define VERSION_T3456873960_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Version
struct  Version_t3456873960  : public RuntimeObject
{
public:
	// System.Int32 System.Version::_Major
	int32_t ____Major_1;
	// System.Int32 System.Version::_Minor
	int32_t ____Minor_2;
	// System.Int32 System.Version::_Build
	int32_t ____Build_3;
	// System.Int32 System.Version::_Revision
	int32_t ____Revision_4;

public:
	inline static int32_t get_offset_of__Major_1() { return static_cast<int32_t>(offsetof(Version_t3456873960, ____Major_1)); }
	inline int32_t get__Major_1() const { return ____Major_1; }
	inline int32_t* get_address_of__Major_1() { return &____Major_1; }
	inline void set__Major_1(int32_t value)
	{
		____Major_1 = value;
	}

	inline static int32_t get_offset_of__Minor_2() { return static_cast<int32_t>(offsetof(Version_t3456873960, ____Minor_2)); }
	inline int32_t get__Minor_2() const { return ____Minor_2; }
	inline int32_t* get_address_of__Minor_2() { return &____Minor_2; }
	inline void set__Minor_2(int32_t value)
	{
		____Minor_2 = value;
	}

	inline static int32_t get_offset_of__Build_3() { return static_cast<int32_t>(offsetof(Version_t3456873960, ____Build_3)); }
	inline int32_t get__Build_3() const { return ____Build_3; }
	inline int32_t* get_address_of__Build_3() { return &____Build_3; }
	inline void set__Build_3(int32_t value)
	{
		____Build_3 = value;
	}

	inline static int32_t get_offset_of__Revision_4() { return static_cast<int32_t>(offsetof(Version_t3456873960, ____Revision_4)); }
	inline int32_t get__Revision_4() const { return ____Revision_4; }
	inline int32_t* get_address_of__Revision_4() { return &____Revision_4; }
	inline void set__Revision_4(int32_t value)
	{
		____Revision_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VERSION_T3456873960_H
#ifndef SERIALIZATIONINFO_T950877179_H
#define SERIALIZATIONINFO_T950877179_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.SerializationInfo
struct  SerializationInfo_t950877179  : public RuntimeObject
{
public:
	// System.Collections.Hashtable System.Runtime.Serialization.SerializationInfo::serialized
	Hashtable_t1853889766 * ___serialized_0;
	// System.Collections.ArrayList System.Runtime.Serialization.SerializationInfo::values
	ArrayList_t2718874744 * ___values_1;
	// System.String System.Runtime.Serialization.SerializationInfo::assemblyName
	String_t* ___assemblyName_2;
	// System.String System.Runtime.Serialization.SerializationInfo::fullTypeName
	String_t* ___fullTypeName_3;
	// System.Runtime.Serialization.IFormatterConverter System.Runtime.Serialization.SerializationInfo::converter
	RuntimeObject* ___converter_4;

public:
	inline static int32_t get_offset_of_serialized_0() { return static_cast<int32_t>(offsetof(SerializationInfo_t950877179, ___serialized_0)); }
	inline Hashtable_t1853889766 * get_serialized_0() const { return ___serialized_0; }
	inline Hashtable_t1853889766 ** get_address_of_serialized_0() { return &___serialized_0; }
	inline void set_serialized_0(Hashtable_t1853889766 * value)
	{
		___serialized_0 = value;
		Il2CppCodeGenWriteBarrier((&___serialized_0), value);
	}

	inline static int32_t get_offset_of_values_1() { return static_cast<int32_t>(offsetof(SerializationInfo_t950877179, ___values_1)); }
	inline ArrayList_t2718874744 * get_values_1() const { return ___values_1; }
	inline ArrayList_t2718874744 ** get_address_of_values_1() { return &___values_1; }
	inline void set_values_1(ArrayList_t2718874744 * value)
	{
		___values_1 = value;
		Il2CppCodeGenWriteBarrier((&___values_1), value);
	}

	inline static int32_t get_offset_of_assemblyName_2() { return static_cast<int32_t>(offsetof(SerializationInfo_t950877179, ___assemblyName_2)); }
	inline String_t* get_assemblyName_2() const { return ___assemblyName_2; }
	inline String_t** get_address_of_assemblyName_2() { return &___assemblyName_2; }
	inline void set_assemblyName_2(String_t* value)
	{
		___assemblyName_2 = value;
		Il2CppCodeGenWriteBarrier((&___assemblyName_2), value);
	}

	inline static int32_t get_offset_of_fullTypeName_3() { return static_cast<int32_t>(offsetof(SerializationInfo_t950877179, ___fullTypeName_3)); }
	inline String_t* get_fullTypeName_3() const { return ___fullTypeName_3; }
	inline String_t** get_address_of_fullTypeName_3() { return &___fullTypeName_3; }
	inline void set_fullTypeName_3(String_t* value)
	{
		___fullTypeName_3 = value;
		Il2CppCodeGenWriteBarrier((&___fullTypeName_3), value);
	}

	inline static int32_t get_offset_of_converter_4() { return static_cast<int32_t>(offsetof(SerializationInfo_t950877179, ___converter_4)); }
	inline RuntimeObject* get_converter_4() const { return ___converter_4; }
	inline RuntimeObject** get_address_of_converter_4() { return &___converter_4; }
	inline void set_converter_4(RuntimeObject* value)
	{
		___converter_4 = value;
		Il2CppCodeGenWriteBarrier((&___converter_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZATIONINFO_T950877179_H
#ifndef MEMBERINFO_T_H
#define MEMBERINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERINFO_T_H
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
#ifndef EVENTARGS_T3591816995_H
#define EVENTARGS_T3591816995_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EventArgs
struct  EventArgs_t3591816995  : public RuntimeObject
{
public:

public:
};

struct EventArgs_t3591816995_StaticFields
{
public:
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t3591816995 * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(EventArgs_t3591816995_StaticFields, ___Empty_0)); }
	inline EventArgs_t3591816995 * get_Empty_0() const { return ___Empty_0; }
	inline EventArgs_t3591816995 ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(EventArgs_t3591816995 * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTARGS_T3591816995_H
#ifndef EXCEPTION_T_H
#define EXCEPTION_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t4013366056* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t * ___inner_exception_1;
	// System.String System.Exception::message
	String_t* ___message_2;
	// System.String System.Exception::help_link
	String_t* ___help_link_3;
	// System.String System.Exception::class_name
	String_t* ___class_name_4;
	// System.String System.Exception::stack_trace
	String_t* ___stack_trace_5;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_6;
	// System.Int32 System.Exception::remote_stack_index
	int32_t ___remote_stack_index_7;
	// System.Int32 System.Exception::hresult
	int32_t ___hresult_8;
	// System.String System.Exception::source
	String_t* ___source_9;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_10;

public:
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t4013366056* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t4013366056** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t4013366056* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t, ___inner_exception_1)); }
	inline Exception_t * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t, ____data_10)); }
	inline RuntimeObject* get__data_10() const { return ____data_10; }
	inline RuntimeObject** get_address_of__data_10() { return &____data_10; }
	inline void set__data_10(RuntimeObject* value)
	{
		____data_10 = value;
		Il2CppCodeGenWriteBarrier((&____data_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCEPTION_T_H
#ifndef DBNULL_T3725197148_H
#define DBNULL_T3725197148_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DBNull
struct  DBNull_t3725197148  : public RuntimeObject
{
public:

public:
};

struct DBNull_t3725197148_StaticFields
{
public:
	// System.DBNull System.DBNull::Value
	DBNull_t3725197148 * ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(DBNull_t3725197148_StaticFields, ___Value_0)); }
	inline DBNull_t3725197148 * get_Value_0() const { return ___Value_0; }
	inline DBNull_t3725197148 ** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(DBNull_t3725197148 * value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((&___Value_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DBNULL_T3725197148_H
#ifndef CHAR_T3634460470_H
#define CHAR_T3634460470_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Char
struct  Char_t3634460470 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Char_t3634460470, ___m_value_2)); }
	inline Il2CppChar get_m_value_2() const { return ___m_value_2; }
	inline Il2CppChar* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(Il2CppChar value)
	{
		___m_value_2 = value;
	}
};

struct Char_t3634460470_StaticFields
{
public:
	// System.Byte* System.Char::category_data
	uint8_t* ___category_data_3;
	// System.Byte* System.Char::numeric_data
	uint8_t* ___numeric_data_4;
	// System.Double* System.Char::numeric_data_values
	double* ___numeric_data_values_5;
	// System.UInt16* System.Char::to_lower_data_low
	uint16_t* ___to_lower_data_low_6;
	// System.UInt16* System.Char::to_lower_data_high
	uint16_t* ___to_lower_data_high_7;
	// System.UInt16* System.Char::to_upper_data_low
	uint16_t* ___to_upper_data_low_8;
	// System.UInt16* System.Char::to_upper_data_high
	uint16_t* ___to_upper_data_high_9;

public:
	inline static int32_t get_offset_of_category_data_3() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___category_data_3)); }
	inline uint8_t* get_category_data_3() const { return ___category_data_3; }
	inline uint8_t** get_address_of_category_data_3() { return &___category_data_3; }
	inline void set_category_data_3(uint8_t* value)
	{
		___category_data_3 = value;
	}

	inline static int32_t get_offset_of_numeric_data_4() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___numeric_data_4)); }
	inline uint8_t* get_numeric_data_4() const { return ___numeric_data_4; }
	inline uint8_t** get_address_of_numeric_data_4() { return &___numeric_data_4; }
	inline void set_numeric_data_4(uint8_t* value)
	{
		___numeric_data_4 = value;
	}

	inline static int32_t get_offset_of_numeric_data_values_5() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___numeric_data_values_5)); }
	inline double* get_numeric_data_values_5() const { return ___numeric_data_values_5; }
	inline double** get_address_of_numeric_data_values_5() { return &___numeric_data_values_5; }
	inline void set_numeric_data_values_5(double* value)
	{
		___numeric_data_values_5 = value;
	}

	inline static int32_t get_offset_of_to_lower_data_low_6() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_lower_data_low_6)); }
	inline uint16_t* get_to_lower_data_low_6() const { return ___to_lower_data_low_6; }
	inline uint16_t** get_address_of_to_lower_data_low_6() { return &___to_lower_data_low_6; }
	inline void set_to_lower_data_low_6(uint16_t* value)
	{
		___to_lower_data_low_6 = value;
	}

	inline static int32_t get_offset_of_to_lower_data_high_7() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_lower_data_high_7)); }
	inline uint16_t* get_to_lower_data_high_7() const { return ___to_lower_data_high_7; }
	inline uint16_t** get_address_of_to_lower_data_high_7() { return &___to_lower_data_high_7; }
	inline void set_to_lower_data_high_7(uint16_t* value)
	{
		___to_lower_data_high_7 = value;
	}

	inline static int32_t get_offset_of_to_upper_data_low_8() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_upper_data_low_8)); }
	inline uint16_t* get_to_upper_data_low_8() const { return ___to_upper_data_low_8; }
	inline uint16_t** get_address_of_to_upper_data_low_8() { return &___to_upper_data_low_8; }
	inline void set_to_upper_data_low_8(uint16_t* value)
	{
		___to_upper_data_low_8 = value;
	}

	inline static int32_t get_offset_of_to_upper_data_high_9() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_upper_data_high_9)); }
	inline uint16_t* get_to_upper_data_high_9() const { return ___to_upper_data_high_9; }
	inline uint16_t** get_address_of_to_upper_data_high_9() { return &___to_upper_data_high_9; }
	inline void set_to_upper_data_high_9(uint16_t* value)
	{
		___to_upper_data_high_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHAR_T3634460470_H
#ifndef GCHANDLE_T3351438187_H
#define GCHANDLE_T3351438187_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.GCHandle
struct  GCHandle_t3351438187 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandle::handle
	int32_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(GCHandle_t3351438187, ___handle_0)); }
	inline int32_t get_handle_0() const { return ___handle_0; }
	inline int32_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(int32_t value)
	{
		___handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GCHANDLE_T3351438187_H
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
#ifndef UNHANDLEDEXCEPTIONEVENTARGS_T2886101344_H
#define UNHANDLEDEXCEPTIONEVENTARGS_T2886101344_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UnhandledExceptionEventArgs
struct  UnhandledExceptionEventArgs_t2886101344  : public EventArgs_t3591816995
{
public:
	// System.Object System.UnhandledExceptionEventArgs::exception
	RuntimeObject * ___exception_1;
	// System.Boolean System.UnhandledExceptionEventArgs::m_isTerminating
	bool ___m_isTerminating_2;

public:
	inline static int32_t get_offset_of_exception_1() { return static_cast<int32_t>(offsetof(UnhandledExceptionEventArgs_t2886101344, ___exception_1)); }
	inline RuntimeObject * get_exception_1() const { return ___exception_1; }
	inline RuntimeObject ** get_address_of_exception_1() { return &___exception_1; }
	inline void set_exception_1(RuntimeObject * value)
	{
		___exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___exception_1), value);
	}

	inline static int32_t get_offset_of_m_isTerminating_2() { return static_cast<int32_t>(offsetof(UnhandledExceptionEventArgs_t2886101344, ___m_isTerminating_2)); }
	inline bool get_m_isTerminating_2() const { return ___m_isTerminating_2; }
	inline bool* get_address_of_m_isTerminating_2() { return &___m_isTerminating_2; }
	inline void set_m_isTerminating_2(bool value)
	{
		___m_isTerminating_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNHANDLEDEXCEPTIONEVENTARGS_T2886101344_H
#ifndef SYSTEMEXCEPTION_T176217640_H
#define SYSTEMEXCEPTION_T176217640_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t176217640  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T176217640_H
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
#ifndef UINT64_T4134040092_H
#define UINT64_T4134040092_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt64
struct  UInt64_t4134040092 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_t4134040092, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT64_T4134040092_H
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
#ifndef UINT32_T2560061978_H
#define UINT32_T2560061978_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt32
struct  UInt32_t2560061978 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(UInt32_t2560061978, ___m_value_2)); }
	inline uint32_t get_m_value_2() const { return ___m_value_2; }
	inline uint32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(uint32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT32_T2560061978_H
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
#ifndef UINTPTR_T_H
#define UINTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UIntPtr
struct  UIntPtr_t 
{
public:
	// System.Void* System.UIntPtr::_pointer
	void* ____pointer_1;

public:
	inline static int32_t get_offset_of__pointer_1() { return static_cast<int32_t>(offsetof(UIntPtr_t, ____pointer_1)); }
	inline void* get__pointer_1() const { return ____pointer_1; }
	inline void** get_address_of__pointer_1() { return &____pointer_1; }
	inline void set__pointer_1(void* value)
	{
		____pointer_1 = value;
	}
};

struct UIntPtr_t_StaticFields
{
public:
	// System.UIntPtr System.UIntPtr::Zero
	uintptr_t ___Zero_0;

public:
	inline static int32_t get_offset_of_Zero_0() { return static_cast<int32_t>(offsetof(UIntPtr_t_StaticFields, ___Zero_0)); }
	inline uintptr_t get_Zero_0() const { return ___Zero_0; }
	inline uintptr_t* get_address_of_Zero_0() { return &___Zero_0; }
	inline void set_Zero_0(uintptr_t value)
	{
		___Zero_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINTPTR_T_H
#ifndef GCHANDLETYPE_T3432586689_H
#define GCHANDLETYPE_T3432586689_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.GCHandleType
struct  GCHandleType_t3432586689 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandleType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(GCHandleType_t3432586689, ___value___1)); }
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
#endif // GCHANDLETYPE_T3432586689_H
#ifndef WEAKREFERENCE_T1334886716_H
#define WEAKREFERENCE_T1334886716_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.WeakReference
struct  WeakReference_t1334886716  : public RuntimeObject
{
public:
	// System.Boolean System.WeakReference::isLongReference
	bool ___isLongReference_0;
	// System.Runtime.InteropServices.GCHandle System.WeakReference::gcHandle
	GCHandle_t3351438187  ___gcHandle_1;

public:
	inline static int32_t get_offset_of_isLongReference_0() { return static_cast<int32_t>(offsetof(WeakReference_t1334886716, ___isLongReference_0)); }
	inline bool get_isLongReference_0() const { return ___isLongReference_0; }
	inline bool* get_address_of_isLongReference_0() { return &___isLongReference_0; }
	inline void set_isLongReference_0(bool value)
	{
		___isLongReference_0 = value;
	}

	inline static int32_t get_offset_of_gcHandle_1() { return static_cast<int32_t>(offsetof(WeakReference_t1334886716, ___gcHandle_1)); }
	inline GCHandle_t3351438187  get_gcHandle_1() const { return ___gcHandle_1; }
	inline GCHandle_t3351438187 * get_address_of_gcHandle_1() { return &___gcHandle_1; }
	inline void set_gcHandle_1(GCHandle_t3351438187  value)
	{
		___gcHandle_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEAKREFERENCE_T1334886716_H
#ifndef ARGUMENTEXCEPTION_T132251570_H
#define ARGUMENTEXCEPTION_T132251570_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentException
struct  ArgumentException_t132251570  : public SystemException_t176217640
{
public:
	// System.String System.ArgumentException::param_name
	String_t* ___param_name_12;

public:
	inline static int32_t get_offset_of_param_name_12() { return static_cast<int32_t>(offsetof(ArgumentException_t132251570, ___param_name_12)); }
	inline String_t* get_param_name_12() const { return ___param_name_12; }
	inline String_t** get_address_of_param_name_12() { return &___param_name_12; }
	inline void set_param_name_12(String_t* value)
	{
		___param_name_12 = value;
		Il2CppCodeGenWriteBarrier((&___param_name_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTEXCEPTION_T132251570_H
#ifndef STREAMINGCONTEXTSTATES_T3580100459_H
#define STREAMINGCONTEXTSTATES_T3580100459_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.StreamingContextStates
struct  StreamingContextStates_t3580100459 
{
public:
	// System.Int32 System.Runtime.Serialization.StreamingContextStates::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(StreamingContextStates_t3580100459, ___value___1)); }
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
#endif // STREAMINGCONTEXTSTATES_T3580100459_H
#ifndef NOTSUPPORTEDEXCEPTION_T1314879016_H
#define NOTSUPPORTEDEXCEPTION_T1314879016_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NotSupportedException
struct  NotSupportedException_t1314879016  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTSUPPORTEDEXCEPTION_T1314879016_H
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
#ifndef ASSEMBLY_T_H
#define ASSEMBLY_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Assembly
struct  Assembly_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Reflection.Assembly::_mono_assembly
	intptr_t ____mono_assembly_0;
	// System.Reflection.Assembly/ResolveEventHolder System.Reflection.Assembly::resolve_event_holder
	ResolveEventHolder_t2120639521 * ___resolve_event_holder_1;
	// System.Security.Policy.Evidence System.Reflection.Assembly::_evidence
	Evidence_t2008144148 * ____evidence_2;
	// System.Security.PermissionSet System.Reflection.Assembly::_minimum
	PermissionSet_t223948603 * ____minimum_3;
	// System.Security.PermissionSet System.Reflection.Assembly::_optional
	PermissionSet_t223948603 * ____optional_4;
	// System.Security.PermissionSet System.Reflection.Assembly::_refuse
	PermissionSet_t223948603 * ____refuse_5;
	// System.Security.PermissionSet System.Reflection.Assembly::_granted
	PermissionSet_t223948603 * ____granted_6;
	// System.Security.PermissionSet System.Reflection.Assembly::_denied
	PermissionSet_t223948603 * ____denied_7;
	// System.Boolean System.Reflection.Assembly::fromByteArray
	bool ___fromByteArray_8;
	// System.String System.Reflection.Assembly::assemblyName
	String_t* ___assemblyName_9;

public:
	inline static int32_t get_offset_of__mono_assembly_0() { return static_cast<int32_t>(offsetof(Assembly_t, ____mono_assembly_0)); }
	inline intptr_t get__mono_assembly_0() const { return ____mono_assembly_0; }
	inline intptr_t* get_address_of__mono_assembly_0() { return &____mono_assembly_0; }
	inline void set__mono_assembly_0(intptr_t value)
	{
		____mono_assembly_0 = value;
	}

	inline static int32_t get_offset_of_resolve_event_holder_1() { return static_cast<int32_t>(offsetof(Assembly_t, ___resolve_event_holder_1)); }
	inline ResolveEventHolder_t2120639521 * get_resolve_event_holder_1() const { return ___resolve_event_holder_1; }
	inline ResolveEventHolder_t2120639521 ** get_address_of_resolve_event_holder_1() { return &___resolve_event_holder_1; }
	inline void set_resolve_event_holder_1(ResolveEventHolder_t2120639521 * value)
	{
		___resolve_event_holder_1 = value;
		Il2CppCodeGenWriteBarrier((&___resolve_event_holder_1), value);
	}

	inline static int32_t get_offset_of__evidence_2() { return static_cast<int32_t>(offsetof(Assembly_t, ____evidence_2)); }
	inline Evidence_t2008144148 * get__evidence_2() const { return ____evidence_2; }
	inline Evidence_t2008144148 ** get_address_of__evidence_2() { return &____evidence_2; }
	inline void set__evidence_2(Evidence_t2008144148 * value)
	{
		____evidence_2 = value;
		Il2CppCodeGenWriteBarrier((&____evidence_2), value);
	}

	inline static int32_t get_offset_of__minimum_3() { return static_cast<int32_t>(offsetof(Assembly_t, ____minimum_3)); }
	inline PermissionSet_t223948603 * get__minimum_3() const { return ____minimum_3; }
	inline PermissionSet_t223948603 ** get_address_of__minimum_3() { return &____minimum_3; }
	inline void set__minimum_3(PermissionSet_t223948603 * value)
	{
		____minimum_3 = value;
		Il2CppCodeGenWriteBarrier((&____minimum_3), value);
	}

	inline static int32_t get_offset_of__optional_4() { return static_cast<int32_t>(offsetof(Assembly_t, ____optional_4)); }
	inline PermissionSet_t223948603 * get__optional_4() const { return ____optional_4; }
	inline PermissionSet_t223948603 ** get_address_of__optional_4() { return &____optional_4; }
	inline void set__optional_4(PermissionSet_t223948603 * value)
	{
		____optional_4 = value;
		Il2CppCodeGenWriteBarrier((&____optional_4), value);
	}

	inline static int32_t get_offset_of__refuse_5() { return static_cast<int32_t>(offsetof(Assembly_t, ____refuse_5)); }
	inline PermissionSet_t223948603 * get__refuse_5() const { return ____refuse_5; }
	inline PermissionSet_t223948603 ** get_address_of__refuse_5() { return &____refuse_5; }
	inline void set__refuse_5(PermissionSet_t223948603 * value)
	{
		____refuse_5 = value;
		Il2CppCodeGenWriteBarrier((&____refuse_5), value);
	}

	inline static int32_t get_offset_of__granted_6() { return static_cast<int32_t>(offsetof(Assembly_t, ____granted_6)); }
	inline PermissionSet_t223948603 * get__granted_6() const { return ____granted_6; }
	inline PermissionSet_t223948603 ** get_address_of__granted_6() { return &____granted_6; }
	inline void set__granted_6(PermissionSet_t223948603 * value)
	{
		____granted_6 = value;
		Il2CppCodeGenWriteBarrier((&____granted_6), value);
	}

	inline static int32_t get_offset_of__denied_7() { return static_cast<int32_t>(offsetof(Assembly_t, ____denied_7)); }
	inline PermissionSet_t223948603 * get__denied_7() const { return ____denied_7; }
	inline PermissionSet_t223948603 ** get_address_of__denied_7() { return &____denied_7; }
	inline void set__denied_7(PermissionSet_t223948603 * value)
	{
		____denied_7 = value;
		Il2CppCodeGenWriteBarrier((&____denied_7), value);
	}

	inline static int32_t get_offset_of_fromByteArray_8() { return static_cast<int32_t>(offsetof(Assembly_t, ___fromByteArray_8)); }
	inline bool get_fromByteArray_8() const { return ___fromByteArray_8; }
	inline bool* get_address_of_fromByteArray_8() { return &___fromByteArray_8; }
	inline void set_fromByteArray_8(bool value)
	{
		___fromByteArray_8 = value;
	}

	inline static int32_t get_offset_of_assemblyName_9() { return static_cast<int32_t>(offsetof(Assembly_t, ___assemblyName_9)); }
	inline String_t* get_assemblyName_9() const { return ___assemblyName_9; }
	inline String_t** get_address_of_assemblyName_9() { return &___assemblyName_9; }
	inline void set_assemblyName_9(String_t* value)
	{
		___assemblyName_9 = value;
		Il2CppCodeGenWriteBarrier((&___assemblyName_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLY_T_H
#ifndef RUNTIMETYPEHANDLE_T3027515415_H
#define RUNTIMETYPEHANDLE_T3027515415_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t3027515415 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t3027515415, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMETYPEHANDLE_T3027515415_H
#ifndef UNITYTYPE_T3666003507_H
#define UNITYTYPE_T3666003507_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UnitySerializationHolder/UnityType
struct  UnityType_t3666003507 
{
public:
	// System.Byte System.UnitySerializationHolder/UnityType::value__
	uint8_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(UnityType_t3666003507, ___value___1)); }
	inline uint8_t get_value___1() const { return ___value___1; }
	inline uint8_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(uint8_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYTYPE_T3666003507_H
#ifndef BINDINGFLAGS_T2721792723_H
#define BINDINGFLAGS_T2721792723_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.BindingFlags
struct  BindingFlags_t2721792723 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(BindingFlags_t2721792723, ___value___1)); }
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
#endif // BINDINGFLAGS_T2721792723_H
#ifndef UNAUTHORIZEDACCESSEXCEPTION_T490705335_H
#define UNAUTHORIZEDACCESSEXCEPTION_T490705335_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UnauthorizedAccessException
struct  UnauthorizedAccessException_t490705335  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNAUTHORIZEDACCESSEXCEPTION_T490705335_H
#ifndef TYPE_T_H
#define TYPE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t3027515415  ____impl_1;

public:
	inline static int32_t get_offset_of__impl_1() { return static_cast<int32_t>(offsetof(Type_t, ____impl_1)); }
	inline RuntimeTypeHandle_t3027515415  get__impl_1() const { return ____impl_1; }
	inline RuntimeTypeHandle_t3027515415 * get_address_of__impl_1() { return &____impl_1; }
	inline void set__impl_1(RuntimeTypeHandle_t3027515415  value)
	{
		____impl_1 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_2;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t3940880105* ___EmptyTypes_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t426314064 * ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t426314064 * ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t426314064 * ___FilterNameIgnoreCase_6;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_7;

public:
	inline static int32_t get_offset_of_Delimiter_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_2)); }
	inline Il2CppChar get_Delimiter_2() const { return ___Delimiter_2; }
	inline Il2CppChar* get_address_of_Delimiter_2() { return &___Delimiter_2; }
	inline void set_Delimiter_2(Il2CppChar value)
	{
		___Delimiter_2 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_3)); }
	inline TypeU5BU5D_t3940880105* get_EmptyTypes_3() const { return ___EmptyTypes_3; }
	inline TypeU5BU5D_t3940880105** get_address_of_EmptyTypes_3() { return &___EmptyTypes_3; }
	inline void set_EmptyTypes_3(TypeU5BU5D_t3940880105* value)
	{
		___EmptyTypes_3 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyTypes_3), value);
	}

	inline static int32_t get_offset_of_FilterAttribute_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_4)); }
	inline MemberFilter_t426314064 * get_FilterAttribute_4() const { return ___FilterAttribute_4; }
	inline MemberFilter_t426314064 ** get_address_of_FilterAttribute_4() { return &___FilterAttribute_4; }
	inline void set_FilterAttribute_4(MemberFilter_t426314064 * value)
	{
		___FilterAttribute_4 = value;
		Il2CppCodeGenWriteBarrier((&___FilterAttribute_4), value);
	}

	inline static int32_t get_offset_of_FilterName_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_5)); }
	inline MemberFilter_t426314064 * get_FilterName_5() const { return ___FilterName_5; }
	inline MemberFilter_t426314064 ** get_address_of_FilterName_5() { return &___FilterName_5; }
	inline void set_FilterName_5(MemberFilter_t426314064 * value)
	{
		___FilterName_5 = value;
		Il2CppCodeGenWriteBarrier((&___FilterName_5), value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_6)); }
	inline MemberFilter_t426314064 * get_FilterNameIgnoreCase_6() const { return ___FilterNameIgnoreCase_6; }
	inline MemberFilter_t426314064 ** get_address_of_FilterNameIgnoreCase_6() { return &___FilterNameIgnoreCase_6; }
	inline void set_FilterNameIgnoreCase_6(MemberFilter_t426314064 * value)
	{
		___FilterNameIgnoreCase_6 = value;
		Il2CppCodeGenWriteBarrier((&___FilterNameIgnoreCase_6), value);
	}

	inline static int32_t get_offset_of_Missing_7() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_7)); }
	inline RuntimeObject * get_Missing_7() const { return ___Missing_7; }
	inline RuntimeObject ** get_address_of_Missing_7() { return &___Missing_7; }
	inline void set_Missing_7(RuntimeObject * value)
	{
		___Missing_7 = value;
		Il2CppCodeGenWriteBarrier((&___Missing_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPE_T_H
#ifndef ARGUMENTOUTOFRANGEEXCEPTION_T777629997_H
#define ARGUMENTOUTOFRANGEEXCEPTION_T777629997_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentOutOfRangeException
struct  ArgumentOutOfRangeException_t777629997  : public ArgumentException_t132251570
{
public:
	// System.Object System.ArgumentOutOfRangeException::actual_value
	RuntimeObject * ___actual_value_13;

public:
	inline static int32_t get_offset_of_actual_value_13() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_t777629997, ___actual_value_13)); }
	inline RuntimeObject * get_actual_value_13() const { return ___actual_value_13; }
	inline RuntimeObject ** get_address_of_actual_value_13() { return &___actual_value_13; }
	inline void set_actual_value_13(RuntimeObject * value)
	{
		___actual_value_13 = value;
		Il2CppCodeGenWriteBarrier((&___actual_value_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTOUTOFRANGEEXCEPTION_T777629997_H
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
#ifndef ARGUMENTNULLEXCEPTION_T1615371798_H
#define ARGUMENTNULLEXCEPTION_T1615371798_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentNullException
struct  ArgumentNullException_t1615371798  : public ArgumentException_t132251570
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTNULLEXCEPTION_T1615371798_H
#ifndef STREAMINGCONTEXT_T3711869237_H
#define STREAMINGCONTEXT_T3711869237_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.StreamingContext
struct  StreamingContext_t3711869237 
{
public:
	// System.Runtime.Serialization.StreamingContextStates System.Runtime.Serialization.StreamingContext::state
	int32_t ___state_0;
	// System.Object System.Runtime.Serialization.StreamingContext::additional
	RuntimeObject * ___additional_1;

public:
	inline static int32_t get_offset_of_state_0() { return static_cast<int32_t>(offsetof(StreamingContext_t3711869237, ___state_0)); }
	inline int32_t get_state_0() const { return ___state_0; }
	inline int32_t* get_address_of_state_0() { return &___state_0; }
	inline void set_state_0(int32_t value)
	{
		___state_0 = value;
	}

	inline static int32_t get_offset_of_additional_1() { return static_cast<int32_t>(offsetof(StreamingContext_t3711869237, ___additional_1)); }
	inline RuntimeObject * get_additional_1() const { return ___additional_1; }
	inline RuntimeObject ** get_address_of_additional_1() { return &___additional_1; }
	inline void set_additional_1(RuntimeObject * value)
	{
		___additional_1 = value;
		Il2CppCodeGenWriteBarrier((&___additional_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t3711869237_marshaled_pinvoke
{
	int32_t ___state_0;
	Il2CppIUnknown* ___additional_1;
};
// Native definition for COM marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t3711869237_marshaled_com
{
	int32_t ___state_0;
	Il2CppIUnknown* ___additional_1;
};
#endif // STREAMINGCONTEXT_T3711869237_H
#ifndef MODULE_T2987026101_H
#define MODULE_T2987026101_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Module
struct  Module_t2987026101  : public RuntimeObject
{
public:
	// System.IntPtr System.Reflection.Module::_impl
	intptr_t ____impl_3;
	// System.Reflection.Assembly System.Reflection.Module::assembly
	Assembly_t * ___assembly_4;
	// System.String System.Reflection.Module::fqname
	String_t* ___fqname_5;
	// System.String System.Reflection.Module::name
	String_t* ___name_6;
	// System.String System.Reflection.Module::scopename
	String_t* ___scopename_7;
	// System.Boolean System.Reflection.Module::is_resource
	bool ___is_resource_8;
	// System.Int32 System.Reflection.Module::token
	int32_t ___token_9;

public:
	inline static int32_t get_offset_of__impl_3() { return static_cast<int32_t>(offsetof(Module_t2987026101, ____impl_3)); }
	inline intptr_t get__impl_3() const { return ____impl_3; }
	inline intptr_t* get_address_of__impl_3() { return &____impl_3; }
	inline void set__impl_3(intptr_t value)
	{
		____impl_3 = value;
	}

	inline static int32_t get_offset_of_assembly_4() { return static_cast<int32_t>(offsetof(Module_t2987026101, ___assembly_4)); }
	inline Assembly_t * get_assembly_4() const { return ___assembly_4; }
	inline Assembly_t ** get_address_of_assembly_4() { return &___assembly_4; }
	inline void set_assembly_4(Assembly_t * value)
	{
		___assembly_4 = value;
		Il2CppCodeGenWriteBarrier((&___assembly_4), value);
	}

	inline static int32_t get_offset_of_fqname_5() { return static_cast<int32_t>(offsetof(Module_t2987026101, ___fqname_5)); }
	inline String_t* get_fqname_5() const { return ___fqname_5; }
	inline String_t** get_address_of_fqname_5() { return &___fqname_5; }
	inline void set_fqname_5(String_t* value)
	{
		___fqname_5 = value;
		Il2CppCodeGenWriteBarrier((&___fqname_5), value);
	}

	inline static int32_t get_offset_of_name_6() { return static_cast<int32_t>(offsetof(Module_t2987026101, ___name_6)); }
	inline String_t* get_name_6() const { return ___name_6; }
	inline String_t** get_address_of_name_6() { return &___name_6; }
	inline void set_name_6(String_t* value)
	{
		___name_6 = value;
		Il2CppCodeGenWriteBarrier((&___name_6), value);
	}

	inline static int32_t get_offset_of_scopename_7() { return static_cast<int32_t>(offsetof(Module_t2987026101, ___scopename_7)); }
	inline String_t* get_scopename_7() const { return ___scopename_7; }
	inline String_t** get_address_of_scopename_7() { return &___scopename_7; }
	inline void set_scopename_7(String_t* value)
	{
		___scopename_7 = value;
		Il2CppCodeGenWriteBarrier((&___scopename_7), value);
	}

	inline static int32_t get_offset_of_is_resource_8() { return static_cast<int32_t>(offsetof(Module_t2987026101, ___is_resource_8)); }
	inline bool get_is_resource_8() const { return ___is_resource_8; }
	inline bool* get_address_of_is_resource_8() { return &___is_resource_8; }
	inline void set_is_resource_8(bool value)
	{
		___is_resource_8 = value;
	}

	inline static int32_t get_offset_of_token_9() { return static_cast<int32_t>(offsetof(Module_t2987026101, ___token_9)); }
	inline int32_t get_token_9() const { return ___token_9; }
	inline int32_t* get_address_of_token_9() { return &___token_9; }
	inline void set_token_9(int32_t value)
	{
		___token_9 = value;
	}
};

struct Module_t2987026101_StaticFields
{
public:
	// System.Reflection.TypeFilter System.Reflection.Module::FilterTypeName
	TypeFilter_t2356120900 * ___FilterTypeName_1;
	// System.Reflection.TypeFilter System.Reflection.Module::FilterTypeNameIgnoreCase
	TypeFilter_t2356120900 * ___FilterTypeNameIgnoreCase_2;

public:
	inline static int32_t get_offset_of_FilterTypeName_1() { return static_cast<int32_t>(offsetof(Module_t2987026101_StaticFields, ___FilterTypeName_1)); }
	inline TypeFilter_t2356120900 * get_FilterTypeName_1() const { return ___FilterTypeName_1; }
	inline TypeFilter_t2356120900 ** get_address_of_FilterTypeName_1() { return &___FilterTypeName_1; }
	inline void set_FilterTypeName_1(TypeFilter_t2356120900 * value)
	{
		___FilterTypeName_1 = value;
		Il2CppCodeGenWriteBarrier((&___FilterTypeName_1), value);
	}

	inline static int32_t get_offset_of_FilterTypeNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Module_t2987026101_StaticFields, ___FilterTypeNameIgnoreCase_2)); }
	inline TypeFilter_t2356120900 * get_FilterTypeNameIgnoreCase_2() const { return ___FilterTypeNameIgnoreCase_2; }
	inline TypeFilter_t2356120900 ** get_address_of_FilterTypeNameIgnoreCase_2() { return &___FilterTypeNameIgnoreCase_2; }
	inline void set_FilterTypeNameIgnoreCase_2(TypeFilter_t2356120900 * value)
	{
		___FilterTypeNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((&___FilterTypeNameIgnoreCase_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MODULE_T2987026101_H
#ifndef UNITYSERIALIZATIONHOLDER_T431912834_H
#define UNITYSERIALIZATIONHOLDER_T431912834_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UnitySerializationHolder
struct  UnitySerializationHolder_t431912834  : public RuntimeObject
{
public:
	// System.String System.UnitySerializationHolder::_data
	String_t* ____data_0;
	// System.UnitySerializationHolder/UnityType System.UnitySerializationHolder::_unityType
	uint8_t ____unityType_1;
	// System.String System.UnitySerializationHolder::_assemblyName
	String_t* ____assemblyName_2;

public:
	inline static int32_t get_offset_of__data_0() { return static_cast<int32_t>(offsetof(UnitySerializationHolder_t431912834, ____data_0)); }
	inline String_t* get__data_0() const { return ____data_0; }
	inline String_t** get_address_of__data_0() { return &____data_0; }
	inline void set__data_0(String_t* value)
	{
		____data_0 = value;
		Il2CppCodeGenWriteBarrier((&____data_0), value);
	}

	inline static int32_t get_offset_of__unityType_1() { return static_cast<int32_t>(offsetof(UnitySerializationHolder_t431912834, ____unityType_1)); }
	inline uint8_t get__unityType_1() const { return ____unityType_1; }
	inline uint8_t* get_address_of__unityType_1() { return &____unityType_1; }
	inline void set__unityType_1(uint8_t value)
	{
		____unityType_1 = value;
	}

	inline static int32_t get_offset_of__assemblyName_2() { return static_cast<int32_t>(offsetof(UnitySerializationHolder_t431912834, ____assemblyName_2)); }
	inline String_t* get__assemblyName_2() const { return ____assemblyName_2; }
	inline String_t** get_address_of__assemblyName_2() { return &____assemblyName_2; }
	inline void set__assemblyName_2(String_t* value)
	{
		____assemblyName_2 = value;
		Il2CppCodeGenWriteBarrier((&____assemblyName_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYSERIALIZATIONHOLDER_T431912834_H
#ifndef ASYNCCALLBACK_T3962456242_H
#define ASYNCCALLBACK_T3962456242_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AsyncCallback
struct  AsyncCallback_t3962456242  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCCALLBACK_T3962456242_H
#ifndef UNHANDLEDEXCEPTIONEVENTHANDLER_T3101989324_H
#define UNHANDLEDEXCEPTIONEVENTHANDLER_T3101989324_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UnhandledExceptionEventHandler
struct  UnhandledExceptionEventHandler_t3101989324  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNHANDLEDEXCEPTIONEVENTHANDLER_T3101989324_H
// System.Object[]
struct ObjectU5BU5D_t2843939325  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.String[]
struct StringU5BU5D_t1281789340  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Char[]
struct CharU5BU5D_t3528271667  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};



// System.Void System.UIntPtr::.ctor(System.UInt32)
extern "C"  void UIntPtr__ctor_m4250165422 (uintptr_t* __this, uint32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentNullException::.ctor(System.String)
extern "C"  void ArgumentNullException__ctor_m1170824041 (ArgumentNullException_t1615371798 * __this, String_t* ___paramName0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.UInt64)
extern "C"  void SerializationInfo_AddValue_m2020653395 (SerializationInfo_t950877179 * __this, String_t* ___name0, uint64_t ___value1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.UIntPtr::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void UIntPtr_System_Runtime_Serialization_ISerializable_GetObjectData_m1767630151 (uintptr_t* __this, SerializationInfo_t950877179 * ___info0, StreamingContext_t3711869237  ___context1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.UIntPtr::Equals(System.Object)
extern "C"  bool UIntPtr_Equals_m1316671746 (uintptr_t* __this, RuntimeObject * ___obj0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.UIntPtr::GetHashCode()
extern "C"  int32_t UIntPtr_GetHashCode_m3482152298 (uintptr_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.UInt32::ToString()
extern "C"  String_t* UInt32_ToString_m2574561716 (uint32_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.UIntPtr::ToString()
extern "C"  String_t* UIntPtr_ToString_m984583492 (uintptr_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String Locale::GetText(System.String)
extern "C"  String_t* Locale_GetText_m3374010885 (RuntimeObject * __this /* static, unused */, String_t* ___msg0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.SystemException::.ctor(System.String)
extern "C"  void SystemException__ctor_m3298527747 (SystemException_t176217640 * __this, String_t* ___message0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Exception::set_HResult(System.Int32)
extern "C"  void Exception_set_HResult_m3489164646 (Exception_t * __this, int32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.SystemException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void SystemException__ctor_m1515048899 (SystemException_t176217640 * __this, SerializationInfo_t950877179 * ___info0, StreamingContext_t3711869237  ___context1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.EventArgs::.ctor()
extern "C"  void EventArgs__ctor_m32674013 (EventArgs_t3591816995 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnhandledExceptionEventHandler::Invoke(System.Object,System.UnhandledExceptionEventArgs)
extern "C"  void UnhandledExceptionEventHandler_Invoke_m1545705626 (UnhandledExceptionEventHandler_t3101989324 * __this, RuntimeObject * ___sender0, UnhandledExceptionEventArgs_t2886101344 * ___e1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Object::.ctor()
extern "C"  void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Serialization.SerializationInfo::GetString(System.String)
extern "C"  String_t* SerializationInfo_GetString_m3155282843 (SerializationInfo_t950877179 * __this, String_t* ___name0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Runtime.Serialization.SerializationInfo::GetInt32(System.String)
extern "C"  int32_t SerializationInfo_GetInt32_m2640574809 (SerializationInfo_t950877179 * __this, String_t* ___name0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Object)
extern "C"  void SerializationInfo_AddValue_m2872281893 (SerializationInfo_t950877179 * __this, String_t* ___name0, RuntimeObject * ___value1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Int32)
extern "C"  void SerializationInfo_AddValue_m412754688 (SerializationInfo_t950877179 * __this, String_t* ___name0, int32_t ___value1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
extern "C"  Type_t * Type_GetTypeFromHandle_m1620074514 (RuntimeObject * __this /* static, unused */, RuntimeTypeHandle_t3027515415  ___handle0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.SerializationInfo::SetType(System.Type)
extern "C"  void SerializationInfo_SetType_m3923964808 (SerializationInfo_t950877179 * __this, Type_t * ___type0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Type System.Object::GetType()
extern "C"  Type_t * Object_GetType_m88164663 (RuntimeObject * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Module::get_ScopeName()
extern "C"  String_t* Module_get_ScopeName_m4152486041 (Module_t2987026101 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.Reflection.Module::get_Assembly()
extern "C"  Assembly_t * Module_get_Assembly_m2485063752 (Module_t2987026101 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.NotSupportedException::.ctor()
extern "C"  void NotSupportedException__ctor_m2730133172 (NotSupportedException_t1314879016 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.Reflection.Assembly::Load(System.String)
extern "C"  Assembly_t * Assembly_Load_m3487507613 (RuntimeObject * __this /* static, unused */, String_t* ___assemblyString0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Reflection.Assembly::GetModule(System.String)
extern "C"  Module_t2987026101 * Assembly_GetModule_m3867448062 (Assembly_t * __this, String_t* ___name0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.NotSupportedException::.ctor(System.String)
extern "C"  void NotSupportedException__ctor_m2494070935 (NotSupportedException_t1314879016 * __this, String_t* ___message0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ValueType::InternalEquals(System.Object,System.Object,System.Object[]&)
extern "C"  bool ValueType_InternalEquals_m1384040357 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___o10, RuntimeObject * ___o21, ObjectU5BU5D_t2843939325** ___fields2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ValueType::DefaultEquals(System.Object,System.Object)
extern "C"  bool ValueType_DefaultEquals_m2927252100 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___o10, RuntimeObject * ___o21, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.ValueType::InternalGetHashCode(System.Object,System.Object[]&)
extern "C"  int32_t ValueType_InternalGetHashCode_m58786863 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___o0, ObjectU5BU5D_t2843939325** ___fields1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Version::CheckedSet(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void Version_CheckedSet_m654078179 (Version_t3456873960 * __this, int32_t ___defined0, int32_t ___major1, int32_t ___minor2, int32_t ___build3, int32_t ___revision4, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String[] System.String::Split(System.Char[])
extern "C"  StringU5BU5D_t1281789340* String_Split_m3646115398 (String_t* __this, CharU5BU5D_t3528271667* ___separator0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentException::.ctor(System.String)
extern "C"  void ArgumentException__ctor_m1312628991 (ArgumentException_t132251570 * __this, String_t* ___message0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Int32::Parse(System.String)
extern "C"  int32_t Int32_Parse_m1033611559 (RuntimeObject * __this /* static, unused */, String_t* ___s0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String)
extern "C"  void ArgumentOutOfRangeException__ctor_m3628145864 (ArgumentOutOfRangeException_t777629997 * __this, String_t* ___paramName0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Version::.ctor(System.Int32,System.Int32)
extern "C"  void Version__ctor_m3537335798 (Version_t3456873960 * __this, int32_t ___major0, int32_t ___minor1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Version::.ctor(System.Int32,System.Int32,System.Int32)
extern "C"  void Version__ctor_m1550720073 (Version_t3456873960 * __this, int32_t ___major0, int32_t ___minor1, int32_t ___build2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Version::.ctor(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void Version__ctor_m417728625 (Version_t3456873960 * __this, int32_t ___major0, int32_t ___minor1, int32_t ___build2, int32_t ___revision3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Version::CompareTo(System.Version)
extern "C"  int32_t Version_CompareTo_m3146217210 (Version_t3456873960 * __this, Version_t3456873960 * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Version::Equals(System.Version)
extern "C"  bool Version_Equals_m1564427710 (Version_t3456873960 * __this, Version_t3456873960 * ___obj0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Version::op_Equality(System.Version,System.Version)
extern "C"  bool Version_op_Equality_m3804852517 (RuntimeObject * __this /* static, unused */, Version_t3456873960 * ___v10, Version_t3456873960 * ___v21, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Version::op_Inequality(System.Version,System.Version)
extern "C"  bool Version_op_Inequality_m1696193441 (RuntimeObject * __this /* static, unused */, Version_t3456873960 * ___v10, Version_t3456873960 * ___v21, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Int32::ToString()
extern "C"  String_t* Int32_ToString_m141394615 (int32_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String,System.String,System.String)
extern "C"  String_t* String_Concat_m3755062657 (RuntimeObject * __this /* static, unused */, String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Char System.String::get_Chars(System.Int32)
extern "C"  Il2CppChar String_get_Chars_m2986988803 (String_t* __this, int32_t ___index0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Char::IsDigit(System.Char)
extern "C"  bool Char_IsDigit_m3646673943 (RuntimeObject * __this /* static, unused */, Il2CppChar ___c0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::get_Length()
extern "C"  int32_t String_get_Length_m3847582255 (String_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Object::Equals(System.Object,System.Object)
extern "C"  bool Object_Equals_m1397037629 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___objA0, RuntimeObject * ___objB1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.WeakReference::.ctor(System.Object,System.Boolean)
extern "C"  void WeakReference__ctor_m1054065938 (WeakReference_t1334886716 * __this, RuntimeObject * ___target0, bool ___trackResurrection1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.WeakReference::AllocateHandle(System.Object)
extern "C"  void WeakReference_AllocateHandle_m1478975559 (WeakReference_t1334886716 * __this, RuntimeObject * ___target0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.SerializationInfo::GetBoolean(System.String)
extern "C"  bool SerializationInfo_GetBoolean_m1756153320 (SerializationInfo_t950877179 * __this, String_t* ___name0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Serialization.SerializationInfo::GetValue(System.String,System.Type)
extern "C"  RuntimeObject * SerializationInfo_GetValue_m42271953 (SerializationInfo_t950877179 * __this, String_t* ___name0, Type_t * ___type1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::Alloc(System.Object,System.Runtime.InteropServices.GCHandleType)
extern "C"  GCHandle_t3351438187  GCHandle_Alloc_m3823409740 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___value0, int32_t ___type1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.InteropServices.GCHandle::get_Target()
extern "C"  RuntimeObject * GCHandle_get_Target_m1824973883 (GCHandle_t3351438187 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.GCHandle::Free()
extern "C"  void GCHandle_Free_m1457699368 (GCHandle_t3351438187 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Object::Finalize()
extern "C"  void Object_Finalize_m3076187857 (RuntimeObject * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Boolean)
extern "C"  void SerializationInfo_AddValue_m3427199315 (SerializationInfo_t950877179 * __this, String_t* ___name0, bool ___value1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.UIntPtr::.ctor(System.UInt32)
extern "C"  void UIntPtr__ctor_m4250165422 (uintptr_t* __this, uint32_t ___value0, const RuntimeMethod* method)
{
	{
		uint32_t L_0 = ___value0;
		*__this = ((((uintptr_t)L_0)));
		return;
	}
}
extern "C"  void UIntPtr__ctor_m4250165422_AdjustorThunk (RuntimeObject * __this, uint32_t ___value0, const RuntimeMethod* method)
{
	uintptr_t* _thisAdjusted = reinterpret_cast<uintptr_t*>(__this + 1);
	UIntPtr__ctor_m4250165422(_thisAdjusted, ___value0, method);
}
// System.Void System.UIntPtr::.cctor()
extern "C"  void UIntPtr__cctor_m3513964473 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UIntPtr__cctor_m3513964473_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		uintptr_t L_0;
		memset(&L_0, 0, sizeof(L_0));
		UIntPtr__ctor_m4250165422((&L_0), 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.UIntPtr::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void UIntPtr_System_Runtime_Serialization_ISerializable_GetObjectData_m1767630151 (uintptr_t* __this, SerializationInfo_t950877179 * ___info0, StreamingContext_t3711869237  ___context1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UIntPtr_System_Runtime_Serialization_ISerializable_GetObjectData_m1767630151_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SerializationInfo_t950877179 * L_0 = ___info0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral79347, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, UIntPtr_System_Runtime_Serialization_ISerializable_GetObjectData_m1767630151_RuntimeMethod_var);
	}

IL_0011:
	{
		SerializationInfo_t950877179 * L_2 = ___info0;
		uintptr_t L_3 = *__this;
		NullCheck(L_2);
		SerializationInfo_AddValue_m2020653395(L_2, _stringLiteral1363226343, (((int64_t)((uint64_t)L_3))), /*hidden argument*/NULL);
		return;
	}
}
extern "C"  void UIntPtr_System_Runtime_Serialization_ISerializable_GetObjectData_m1767630151_AdjustorThunk (RuntimeObject * __this, SerializationInfo_t950877179 * ___info0, StreamingContext_t3711869237  ___context1, const RuntimeMethod* method)
{
	uintptr_t* _thisAdjusted = reinterpret_cast<uintptr_t*>(__this + 1);
	UIntPtr_System_Runtime_Serialization_ISerializable_GetObjectData_m1767630151(_thisAdjusted, ___info0, ___context1, method);
}
// System.Boolean System.UIntPtr::Equals(System.Object)
extern "C"  bool UIntPtr_Equals_m1316671746 (uintptr_t* __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UIntPtr_Equals_m1316671746_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uintptr_t V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___obj0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, UIntPtr_t_il2cpp_TypeInfo_var)))
		{
			goto IL_0022;
		}
	}
	{
		RuntimeObject * L_1 = ___obj0;
		V_0 = ((*(uintptr_t*)((uintptr_t*)UnBox(L_1, UIntPtr_t_il2cpp_TypeInfo_var))));
		uintptr_t L_2 = *__this;
		uintptr_t L_3 = V_0;
		return (bool)((((intptr_t)L_2) == ((intptr_t)L_3))? 1 : 0);
	}

IL_0022:
	{
		return (bool)0;
	}
}
extern "C"  bool UIntPtr_Equals_m1316671746_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	uintptr_t* _thisAdjusted = reinterpret_cast<uintptr_t*>(__this + 1);
	return UIntPtr_Equals_m1316671746(_thisAdjusted, ___obj0, method);
}
// System.Int32 System.UIntPtr::GetHashCode()
extern "C"  int32_t UIntPtr_GetHashCode_m3482152298 (uintptr_t* __this, const RuntimeMethod* method)
{
	{
		uintptr_t L_0 = *__this;
		return (((int32_t)((int32_t)L_0)));
	}
}
extern "C"  int32_t UIntPtr_GetHashCode_m3482152298_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	uintptr_t* _thisAdjusted = reinterpret_cast<uintptr_t*>(__this + 1);
	return UIntPtr_GetHashCode_m3482152298(_thisAdjusted, method);
}
// System.String System.UIntPtr::ToString()
extern "C"  String_t* UIntPtr_ToString_m984583492 (uintptr_t* __this, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	{
		uintptr_t L_0 = *__this;
		V_0 = (((int32_t)((uint32_t)L_0)));
		String_t* L_1 = UInt32_ToString_m2574561716((uint32_t*)(&V_0), /*hidden argument*/NULL);
		return L_1;
	}
}
extern "C"  String_t* UIntPtr_ToString_m984583492_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	uintptr_t* _thisAdjusted = reinterpret_cast<uintptr_t*>(__this + 1);
	return UIntPtr_ToString_m984583492(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.UnauthorizedAccessException::.ctor()
extern "C"  void UnauthorizedAccessException__ctor_m246605039 (UnauthorizedAccessException_t490705335 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnauthorizedAccessException__ctor_m246605039_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = Locale_GetText_m3374010885(NULL /*static, unused*/, _stringLiteral563158065, /*hidden argument*/NULL);
		SystemException__ctor_m3298527747(__this, L_0, /*hidden argument*/NULL);
		Exception_set_HResult_m3489164646(__this, ((int32_t)-2146233088), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.UnauthorizedAccessException::.ctor(System.String)
extern "C"  void UnauthorizedAccessException__ctor_m40101894 (UnauthorizedAccessException_t490705335 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___message0;
		SystemException__ctor_m3298527747(__this, L_0, /*hidden argument*/NULL);
		Exception_set_HResult_m3489164646(__this, ((int32_t)-2146233088), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.UnauthorizedAccessException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void UnauthorizedAccessException__ctor_m1652256089 (UnauthorizedAccessException_t490705335 * __this, SerializationInfo_t950877179 * ___info0, StreamingContext_t3711869237  ___context1, const RuntimeMethod* method)
{
	{
		SerializationInfo_t950877179 * L_0 = ___info0;
		StreamingContext_t3711869237  L_1 = ___context1;
		SystemException__ctor_m1515048899(__this, L_0, L_1, /*hidden argument*/NULL);
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
// System.Void System.UnhandledExceptionEventArgs::.ctor(System.Object,System.Boolean)
extern "C"  void UnhandledExceptionEventArgs__ctor_m224348470 (UnhandledExceptionEventArgs_t2886101344 * __this, RuntimeObject * ___exception0, bool ___isTerminating1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnhandledExceptionEventArgs__ctor_m224348470_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_t3591816995_il2cpp_TypeInfo_var);
		EventArgs__ctor_m32674013(__this, /*hidden argument*/NULL);
		RuntimeObject * L_0 = ___exception0;
		__this->set_exception_1(L_0);
		bool L_1 = ___isTerminating1;
		__this->set_m_isTerminating_2(L_1);
		return;
	}
}
// System.Object System.UnhandledExceptionEventArgs::get_ExceptionObject()
extern "C"  RuntimeObject * UnhandledExceptionEventArgs_get_ExceptionObject_m862578480 (UnhandledExceptionEventArgs_t2886101344 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_exception_1();
		return L_0;
	}
}
// System.Boolean System.UnhandledExceptionEventArgs::get_IsTerminating()
extern "C"  bool UnhandledExceptionEventArgs_get_IsTerminating_m4073714616 (UnhandledExceptionEventArgs_t2886101344 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_m_isTerminating_2();
		return L_0;
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
// System.Void System.UnhandledExceptionEventHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void UnhandledExceptionEventHandler__ctor_m626016213 (UnhandledExceptionEventHandler_t3101989324 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void System.UnhandledExceptionEventHandler::Invoke(System.Object,System.UnhandledExceptionEventArgs)
extern "C"  void UnhandledExceptionEventHandler_Invoke_m1545705626 (UnhandledExceptionEventHandler_t3101989324 * __this, RuntimeObject * ___sender0, UnhandledExceptionEventArgs_t2886101344 * ___e1, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		UnhandledExceptionEventHandler_Invoke_m1545705626((UnhandledExceptionEventHandler_t3101989324 *)__this->get_prev_9(), ___sender0, ___e1, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, UnhandledExceptionEventArgs_t2886101344 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___sender0, ___e1, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, RuntimeObject *, UnhandledExceptionEventArgs_t2886101344 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___sender0, ___e1, targetMethod);
			}
		}
	}
	else
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< RuntimeObject *, UnhandledExceptionEventArgs_t2886101344 * >::Invoke(targetMethod, targetThis, ___sender0, ___e1);
					else
						GenericVirtActionInvoker2< RuntimeObject *, UnhandledExceptionEventArgs_t2886101344 * >::Invoke(targetMethod, targetThis, ___sender0, ___e1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< RuntimeObject *, UnhandledExceptionEventArgs_t2886101344 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___sender0, ___e1);
					else
						VirtActionInvoker2< RuntimeObject *, UnhandledExceptionEventArgs_t2886101344 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___sender0, ___e1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, RuntimeObject *, UnhandledExceptionEventArgs_t2886101344 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___sender0, ___e1, targetMethod);
			}
		}
		else
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< UnhandledExceptionEventArgs_t2886101344 * >::Invoke(targetMethod, ___sender0, ___e1);
					else
						GenericVirtActionInvoker1< UnhandledExceptionEventArgs_t2886101344 * >::Invoke(targetMethod, ___sender0, ___e1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< UnhandledExceptionEventArgs_t2886101344 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___sender0, ___e1);
					else
						VirtActionInvoker1< UnhandledExceptionEventArgs_t2886101344 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___sender0, ___e1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, UnhandledExceptionEventArgs_t2886101344 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___sender0, ___e1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult System.UnhandledExceptionEventHandler::BeginInvoke(System.Object,System.UnhandledExceptionEventArgs,System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* UnhandledExceptionEventHandler_BeginInvoke_m1761611550 (UnhandledExceptionEventHandler_t3101989324 * __this, RuntimeObject * ___sender0, UnhandledExceptionEventArgs_t2886101344 * ___e1, AsyncCallback_t3962456242 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___sender0;
	__d_args[1] = ___e1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void System.UnhandledExceptionEventHandler::EndInvoke(System.IAsyncResult)
extern "C"  void UnhandledExceptionEventHandler_EndInvoke_m2316153791 (UnhandledExceptionEventHandler_t3101989324 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.UnitySerializationHolder::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void UnitySerializationHolder__ctor_m3869442095 (UnitySerializationHolder_t431912834 * __this, SerializationInfo_t950877179 * ___info0, StreamingContext_t3711869237  ___ctx1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnitySerializationHolder__ctor_m3869442095_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		SerializationInfo_t950877179 * L_0 = ___info0;
		NullCheck(L_0);
		String_t* L_1 = SerializationInfo_GetString_m3155282843(L_0, _stringLiteral2037252898, /*hidden argument*/NULL);
		__this->set__data_0(L_1);
		SerializationInfo_t950877179 * L_2 = ___info0;
		NullCheck(L_2);
		int32_t L_3 = SerializationInfo_GetInt32_m2640574809(L_2, _stringLiteral3283586028, /*hidden argument*/NULL);
		__this->set__unityType_1((((int32_t)((uint8_t)L_3))));
		SerializationInfo_t950877179 * L_4 = ___info0;
		NullCheck(L_4);
		String_t* L_5 = SerializationInfo_GetString_m3155282843(L_4, _stringLiteral209558951, /*hidden argument*/NULL);
		__this->set__assemblyName_2(L_5);
		return;
	}
}
// System.Void System.UnitySerializationHolder::GetTypeData(System.Type,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void UnitySerializationHolder_GetTypeData_m2453779479 (RuntimeObject * __this /* static, unused */, Type_t * ___instance0, SerializationInfo_t950877179 * ___info1, StreamingContext_t3711869237  ___ctx2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnitySerializationHolder_GetTypeData_m2453779479_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SerializationInfo_t950877179 * L_0 = ___info1;
		Type_t * L_1 = ___instance0;
		NullCheck(L_1);
		String_t* L_2 = VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, L_1);
		NullCheck(L_0);
		SerializationInfo_AddValue_m2872281893(L_0, _stringLiteral2037252898, L_2, /*hidden argument*/NULL);
		SerializationInfo_t950877179 * L_3 = ___info1;
		NullCheck(L_3);
		SerializationInfo_AddValue_m412754688(L_3, _stringLiteral3283586028, 4, /*hidden argument*/NULL);
		SerializationInfo_t950877179 * L_4 = ___info1;
		Type_t * L_5 = ___instance0;
		NullCheck(L_5);
		Assembly_t * L_6 = VirtFuncInvoker0< Assembly_t * >::Invoke(14 /* System.Reflection.Assembly System.Type::get_Assembly() */, L_5);
		NullCheck(L_6);
		String_t* L_7 = VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Reflection.Assembly::get_FullName() */, L_6);
		NullCheck(L_4);
		SerializationInfo_AddValue_m2872281893(L_4, _stringLiteral209558951, L_7, /*hidden argument*/NULL);
		SerializationInfo_t950877179 * L_8 = ___info1;
		RuntimeTypeHandle_t3027515415  L_9 = { reinterpret_cast<intptr_t> (UnitySerializationHolder_t431912834_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_10 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		NullCheck(L_8);
		SerializationInfo_SetType_m3923964808(L_8, L_10, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.UnitySerializationHolder::GetDBNullData(System.DBNull,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void UnitySerializationHolder_GetDBNullData_m714211970 (RuntimeObject * __this /* static, unused */, DBNull_t3725197148 * ___instance0, SerializationInfo_t950877179 * ___info1, StreamingContext_t3711869237  ___ctx2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnitySerializationHolder_GetDBNullData_m714211970_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SerializationInfo_t950877179 * L_0 = ___info1;
		NullCheck(L_0);
		SerializationInfo_AddValue_m2872281893(L_0, _stringLiteral2037252898, NULL, /*hidden argument*/NULL);
		SerializationInfo_t950877179 * L_1 = ___info1;
		NullCheck(L_1);
		SerializationInfo_AddValue_m412754688(L_1, _stringLiteral3283586028, 2, /*hidden argument*/NULL);
		SerializationInfo_t950877179 * L_2 = ___info1;
		DBNull_t3725197148 * L_3 = ___instance0;
		NullCheck(L_3);
		Type_t * L_4 = Object_GetType_m88164663(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		Assembly_t * L_5 = VirtFuncInvoker0< Assembly_t * >::Invoke(14 /* System.Reflection.Assembly System.Type::get_Assembly() */, L_4);
		NullCheck(L_5);
		String_t* L_6 = VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Reflection.Assembly::get_FullName() */, L_5);
		NullCheck(L_2);
		SerializationInfo_AddValue_m2872281893(L_2, _stringLiteral209558951, L_6, /*hidden argument*/NULL);
		SerializationInfo_t950877179 * L_7 = ___info1;
		RuntimeTypeHandle_t3027515415  L_8 = { reinterpret_cast<intptr_t> (UnitySerializationHolder_t431912834_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_9 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		NullCheck(L_7);
		SerializationInfo_SetType_m3923964808(L_7, L_9, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.UnitySerializationHolder::GetModuleData(System.Reflection.Module,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void UnitySerializationHolder_GetModuleData_m1550266881 (RuntimeObject * __this /* static, unused */, Module_t2987026101 * ___instance0, SerializationInfo_t950877179 * ___info1, StreamingContext_t3711869237  ___ctx2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnitySerializationHolder_GetModuleData_m1550266881_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SerializationInfo_t950877179 * L_0 = ___info1;
		Module_t2987026101 * L_1 = ___instance0;
		NullCheck(L_1);
		String_t* L_2 = Module_get_ScopeName_m4152486041(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		SerializationInfo_AddValue_m2872281893(L_0, _stringLiteral2037252898, L_2, /*hidden argument*/NULL);
		SerializationInfo_t950877179 * L_3 = ___info1;
		NullCheck(L_3);
		SerializationInfo_AddValue_m412754688(L_3, _stringLiteral3283586028, 5, /*hidden argument*/NULL);
		SerializationInfo_t950877179 * L_4 = ___info1;
		Module_t2987026101 * L_5 = ___instance0;
		NullCheck(L_5);
		Assembly_t * L_6 = Module_get_Assembly_m2485063752(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		String_t* L_7 = VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Reflection.Assembly::get_FullName() */, L_6);
		NullCheck(L_4);
		SerializationInfo_AddValue_m2872281893(L_4, _stringLiteral209558951, L_7, /*hidden argument*/NULL);
		SerializationInfo_t950877179 * L_8 = ___info1;
		RuntimeTypeHandle_t3027515415  L_9 = { reinterpret_cast<intptr_t> (UnitySerializationHolder_t431912834_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_10 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		NullCheck(L_8);
		SerializationInfo_SetType_m3923964808(L_8, L_10, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.UnitySerializationHolder::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void UnitySerializationHolder_GetObjectData_m3377455907 (UnitySerializationHolder_t431912834 * __this, SerializationInfo_t950877179 * ___info0, StreamingContext_t3711869237  ___context1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnitySerializationHolder_GetObjectData_m3377455907_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, UnitySerializationHolder_GetObjectData_m3377455907_RuntimeMethod_var);
	}
}
// System.Object System.UnitySerializationHolder::GetRealObject(System.Runtime.Serialization.StreamingContext)
extern "C"  RuntimeObject * UnitySerializationHolder_GetRealObject_m1624354633 (UnitySerializationHolder_t431912834 * __this, StreamingContext_t3711869237  ___context0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnitySerializationHolder_GetRealObject_m1624354633_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Assembly_t * V_0 = NULL;
	Assembly_t * V_1 = NULL;
	uint8_t V_2 = 0;
	{
		uint8_t L_0 = __this->get__unityType_1();
		V_2 = L_0;
		uint8_t L_1 = V_2;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)2)))
		{
			case 0:
			{
				goto IL_0041;
			}
			case 1:
			{
				goto IL_006c;
			}
			case 2:
			{
				goto IL_0028;
			}
			case 3:
			{
				goto IL_0047;
			}
			case 4:
			{
				goto IL_0060;
			}
		}
	}
	{
		goto IL_006c;
	}

IL_0028:
	{
		String_t* L_2 = __this->get__assemblyName_2();
		Assembly_t * L_3 = Assembly_Load_m3487507613(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		Assembly_t * L_4 = V_0;
		String_t* L_5 = __this->get__data_0();
		NullCheck(L_4);
		Type_t * L_6 = VirtFuncInvoker1< Type_t *, String_t* >::Invoke(13 /* System.Type System.Reflection.Assembly::GetType(System.String) */, L_4, L_5);
		return L_6;
	}

IL_0041:
	{
		IL2CPP_RUNTIME_CLASS_INIT(DBNull_t3725197148_il2cpp_TypeInfo_var);
		DBNull_t3725197148 * L_7 = ((DBNull_t3725197148_StaticFields*)il2cpp_codegen_static_fields_for(DBNull_t3725197148_il2cpp_TypeInfo_var))->get_Value_0();
		return L_7;
	}

IL_0047:
	{
		String_t* L_8 = __this->get__assemblyName_2();
		Assembly_t * L_9 = Assembly_Load_m3487507613(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		Assembly_t * L_10 = V_1;
		String_t* L_11 = __this->get__data_0();
		NullCheck(L_10);
		Module_t2987026101 * L_12 = Assembly_GetModule_m3867448062(L_10, L_11, /*hidden argument*/NULL);
		return L_12;
	}

IL_0060:
	{
		String_t* L_13 = __this->get__data_0();
		Assembly_t * L_14 = Assembly_Load_m3487507613(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		return L_14;
	}

IL_006c:
	{
		String_t* L_15 = Locale_GetText_m3374010885(NULL /*static, unused*/, _stringLiteral553700296, /*hidden argument*/NULL);
		NotSupportedException_t1314879016 * L_16 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2494070935(L_16, L_15, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, NULL, UnitySerializationHolder_GetRealObject_m1624354633_RuntimeMethod_var);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: System.ValueType
extern "C" void ValueType_t3640485471_marshal_pinvoke(const ValueType_t3640485471& unmarshaled, ValueType_t3640485471_marshaled_pinvoke& marshaled)
{
}
extern "C" void ValueType_t3640485471_marshal_pinvoke_back(const ValueType_t3640485471_marshaled_pinvoke& marshaled, ValueType_t3640485471& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: System.ValueType
extern "C" void ValueType_t3640485471_marshal_pinvoke_cleanup(ValueType_t3640485471_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: System.ValueType
extern "C" void ValueType_t3640485471_marshal_com(const ValueType_t3640485471& unmarshaled, ValueType_t3640485471_marshaled_com& marshaled)
{
}
extern "C" void ValueType_t3640485471_marshal_com_back(const ValueType_t3640485471_marshaled_com& marshaled, ValueType_t3640485471& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: System.ValueType
extern "C" void ValueType_t3640485471_marshal_com_cleanup(ValueType_t3640485471_marshaled_com& marshaled)
{
}
// System.Void System.ValueType::.ctor()
extern "C"  void ValueType__ctor_m2036258423 (RuntimeObject * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean System.ValueType::InternalEquals(System.Object,System.Object,System.Object[]&)
extern "C"  bool ValueType_InternalEquals_m1384040357 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___o10, RuntimeObject * ___o21, ObjectU5BU5D_t2843939325** ___fields2, const RuntimeMethod* method)
{
	typedef bool (*ValueType_InternalEquals_m1384040357_ftn) (RuntimeObject *, RuntimeObject *, ObjectU5BU5D_t2843939325**);
	using namespace il2cpp::icalls;
	return  ((ValueType_InternalEquals_m1384040357_ftn)mscorlib::System::ValueType::InternalEquals) (___o10, ___o21, ___fields2);
}
// System.Boolean System.ValueType::DefaultEquals(System.Object,System.Object)
extern "C"  bool ValueType_DefaultEquals_m2927252100 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___o10, RuntimeObject * ___o21, const RuntimeMethod* method)
{
	ObjectU5BU5D_t2843939325* V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	RuntimeObject * V_3 = NULL;
	RuntimeObject * V_4 = NULL;
	{
		RuntimeObject * L_0 = ___o21;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		return (bool)0;
	}

IL_0008:
	{
		RuntimeObject * L_1 = ___o10;
		RuntimeObject * L_2 = ___o21;
		bool L_3 = ValueType_InternalEquals_m1384040357(NULL /*static, unused*/, L_1, L_2, (ObjectU5BU5D_t2843939325**)(&V_0), /*hidden argument*/NULL);
		V_1 = L_3;
		ObjectU5BU5D_t2843939325* L_4 = V_0;
		if (L_4)
		{
			goto IL_001a;
		}
	}
	{
		bool L_5 = V_1;
		return L_5;
	}

IL_001a:
	{
		V_2 = 0;
		goto IL_0053;
	}

IL_0021:
	{
		ObjectU5BU5D_t2843939325* L_6 = V_0;
		int32_t L_7 = V_2;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		RuntimeObject * L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_3 = L_9;
		ObjectU5BU5D_t2843939325* L_10 = V_0;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		int32_t L_12 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
		RuntimeObject * L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_4 = L_13;
		RuntimeObject * L_14 = V_3;
		if (L_14)
		{
			goto IL_0040;
		}
	}
	{
		RuntimeObject * L_15 = V_4;
		if (L_15)
		{
			goto IL_003e;
		}
	}
	{
		goto IL_004f;
	}

IL_003e:
	{
		return (bool)0;
	}

IL_0040:
	{
		RuntimeObject * L_16 = V_3;
		RuntimeObject * L_17 = V_4;
		NullCheck(L_16);
		bool L_18 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_16, L_17);
		if (L_18)
		{
			goto IL_004f;
		}
	}
	{
		return (bool)0;
	}

IL_004f:
	{
		int32_t L_19 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)2));
	}

IL_0053:
	{
		int32_t L_20 = V_2;
		ObjectU5BU5D_t2843939325* L_21 = V_0;
		NullCheck(L_21);
		if ((((int32_t)L_20) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_21)->max_length)))))))
		{
			goto IL_0021;
		}
	}
	{
		return (bool)1;
	}
}
// System.Boolean System.ValueType::Equals(System.Object)
extern "C"  bool ValueType_Equals_m1524437845 (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___obj0;
		bool L_1 = ValueType_DefaultEquals_m2927252100(NULL /*static, unused*/, __this, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 System.ValueType::InternalGetHashCode(System.Object,System.Object[]&)
extern "C"  int32_t ValueType_InternalGetHashCode_m58786863 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___o0, ObjectU5BU5D_t2843939325** ___fields1, const RuntimeMethod* method)
{
	typedef int32_t (*ValueType_InternalGetHashCode_m58786863_ftn) (RuntimeObject *, ObjectU5BU5D_t2843939325**);
	using namespace il2cpp::icalls;
	return  ((ValueType_InternalGetHashCode_m58786863_ftn)mscorlib::System::ValueType::InternalGetHashCode) (___o0, ___fields1);
}
// System.Int32 System.ValueType::GetHashCode()
extern "C"  int32_t ValueType_GetHashCode_m715362416 (RuntimeObject * __this, const RuntimeMethod* method)
{
	ObjectU5BU5D_t2843939325* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ValueType_InternalGetHashCode_m58786863(NULL /*static, unused*/, __this, (ObjectU5BU5D_t2843939325**)(&V_0), /*hidden argument*/NULL);
		V_1 = L_0;
		ObjectU5BU5D_t2843939325* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0036;
		}
	}
	{
		V_2 = 0;
		goto IL_002d;
	}

IL_0016:
	{
		ObjectU5BU5D_t2843939325* L_2 = V_0;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		RuntimeObject * L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_6 = V_1;
		ObjectU5BU5D_t2843939325* L_7 = V_0;
		int32_t L_8 = V_2;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		RuntimeObject * L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_10);
		int32_t L_11 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_10);
		V_1 = ((int32_t)((int32_t)L_6^(int32_t)L_11));
	}

IL_0029:
	{
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_002d:
	{
		int32_t L_13 = V_2;
		ObjectU5BU5D_t2843939325* L_14 = V_0;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_14)->max_length)))))))
		{
			goto IL_0016;
		}
	}

IL_0036:
	{
		int32_t L_15 = V_1;
		return L_15;
	}
}
// System.String System.ValueType::ToString()
extern "C"  String_t* ValueType_ToString_m2292123621 (RuntimeObject * __this, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = Object_GetType_m88164663(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, L_0);
		return L_1;
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
// System.Void System.Version::.ctor()
extern "C"  void Version__ctor_m872301635 (Version_t3456873960 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		Version_CheckedSet_m654078179(__this, 2, 0, 0, (-1), (-1), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Version::.ctor(System.String)
extern "C"  void Version__ctor_m1394137037 (Version_t3456873960 * __this, String_t* ___version0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Version__ctor_m1394137037_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	StringU5BU5D_t1281789340* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		V_2 = (-1);
		V_3 = (-1);
		V_4 = (-1);
		V_5 = (-1);
		String_t* L_0 = ___version0;
		if (L_0)
		{
			goto IL_0021;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral1902401671, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, Version__ctor_m1394137037_RuntimeMethod_var);
	}

IL_0021:
	{
		String_t* L_2 = ___version0;
		CharU5BU5D_t3528271667* L_3 = ((CharU5BU5D_t3528271667*)SZArrayNew(CharU5BU5D_t3528271667_il2cpp_TypeInfo_var, (uint32_t)1));
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)46));
		NullCheck(L_2);
		StringU5BU5D_t1281789340* L_4 = String_Split_m3646115398(L_2, L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		StringU5BU5D_t1281789340* L_5 = V_1;
		NullCheck(L_5);
		V_0 = (((int32_t)((int32_t)(((RuntimeArray *)L_5)->max_length))));
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) < ((int32_t)2)))
		{
			goto IL_0045;
		}
	}
	{
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) <= ((int32_t)4)))
		{
			goto IL_0055;
		}
	}

IL_0045:
	{
		String_t* L_8 = Locale_GetText_m3374010885(NULL /*static, unused*/, _stringLiteral1532400954, /*hidden argument*/NULL);
		ArgumentException_t132251570 * L_9 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_9, L_8, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, NULL, Version__ctor_m1394137037_RuntimeMethod_var);
	}

IL_0055:
	{
		int32_t L_10 = V_0;
		if ((((int32_t)L_10) <= ((int32_t)0)))
		{
			goto IL_0065;
		}
	}
	{
		StringU5BU5D_t1281789340* L_11 = V_1;
		NullCheck(L_11);
		int32_t L_12 = 0;
		String_t* L_13 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		int32_t L_14 = Int32_Parse_m1033611559(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		V_2 = L_14;
	}

IL_0065:
	{
		int32_t L_15 = V_0;
		if ((((int32_t)L_15) <= ((int32_t)1)))
		{
			goto IL_0075;
		}
	}
	{
		StringU5BU5D_t1281789340* L_16 = V_1;
		NullCheck(L_16);
		int32_t L_17 = 1;
		String_t* L_18 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		int32_t L_19 = Int32_Parse_m1033611559(NULL /*static, unused*/, L_18, /*hidden argument*/NULL);
		V_3 = L_19;
	}

IL_0075:
	{
		int32_t L_20 = V_0;
		if ((((int32_t)L_20) <= ((int32_t)2)))
		{
			goto IL_0086;
		}
	}
	{
		StringU5BU5D_t1281789340* L_21 = V_1;
		NullCheck(L_21);
		int32_t L_22 = 2;
		String_t* L_23 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		int32_t L_24 = Int32_Parse_m1033611559(NULL /*static, unused*/, L_23, /*hidden argument*/NULL);
		V_4 = L_24;
	}

IL_0086:
	{
		int32_t L_25 = V_0;
		if ((((int32_t)L_25) <= ((int32_t)3)))
		{
			goto IL_0097;
		}
	}
	{
		StringU5BU5D_t1281789340* L_26 = V_1;
		NullCheck(L_26);
		int32_t L_27 = 3;
		String_t* L_28 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		int32_t L_29 = Int32_Parse_m1033611559(NULL /*static, unused*/, L_28, /*hidden argument*/NULL);
		V_5 = L_29;
	}

IL_0097:
	{
		int32_t L_30 = V_0;
		int32_t L_31 = V_2;
		int32_t L_32 = V_3;
		int32_t L_33 = V_4;
		int32_t L_34 = V_5;
		Version_CheckedSet_m654078179(__this, L_30, L_31, L_32, L_33, L_34, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Version::.ctor(System.Int32,System.Int32)
extern "C"  void Version__ctor_m3537335798 (Version_t3456873960 * __this, int32_t ___major0, int32_t ___minor1, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___major0;
		int32_t L_1 = ___minor1;
		Version_CheckedSet_m654078179(__this, 2, L_0, L_1, 0, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Version::.ctor(System.Int32,System.Int32,System.Int32)
extern "C"  void Version__ctor_m1550720073 (Version_t3456873960 * __this, int32_t ___major0, int32_t ___minor1, int32_t ___build2, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___major0;
		int32_t L_1 = ___minor1;
		int32_t L_2 = ___build2;
		Version_CheckedSet_m654078179(__this, 3, L_0, L_1, L_2, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Version::.ctor(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void Version__ctor_m417728625 (Version_t3456873960 * __this, int32_t ___major0, int32_t ___minor1, int32_t ___build2, int32_t ___revision3, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___major0;
		int32_t L_1 = ___minor1;
		int32_t L_2 = ___build2;
		int32_t L_3 = ___revision3;
		Version_CheckedSet_m654078179(__this, 4, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Version::CheckedSet(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void Version_CheckedSet_m654078179 (Version_t3456873960 * __this, int32_t ___defined0, int32_t ___major1, int32_t ___minor2, int32_t ___build3, int32_t ___revision4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Version_CheckedSet_m654078179_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___major1;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_1 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_1, _stringLiteral419133523, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, Version_CheckedSet_m654078179_RuntimeMethod_var);
	}

IL_0012:
	{
		int32_t L_2 = ___major1;
		__this->set__Major_1(L_2);
		int32_t L_3 = ___minor2;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_002b;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_4 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_4, _stringLiteral2762033855, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, NULL, Version_CheckedSet_m654078179_RuntimeMethod_var);
	}

IL_002b:
	{
		int32_t L_5 = ___minor2;
		__this->set__Minor_2(L_5);
		int32_t L_6 = ___defined0;
		if ((!(((uint32_t)L_6) == ((uint32_t)2))))
		{
			goto IL_0048;
		}
	}
	{
		__this->set__Build_3((-1));
		__this->set__Revision_4((-1));
		return;
	}

IL_0048:
	{
		int32_t L_7 = ___build3;
		if ((((int32_t)L_7) >= ((int32_t)0)))
		{
			goto IL_005b;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_8 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_8, _stringLiteral437191301, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, NULL, Version_CheckedSet_m654078179_RuntimeMethod_var);
	}

IL_005b:
	{
		int32_t L_9 = ___build3;
		__this->set__Build_3(L_9);
		int32_t L_10 = ___defined0;
		if ((!(((uint32_t)L_10) == ((uint32_t)3))))
		{
			goto IL_0072;
		}
	}
	{
		__this->set__Revision_4((-1));
		return;
	}

IL_0072:
	{
		int32_t L_11 = ___revision4;
		if ((((int32_t)L_11) >= ((int32_t)0)))
		{
			goto IL_0085;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_12 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_12, _stringLiteral3187820736, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, NULL, Version_CheckedSet_m654078179_RuntimeMethod_var);
	}

IL_0085:
	{
		int32_t L_13 = ___revision4;
		__this->set__Revision_4(L_13);
		return;
	}
}
// System.Int32 System.Version::get_Build()
extern "C"  int32_t Version_get_Build_m3667751407 (Version_t3456873960 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__Build_3();
		return L_0;
	}
}
// System.Int32 System.Version::get_Major()
extern "C"  int32_t Version_get_Major_m2457928275 (Version_t3456873960 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__Major_1();
		return L_0;
	}
}
// System.Int32 System.Version::get_Minor()
extern "C"  int32_t Version_get_Minor_m150536655 (Version_t3456873960 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__Minor_2();
		return L_0;
	}
}
// System.Int32 System.Version::get_Revision()
extern "C"  int32_t Version_get_Revision_m3982234017 (Version_t3456873960 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__Revision_4();
		return L_0;
	}
}
// System.Object System.Version::Clone()
extern "C"  RuntimeObject * Version_Clone_m1749041863 (Version_t3456873960 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Version_Clone_m1749041863_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->get__Build_3();
		if ((!(((uint32_t)L_0) == ((uint32_t)(-1)))))
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_1 = __this->get__Major_1();
		int32_t L_2 = __this->get__Minor_2();
		Version_t3456873960 * L_3 = (Version_t3456873960 *)il2cpp_codegen_object_new(Version_t3456873960_il2cpp_TypeInfo_var);
		Version__ctor_m3537335798(L_3, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}

IL_001e:
	{
		int32_t L_4 = __this->get__Revision_4();
		if ((!(((uint32_t)L_4) == ((uint32_t)(-1)))))
		{
			goto IL_0042;
		}
	}
	{
		int32_t L_5 = __this->get__Major_1();
		int32_t L_6 = __this->get__Minor_2();
		int32_t L_7 = __this->get__Build_3();
		Version_t3456873960 * L_8 = (Version_t3456873960 *)il2cpp_codegen_object_new(Version_t3456873960_il2cpp_TypeInfo_var);
		Version__ctor_m1550720073(L_8, L_5, L_6, L_7, /*hidden argument*/NULL);
		return L_8;
	}

IL_0042:
	{
		int32_t L_9 = __this->get__Major_1();
		int32_t L_10 = __this->get__Minor_2();
		int32_t L_11 = __this->get__Build_3();
		int32_t L_12 = __this->get__Revision_4();
		Version_t3456873960 * L_13 = (Version_t3456873960 *)il2cpp_codegen_object_new(Version_t3456873960_il2cpp_TypeInfo_var);
		Version__ctor_m417728625(L_13, L_9, L_10, L_11, L_12, /*hidden argument*/NULL);
		return L_13;
	}
}
// System.Int32 System.Version::CompareTo(System.Object)
extern "C"  int32_t Version_CompareTo_m1662919407 (Version_t3456873960 * __this, RuntimeObject * ___version0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Version_CompareTo_m1662919407_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___version0;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		return 1;
	}

IL_0008:
	{
		RuntimeObject * L_1 = ___version0;
		if (((Version_t3456873960 *)IsInstSealed((RuntimeObject*)L_1, Version_t3456873960_il2cpp_TypeInfo_var)))
		{
			goto IL_0023;
		}
	}
	{
		String_t* L_2 = Locale_GetText_m3374010885(NULL /*static, unused*/, _stringLiteral3512823065, /*hidden argument*/NULL);
		ArgumentException_t132251570 * L_3 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_3, L_2, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, Version_CompareTo_m1662919407_RuntimeMethod_var);
	}

IL_0023:
	{
		RuntimeObject * L_4 = ___version0;
		int32_t L_5 = Version_CompareTo_m3146217210(__this, ((Version_t3456873960 *)CastclassSealed((RuntimeObject*)L_4, Version_t3456873960_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Boolean System.Version::Equals(System.Object)
extern "C"  bool Version_Equals_m3073813696 (Version_t3456873960 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Version_Equals_m3073813696_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___obj0;
		bool L_1 = Version_Equals_m1564427710(__this, ((Version_t3456873960 *)IsInstSealed((RuntimeObject*)L_0, Version_t3456873960_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 System.Version::CompareTo(System.Version)
extern "C"  int32_t Version_CompareTo_m3146217210 (Version_t3456873960 * __this, Version_t3456873960 * ___value0, const RuntimeMethod* method)
{
	{
		Version_t3456873960 * L_0 = ___value0;
		bool L_1 = Version_op_Equality_m3804852517(NULL /*static, unused*/, L_0, (Version_t3456873960 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		return 1;
	}

IL_000e:
	{
		int32_t L_2 = __this->get__Major_1();
		Version_t3456873960 * L_3 = ___value0;
		NullCheck(L_3);
		int32_t L_4 = L_3->get__Major_1();
		if ((((int32_t)L_2) <= ((int32_t)L_4)))
		{
			goto IL_0021;
		}
	}
	{
		return 1;
	}

IL_0021:
	{
		int32_t L_5 = __this->get__Major_1();
		Version_t3456873960 * L_6 = ___value0;
		NullCheck(L_6);
		int32_t L_7 = L_6->get__Major_1();
		if ((((int32_t)L_5) >= ((int32_t)L_7)))
		{
			goto IL_0034;
		}
	}
	{
		return (-1);
	}

IL_0034:
	{
		int32_t L_8 = __this->get__Minor_2();
		Version_t3456873960 * L_9 = ___value0;
		NullCheck(L_9);
		int32_t L_10 = L_9->get__Minor_2();
		if ((((int32_t)L_8) <= ((int32_t)L_10)))
		{
			goto IL_0047;
		}
	}
	{
		return 1;
	}

IL_0047:
	{
		int32_t L_11 = __this->get__Minor_2();
		Version_t3456873960 * L_12 = ___value0;
		NullCheck(L_12);
		int32_t L_13 = L_12->get__Minor_2();
		if ((((int32_t)L_11) >= ((int32_t)L_13)))
		{
			goto IL_005a;
		}
	}
	{
		return (-1);
	}

IL_005a:
	{
		int32_t L_14 = __this->get__Build_3();
		Version_t3456873960 * L_15 = ___value0;
		NullCheck(L_15);
		int32_t L_16 = L_15->get__Build_3();
		if ((((int32_t)L_14) <= ((int32_t)L_16)))
		{
			goto IL_006d;
		}
	}
	{
		return 1;
	}

IL_006d:
	{
		int32_t L_17 = __this->get__Build_3();
		Version_t3456873960 * L_18 = ___value0;
		NullCheck(L_18);
		int32_t L_19 = L_18->get__Build_3();
		if ((((int32_t)L_17) >= ((int32_t)L_19)))
		{
			goto IL_0080;
		}
	}
	{
		return (-1);
	}

IL_0080:
	{
		int32_t L_20 = __this->get__Revision_4();
		Version_t3456873960 * L_21 = ___value0;
		NullCheck(L_21);
		int32_t L_22 = L_21->get__Revision_4();
		if ((((int32_t)L_20) <= ((int32_t)L_22)))
		{
			goto IL_0093;
		}
	}
	{
		return 1;
	}

IL_0093:
	{
		int32_t L_23 = __this->get__Revision_4();
		Version_t3456873960 * L_24 = ___value0;
		NullCheck(L_24);
		int32_t L_25 = L_24->get__Revision_4();
		if ((((int32_t)L_23) >= ((int32_t)L_25)))
		{
			goto IL_00a6;
		}
	}
	{
		return (-1);
	}

IL_00a6:
	{
		return 0;
	}
}
// System.Boolean System.Version::Equals(System.Version)
extern "C"  bool Version_Equals_m1564427710 (Version_t3456873960 * __this, Version_t3456873960 * ___obj0, const RuntimeMethod* method)
{
	int32_t G_B6_0 = 0;
	{
		Version_t3456873960 * L_0 = ___obj0;
		bool L_1 = Version_op_Inequality_m1696193441(NULL /*static, unused*/, L_0, (Version_t3456873960 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_004f;
		}
	}
	{
		Version_t3456873960 * L_2 = ___obj0;
		NullCheck(L_2);
		int32_t L_3 = L_2->get__Major_1();
		int32_t L_4 = __this->get__Major_1();
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_004f;
		}
	}
	{
		Version_t3456873960 * L_5 = ___obj0;
		NullCheck(L_5);
		int32_t L_6 = L_5->get__Minor_2();
		int32_t L_7 = __this->get__Minor_2();
		if ((!(((uint32_t)L_6) == ((uint32_t)L_7))))
		{
			goto IL_004f;
		}
	}
	{
		Version_t3456873960 * L_8 = ___obj0;
		NullCheck(L_8);
		int32_t L_9 = L_8->get__Build_3();
		int32_t L_10 = __this->get__Build_3();
		if ((!(((uint32_t)L_9) == ((uint32_t)L_10))))
		{
			goto IL_004f;
		}
	}
	{
		Version_t3456873960 * L_11 = ___obj0;
		NullCheck(L_11);
		int32_t L_12 = L_11->get__Revision_4();
		int32_t L_13 = __this->get__Revision_4();
		G_B6_0 = ((((int32_t)L_12) == ((int32_t)L_13))? 1 : 0);
		goto IL_0050;
	}

IL_004f:
	{
		G_B6_0 = 0;
	}

IL_0050:
	{
		return (bool)G_B6_0;
	}
}
// System.Int32 System.Version::GetHashCode()
extern "C"  int32_t Version_GetHashCode_m672974201 (Version_t3456873960 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__Revision_4();
		int32_t L_1 = __this->get__Build_3();
		int32_t L_2 = __this->get__Minor_2();
		int32_t L_3 = __this->get__Major_1();
		return ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_0<<(int32_t)((int32_t)24)))|(int32_t)((int32_t)((int32_t)L_1<<(int32_t)((int32_t)16)))))|(int32_t)((int32_t)((int32_t)L_2<<(int32_t)8))))|(int32_t)L_3));
	}
}
// System.String System.Version::ToString()
extern "C"  String_t* Version_ToString_m2279867705 (Version_t3456873960 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Version_ToString_m2279867705_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		int32_t* L_0 = __this->get_address_of__Major_1();
		String_t* L_1 = Int32_ToString_m141394615((int32_t*)L_0, /*hidden argument*/NULL);
		int32_t* L_2 = __this->get_address_of__Minor_2();
		String_t* L_3 = Int32_ToString_m141394615((int32_t*)L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Concat_m3755062657(NULL /*static, unused*/, L_1, _stringLiteral3452614530, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		int32_t L_5 = __this->get__Build_3();
		if ((((int32_t)L_5) == ((int32_t)(-1))))
		{
			goto IL_0044;
		}
	}
	{
		String_t* L_6 = V_0;
		int32_t* L_7 = __this->get_address_of__Build_3();
		String_t* L_8 = Int32_ToString_m141394615((int32_t*)L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_9 = String_Concat_m3755062657(NULL /*static, unused*/, L_6, _stringLiteral3452614530, L_8, /*hidden argument*/NULL);
		V_0 = L_9;
	}

IL_0044:
	{
		int32_t L_10 = __this->get__Revision_4();
		if ((((int32_t)L_10) == ((int32_t)(-1))))
		{
			goto IL_0067;
		}
	}
	{
		String_t* L_11 = V_0;
		int32_t* L_12 = __this->get_address_of__Revision_4();
		String_t* L_13 = Int32_ToString_m141394615((int32_t*)L_12, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_14 = String_Concat_m3755062657(NULL /*static, unused*/, L_11, _stringLiteral3452614530, L_13, /*hidden argument*/NULL);
		V_0 = L_14;
	}

IL_0067:
	{
		String_t* L_15 = V_0;
		return L_15;
	}
}
// System.Version System.Version::CreateFromString(System.String)
extern "C"  Version_t3456873960 * Version_CreateFromString_m719054818 (RuntimeObject * __this /* static, unused */, String_t* ___info0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Version_CreateFromString_m719054818_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	Il2CppChar V_7 = 0x0;
	int32_t V_8 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		V_2 = 0;
		V_3 = 0;
		V_4 = 1;
		V_5 = (-1);
		String_t* L_0 = ___info0;
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		Version_t3456873960 * L_1 = (Version_t3456873960 *)il2cpp_codegen_object_new(Version_t3456873960_il2cpp_TypeInfo_var);
		Version__ctor_m417728625(L_1, 0, 0, 0, 0, /*hidden argument*/NULL);
		return L_1;
	}

IL_001e:
	{
		V_6 = 0;
		goto IL_00c8;
	}

IL_0026:
	{
		String_t* L_2 = ___info0;
		int32_t L_3 = V_6;
		NullCheck(L_2);
		Il2CppChar L_4 = String_get_Chars_m2986988803(L_2, L_3, /*hidden argument*/NULL);
		V_7 = L_4;
		Il2CppChar L_5 = V_7;
		IL2CPP_RUNTIME_CLASS_INIT(Char_t3634460470_il2cpp_TypeInfo_var);
		bool L_6 = Char_IsDigit_m3646673943(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0062;
		}
	}
	{
		int32_t L_7 = V_5;
		if ((((int32_t)L_7) >= ((int32_t)0)))
		{
			goto IL_0050;
		}
	}
	{
		Il2CppChar L_8 = V_7;
		V_5 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)((int32_t)48)));
		goto IL_005d;
	}

IL_0050:
	{
		int32_t L_9 = V_5;
		Il2CppChar L_10 = V_7;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_9, (int32_t)((int32_t)10))), (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)((int32_t)48)))));
	}

IL_005d:
	{
		goto IL_00b5;
	}

IL_0062:
	{
		int32_t L_11 = V_5;
		if ((((int32_t)L_11) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		int32_t L_12 = V_4;
		V_8 = L_12;
		int32_t L_13 = V_8;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_13, (int32_t)1)))
		{
			case 0:
			{
				goto IL_008c;
			}
			case 1:
			{
				goto IL_0094;
			}
			case 2:
			{
				goto IL_009c;
			}
			case 3:
			{
				goto IL_00a4;
			}
		}
	}
	{
		goto IL_00ac;
	}

IL_008c:
	{
		int32_t L_14 = V_5;
		V_0 = L_14;
		goto IL_00ac;
	}

IL_0094:
	{
		int32_t L_15 = V_5;
		V_1 = L_15;
		goto IL_00ac;
	}

IL_009c:
	{
		int32_t L_16 = V_5;
		V_2 = L_16;
		goto IL_00ac;
	}

IL_00a4:
	{
		int32_t L_17 = V_5;
		V_3 = L_17;
		goto IL_00ac;
	}

IL_00ac:
	{
		V_5 = (-1);
		int32_t L_18 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
	}

IL_00b5:
	{
		int32_t L_19 = V_4;
		if ((!(((uint32_t)L_19) == ((uint32_t)5))))
		{
			goto IL_00c2;
		}
	}
	{
		goto IL_00d5;
	}

IL_00c2:
	{
		int32_t L_20 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
	}

IL_00c8:
	{
		int32_t L_21 = V_6;
		String_t* L_22 = ___info0;
		NullCheck(L_22);
		int32_t L_23 = String_get_Length_m3847582255(L_22, /*hidden argument*/NULL);
		if ((((int32_t)L_21) < ((int32_t)L_23)))
		{
			goto IL_0026;
		}
	}

IL_00d5:
	{
		int32_t L_24 = V_5;
		if ((((int32_t)L_24) < ((int32_t)0)))
		{
			goto IL_011f;
		}
	}
	{
		int32_t L_25 = V_4;
		V_8 = L_25;
		int32_t L_26 = V_8;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_26, (int32_t)1)))
		{
			case 0:
			{
				goto IL_00ff;
			}
			case 1:
			{
				goto IL_0107;
			}
			case 2:
			{
				goto IL_010f;
			}
			case 3:
			{
				goto IL_0117;
			}
		}
	}
	{
		goto IL_011f;
	}

IL_00ff:
	{
		int32_t L_27 = V_5;
		V_0 = L_27;
		goto IL_011f;
	}

IL_0107:
	{
		int32_t L_28 = V_5;
		V_1 = L_28;
		goto IL_011f;
	}

IL_010f:
	{
		int32_t L_29 = V_5;
		V_2 = L_29;
		goto IL_011f;
	}

IL_0117:
	{
		int32_t L_30 = V_5;
		V_3 = L_30;
		goto IL_011f;
	}

IL_011f:
	{
		int32_t L_31 = V_0;
		int32_t L_32 = V_1;
		int32_t L_33 = V_2;
		int32_t L_34 = V_3;
		Version_t3456873960 * L_35 = (Version_t3456873960 *)il2cpp_codegen_object_new(Version_t3456873960_il2cpp_TypeInfo_var);
		Version__ctor_m417728625(L_35, L_31, L_32, L_33, L_34, /*hidden argument*/NULL);
		return L_35;
	}
}
// System.Boolean System.Version::op_Equality(System.Version,System.Version)
extern "C"  bool Version_op_Equality_m3804852517 (RuntimeObject * __this /* static, unused */, Version_t3456873960 * ___v10, Version_t3456873960 * ___v21, const RuntimeMethod* method)
{
	{
		Version_t3456873960 * L_0 = ___v10;
		Version_t3456873960 * L_1 = ___v21;
		bool L_2 = Object_Equals_m1397037629(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean System.Version::op_Inequality(System.Version,System.Version)
extern "C"  bool Version_op_Inequality_m1696193441 (RuntimeObject * __this /* static, unused */, Version_t3456873960 * ___v10, Version_t3456873960 * ___v21, const RuntimeMethod* method)
{
	{
		Version_t3456873960 * L_0 = ___v10;
		Version_t3456873960 * L_1 = ___v21;
		bool L_2 = Object_Equals_m1397037629(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.WeakReference::.ctor()
extern "C"  void WeakReference__ctor_m24376735 (WeakReference_t1334886716 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.WeakReference::.ctor(System.Object)
extern "C"  void WeakReference__ctor_m2401547918 (WeakReference_t1334886716 * __this, RuntimeObject * ___target0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___target0;
		WeakReference__ctor_m1054065938(__this, L_0, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.WeakReference::.ctor(System.Object,System.Boolean)
extern "C"  void WeakReference__ctor_m1054065938 (WeakReference_t1334886716 * __this, RuntimeObject * ___target0, bool ___trackResurrection1, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		bool L_0 = ___trackResurrection1;
		__this->set_isLongReference_0(L_0);
		RuntimeObject * L_1 = ___target0;
		WeakReference_AllocateHandle_m1478975559(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.WeakReference::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void WeakReference__ctor_m1244067698 (WeakReference_t1334886716 * __this, SerializationInfo_t950877179 * ___info0, StreamingContext_t3711869237  ___context1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WeakReference__ctor_m1244067698_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		SerializationInfo_t950877179 * L_0 = ___info0;
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral79347, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, WeakReference__ctor_m1244067698_RuntimeMethod_var);
	}

IL_0017:
	{
		SerializationInfo_t950877179 * L_2 = ___info0;
		NullCheck(L_2);
		bool L_3 = SerializationInfo_GetBoolean_m1756153320(L_2, _stringLiteral3234942771, /*hidden argument*/NULL);
		__this->set_isLongReference_0(L_3);
		SerializationInfo_t950877179 * L_4 = ___info0;
		RuntimeTypeHandle_t3027515415  L_5 = { reinterpret_cast<intptr_t> (RuntimeObject_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_6 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		RuntimeObject * L_7 = SerializationInfo_GetValue_m42271953(L_4, _stringLiteral2922588279, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		RuntimeObject * L_8 = V_0;
		WeakReference_AllocateHandle_m1478975559(__this, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.WeakReference::AllocateHandle(System.Object)
extern "C"  void WeakReference_AllocateHandle_m1478975559 (WeakReference_t1334886716 * __this, RuntimeObject * ___target0, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_isLongReference_0();
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject * L_1 = ___target0;
		GCHandle_t3351438187  L_2 = GCHandle_Alloc_m3823409740(NULL /*static, unused*/, L_1, 1, /*hidden argument*/NULL);
		__this->set_gcHandle_1(L_2);
		goto IL_002a;
	}

IL_001d:
	{
		RuntimeObject * L_3 = ___target0;
		GCHandle_t3351438187  L_4 = GCHandle_Alloc_m3823409740(NULL /*static, unused*/, L_3, 0, /*hidden argument*/NULL);
		__this->set_gcHandle_1(L_4);
	}

IL_002a:
	{
		return;
	}
}
// System.Object System.WeakReference::get_Target()
extern "C"  RuntimeObject * WeakReference_get_Target_m168713953 (WeakReference_t1334886716 * __this, const RuntimeMethod* method)
{
	{
		GCHandle_t3351438187 * L_0 = __this->get_address_of_gcHandle_1();
		RuntimeObject * L_1 = GCHandle_get_Target_m1824973883((GCHandle_t3351438187 *)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean System.WeakReference::get_TrackResurrection()
extern "C"  bool WeakReference_get_TrackResurrection_m942701017 (WeakReference_t1334886716 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_isLongReference_0();
		return L_0;
	}
}
// System.Void System.WeakReference::Finalize()
extern "C"  void WeakReference_Finalize_m2841826116 (WeakReference_t1334886716 * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		GCHandle_t3351438187 * L_0 = __this->get_address_of_gcHandle_1();
		GCHandle_Free_m1457699368((GCHandle_t3351438187 *)L_0, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x17, FINALLY_0010);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0010;
	}

FINALLY_0010:
	{ // begin finally (depth: 1)
		Object_Finalize_m3076187857(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(16)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(16)
	{
		IL2CPP_JUMP_TBL(0x17, IL_0017)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0017:
	{
		return;
	}
}
// System.Void System.WeakReference::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void WeakReference_GetObjectData_m2192383095 (WeakReference_t1334886716 * __this, SerializationInfo_t950877179 * ___info0, StreamingContext_t3711869237  ___context1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WeakReference_GetObjectData_m2192383095_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		SerializationInfo_t950877179 * L_0 = ___info0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral79347, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, WeakReference_GetObjectData_m2192383095_RuntimeMethod_var);
	}

IL_0011:
	{
		SerializationInfo_t950877179 * L_2 = ___info0;
		bool L_3 = VirtFuncInvoker0< bool >::Invoke(6 /* System.Boolean System.WeakReference::get_TrackResurrection() */, __this);
		NullCheck(L_2);
		SerializationInfo_AddValue_m3427199315(L_2, _stringLiteral3234942771, L_3, /*hidden argument*/NULL);
	}

IL_0022:
	try
	{ // begin try (depth: 1)
		SerializationInfo_t950877179 * L_4 = ___info0;
		RuntimeObject * L_5 = VirtFuncInvoker0< RuntimeObject * >::Invoke(5 /* System.Object System.WeakReference::get_Target() */, __this);
		NullCheck(L_4);
		SerializationInfo_AddValue_m2872281893(L_4, _stringLiteral2922588279, L_5, /*hidden argument*/NULL);
		goto IL_004a;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0038;
		throw e;
	}

CATCH_0038:
	{ // begin catch(System.Exception)
		SerializationInfo_t950877179 * L_6 = ___info0;
		NullCheck(L_6);
		SerializationInfo_AddValue_m2872281893(L_6, _stringLiteral2922588279, NULL, /*hidden argument*/NULL);
		goto IL_004a;
	} // end catch (depth: 1)

IL_004a:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
