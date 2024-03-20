#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif




template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct VirtualActionInvoker1Invoker;
template <typename T1>
struct VirtualActionInvoker1Invoker<T1*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1* p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		void* params[1] = { p1 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[0]);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, params[0]);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct InvokerActionInvoker6;
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct InvokerActionInvoker6<T1*, T2, T3, T4, T5*, T6*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3, T4 p4, T5* p5, T6* p6)
	{
		void* params[6] = { p1, &p2, &p3, &p4, p5, p6 };
		method->invoker_method(methodPtr, method, obj, params, params[5]);
	}
};
template <typename R, typename T1>
struct InvokerFuncInvoker1;
template <typename R, typename T1>
struct InvokerFuncInvoker1<R, T1*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2;
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		R ret;
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename T1>
struct ConstrainedActionInvoker1;
template <typename T1>
struct ConstrainedActionInvoker1<T1*>
{
	static inline void Invoke (RuntimeClass* type, const RuntimeMethod* constrainedMethod, void* boxBuffer, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		il2cpp_codegen_runtime_constrained_call(type, constrainedMethod, boxBuffer, obj, params, params[0]);
	}
};

struct Action_1_tF0C1AFCCE9CE63382F43540DC0DA04A8939A8A53;
struct Action_1_tE55F8AC1EEC45D0C976E56B2950D65EC814C06E6;
struct Action_1_t996DFD52B4BDA6CBE8058C13167C4D2B8C612CAA;
struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
struct Dictionary_2_t5A7CE09F4D3EC74EEAE8DB41E209394AF6D9C99A;
struct DynamicArray_1_t401F46C0081DE185BCAB1D30DE8D6B6DC9AA6AFB;
struct DynamicArray_1_t7C64F5A74B7BA6F6B3589A766CADE3F59C6C7BCA;
struct Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F;
struct Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9;
struct Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821;
struct ITypeConstructor_1_t81670FEA206550EF92A986F4A63FC5302AB1D638;
struct ITypeConstructor_1_t3B0FE01881012CC548F6EE132D9D04AA93EDE092;
struct ITypeConstructor_1_t73C3366FF37ECFD1CC6142A80D1A0E31E89DDB04;
struct ITypeConstructor_1_t0FE2B73907C0A0AEB0E84716E021DD7420B23A2B;
struct ITypeConstructor_1_t5E4FD8D127EC0F24B375DF611109A9783C9949D0;
struct ITypeConstructor_1_tADCE5163310B602EB1878CA0050295BFB0F6B542;
struct ITypeConstructor_1_t5B814DBA70C191660AF27E38032998417073D7A2;
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
struct List_1_t602BCD639AA637A6C0BB45C136DD5458DBE18064;
struct List_1_tD19F7E0FCBD7C3E8D363733582EF93B341DD3039;
struct ReadOnlyCollection_1_tE414953665CCBE1BFF28E8E32C184621ADDA4B76;
struct ValueTuple_2U5BU5D_tE2E90A16702AA41094A74222F01C7F383CC57377;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct IRenderGraphResourceU5BU5D_tC72A5980774D8ACE9E681BE8A3FAB493A70BC2F3;
struct IVisualTreeUpdaterU5BU5D_t9E9D948BC4F327DA519FEB2BCEC12FB7FD7C59E8;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD;
struct VolumeComponentU5BU5D_t9623DFEA760C190B40486621A48932B26706D143;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263;
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
struct BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3;
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
struct ContextualMenuManager_tEE3B1F33FFFD180705467CA625AEBA0F5D63154B;
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct ElementUnderPointer_tB43AD64F79C6F06829D8B90318AF1A6BBE9C1904;
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
struct HierarchyEvent_tB23E4347BC47656A014CA104A5B1DDC172A2A705;
struct HttpListenerContext_tCD5824B5A03F644280D1F171203A2A03F7377412;
struct ICursorManager_t78B026DED2559C62810B21C54C5F882457073A8B;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IRenderGraphResource_tF24653A388C17849844C128C19C7A6599C7ADB7D;
struct IRenderGraphResourcePool_t8BF833F3C5D0BD8E45632CF923363EC782F4DDA8;
struct IVisualTreeUpdater_t4AF1E0B23A6AEFF024F1AC23815089B2495C7F06;
struct Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct MethodInfo_t;
struct NativeQueueBlockHeader_tD74DEA5A5D8C910AA5ED04C5E89F2FE1B0521004;
struct RepaintData_t90534752135661579EC254884F550545D001B5EA;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct String_t;
struct Type_t;
struct UIElementsBridge_tC28FCEDF493CD746D1973AB27BA2CBA393EB4BA8;
struct VisualTreeUpdater_tFDE7D9F9A146A26B2ED69565B7BD142B416AB9C9;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct VolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1;
struct VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72;
struct VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1;
struct VolumeStack_t5DE94743BDB63D97EF5587DBDAE46468233F36E8;
struct WebContext_t2A58FFA4CEB780A4B9F7FA93D5E0C0224F7F1339;
struct YogaConfig_tA7EBAFAD020EA5AB3104A2C25AB95CC7CE6FB3E2;
struct Expression_t24E9476A15D0D7F6495CF8292DA48C63C871E4B7;
struct RenderGraphResourcesData_tB2FF97B16A3E1DE700283778679C5CC0C39F4CFE;
struct ResourceCallback_t45358BA8AC82EF742271B868C50331854DD58EEC;
struct ITypeConstructor_tAEA6BC4B87F0F3739E4457F21908EF55F666EB08;
struct TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F;
struct UpdaterArray_tF8D43D2A3598E7C17ABB5308E83FDECF1F36A449;

IL2CPP_EXTERN_C RuntimeClass* Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExpressionEvaluator_tF912A1FA6CB7EA697DFA7926E78D808A446B48F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30;
IL2CPP_EXTERN_C String_t* _stringLiteral97B2D64205979E491CAA681CCAAE8EA55DD2AF0B;
IL2CPP_EXTERN_C const RuntimeMethod* Assert_IsNotNull_TisList_1_t602BCD639AA637A6C0BB45C136DD5458DBE18064_m6503DF58750A341F8B75EFD5120342F9F04292C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DynamicArray_1_Resize_mEEEB907EAEFD4C22DB449FF052CF6AC967A27AD1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DynamicArray_1_get_Item_m5FC9383C3A815B0DF7AAD4C2A5CDFB1A25586ECE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DynamicArray_1_get_size_m56D2768863B15299FA4F2F14E271686207A8C2E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mCE78820A119B5A3974D397DF20EACCF0AE77A607_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mCDC4D51017A6FCCB56125B31477498D37FBC4911_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m3E2C62A181DBC8F1232AE097D030451DC49CDC59_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m7FFBBF9B40BF65391F615C1718B33A309DBEC760_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct DynamicArray_1_t401F46C0081DE185BCAB1D30DE8D6B6DC9AA6AFB  : public RuntimeObject
{
	IRenderGraphResourceU5BU5D_tC72A5980774D8ACE9E681BE8A3FAB493A70BC2F3* ___m_Array;
	int32_t ___U3CsizeU3Ek__BackingField;
	int32_t ___U3CversionU3Ek__BackingField;
};
struct DynamicArray_1_t7C64F5A74B7BA6F6B3589A766CADE3F59C6C7BCA  : public RuntimeObject
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_Array;
	int32_t ___U3CsizeU3Ek__BackingField;
	int32_t ___U3CversionU3Ek__BackingField;
};
struct ListJson_1_t78121586879DA543E2D43DE6569B16DE1D05C539  : public RuntimeObject
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___list;
	String_t* ___error;
};
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t602BCD639AA637A6C0BB45C136DD5458DBE18064  : public RuntimeObject
{
	VolumeComponentU5BU5D_t9623DFEA760C190B40486621A48932B26706D143* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095  : public RuntimeObject
{
	int32_t ___m_codePage;
	CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2* ___dataItem;
	bool ___m_deserializedFromEverett;
	bool ___m_isReadOnly;
	EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293* ___encoderFallback;
	DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90* ___decoderFallback;
};
struct IRenderGraphResource_tF24653A388C17849844C128C19C7A6599C7ADB7D  : public RuntimeObject
{
	bool ___imported;
	bool ___shared;
	bool ___sharedExplicitRelease;
	bool ___requestFallBack;
	uint32_t ___writeCount;
	int32_t ___cachedHash;
	int32_t ___transientPassIndex;
	int32_t ___sharedResourceLastFrameUsed;
	IRenderGraphResourcePool_t8BF833F3C5D0BD8E45632CF923363EC782F4DDA8* ___m_Pool;
};
struct IRenderGraphResourcePool_t8BF833F3C5D0BD8E45632CF923363EC782F4DDA8  : public RuntimeObject
{
};
struct MemberInfo_t  : public RuntimeObject
{
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct VisualTreeUpdater_tFDE7D9F9A146A26B2ED69565B7BD142B416AB9C9  : public RuntimeObject
{
	BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303* ___m_Panel;
	UpdaterArray_tF8D43D2A3598E7C17ABB5308E83FDECF1F36A449* ___m_UpdaterArray;
};
struct Volatile_tC26FEDFD254742AD25E4B908FA81293FBBF4ECB0  : public RuntimeObject
{
};
struct VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72  : public RuntimeObject
{
	bool ___m_OverrideState;
};
struct VolumeStack_t5DE94743BDB63D97EF5587DBDAE46468233F36E8  : public RuntimeObject
{
	Dictionary_2_t5A7CE09F4D3EC74EEAE8DB41E209394AF6D9C99A* ___components;
	ValueTuple_2U5BU5D_tE2E90A16702AA41094A74222F01C7F383CC57377* ___defaultParameters;
	bool ___requiresReset;
};
struct WebContext_t2A58FFA4CEB780A4B9F7FA93D5E0C0224F7F1339  : public RuntimeObject
{
	HttpListenerContext_tCD5824B5A03F644280D1F171203A2A03F7377412* ___http;
	String_t* ___method;
	String_t* ___token;
	String_t* ___path;
	String_t* ___data;
};
struct WebTool_t696AA3BA8A6A10DDBAF03AB6F436024BDF3EA1C9  : public RuntimeObject
{
};
struct XXHash_t0DA77116073FD4B34F50CFCB57B2FD8396F1BB3D  : public RuntimeObject
{
};
struct Expression_t24E9476A15D0D7F6495CF8292DA48C63C871E4B7  : public RuntimeObject
{
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___rpnTokens;
	bool ___hasVariables;
};
struct RenderGraphResourcesData_tB2FF97B16A3E1DE700283778679C5CC0C39F4CFE  : public RuntimeObject
{
	DynamicArray_1_t401F46C0081DE185BCAB1D30DE8D6B6DC9AA6AFB* ___resourceArray;
	int32_t ___sharedResourcesCount;
	IRenderGraphResourcePool_t8BF833F3C5D0BD8E45632CF923363EC782F4DDA8* ___pool;
	ResourceCallback_t45358BA8AC82EF742271B868C50331854DD58EEC* ___createResourceCallback;
	ResourceCallback_t45358BA8AC82EF742271B868C50331854DD58EEC* ___releaseResourceCallback;
};
struct TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F  : public RuntimeObject
{
	RuntimeObject* ___TypeConstructor;
};
struct UpdaterArray_tF8D43D2A3598E7C17ABB5308E83FDECF1F36A449  : public RuntimeObject
{
	IVisualTreeUpdaterU5BU5D_t9E9D948BC4F327DA519FEB2BCEC12FB7FD7C59E8* ___m_VisualTreeUpdaters;
};
struct U3CU3Ec__DisplayClass2_0_1_t41073816D00B5468033D7AA727FBFFB73E7C9BA2 
{
	Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___data;
};
struct U3CU3Ec__DisplayClass2_0_1_t95D21073081C2AD9435E6E2ED2FD63B720ABF032 
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___data;
};
struct U3CU3Ec__DisplayClass2_0_1_tC4E3D65CA470C2F2DB85D9B32B717BE3200D4597 
{
	LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___data;
};
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list;
	int32_t ____index;
	int32_t ____version;
	RuntimeObject* ____current;
};
struct Enumerator_t28274C6C8959D52D00A7A29993ED244DA2644355 
{
	List_1_t602BCD639AA637A6C0BB45C136DD5458DBE18064* ____list;
	int32_t ____index;
	int32_t ____version;
	VolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1* ____current;
};
struct VolumeParameter_1_tBCB51FE341649CAB77E12B97823E7D31852372CF  : public VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72
{
	bool ___m_Value;
};
struct VolumeParameter_1_t7111FAD4FF4C5BAEA3D390725AF3BC9069DBB546  : public VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72
{
	int32_t ___m_Value;
};
struct VolumeParameter_1_t77F022F5333E41A9053315BD571C993F8CC046F2  : public VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72
{
	int32_t ___m_Value;
};
struct VolumeParameter_1_t5E4D687B1DE10F23FA079D3967111740962E1076  : public VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72
{
	RuntimeObject* ___m_Value;
};
struct VolumeParameter_1_t18B35E30089EFE0C2751A53FE6143F972EC9F9B8  : public VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72
{
	float ___m_Value;
};
struct VolumeParameter_1_tB1EA9187ACF6A0B2CAC6CF51C310D670594DCCD3 : public VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72 {};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	float ___r;
	float ___g;
	float ___b;
	float ___a;
};
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	double ___m_value;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	int64_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct NativeQueueBlockHeader_tD74DEA5A5D8C910AA5ED04C5E89F2FE1B0521004 
{
	NativeQueueBlockHeader_tD74DEA5A5D8C910AA5ED04C5E89F2FE1B0521004* ___m_NextBlock;
	int32_t ___m_NumItems;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	uint32_t ___m_value;
};
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	uint64_t ___m_value;
};
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	float ___x;
	float ___y;
};
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
};
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};
struct WebResponse_t322F22D962A9D03D9CE5F86C1F0CCCB98CE8A20C 
{
	bool ___success;
	int64_t ___status;
	String_t* ___data;
	String_t* ___error;
};
struct WebResponse_t322F22D962A9D03D9CE5F86C1F0CCCB98CE8A20C_marshaled_pinvoke
{
	int32_t ___success;
	int64_t ___status;
	char* ___data;
	char* ___error;
};
struct WebResponse_t322F22D962A9D03D9CE5F86C1F0CCCB98CE8A20C_marshaled_com
{
	int32_t ___success;
	int64_t ___status;
	Il2CppChar* ___data;
	Il2CppChar* ___error;
};
struct AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 
{
	uint16_t ___Index;
	uint16_t ___Version;
};
struct LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 
{
	uint16_t ___visibleLightIndex;
	uint16_t ___lightBufferIndex;
	Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___light;
};
struct LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_marshaled_pinvoke
{
	uint16_t ___visibleLightIndex;
	uint16_t ___lightBufferIndex;
	Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___light;
};
struct LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_marshaled_com
{
	uint16_t ___visibleLightIndex;
	uint16_t ___lightBufferIndex;
	Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___light;
};
struct Sorting_t85E1835DC268F696F8A2F1E889C951F4C48DC994 
{
	union
	{
		struct
		{
		};
		uint8_t Sorting_t85E1835DC268F696F8A2F1E889C951F4C48DC994__padding[1];
	};
};
struct Unmanaged_t06043455F062B5BBF755BE852B0A7AB1876E3310 
{
	union
	{
		struct
		{
		};
		uint8_t Unmanaged_t06043455F062B5BBF755BE852B0A7AB1876E3310__padding[1];
	};
};
struct MemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84 
{
	uint8_t* ___m_pointer;
	int64_t ___m_bytes;
	int64_t ___m_current;
	int64_t ___m_allocations;
};
struct U3CfirstFreeTLSU3Ee__FixedBuffer_tB5D033343517E3E37219A27C7757D645091EFF11 
{
	union
	{
		struct
		{
			int32_t ___FixedElementField;
		};
		uint8_t U3CfirstFreeTLSU3Ee__FixedBuffer_tB5D033343517E3E37219A27C7757D645091EFF11__padding[8192];
	};
};
struct VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99 
{
	RuntimeObject* ___Value;
};
struct VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99_marshaled_pinvoke
{
	RuntimeObject* ___Value;
};
struct VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99_marshaled_com
{
	RuntimeObject* ___Value;
};
struct Array_t3B8F006A80A48C83471DE3516556F1AFE6873381 
{
	union
	{
		struct
		{
		};
		uint8_t Array_t3B8F006A80A48C83471DE3516556F1AFE6873381__padding[1];
	};
};
struct VolumeParameter_1_t548F25B8FDAED7E284E53FF27602B841970079FC  : public VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Value;
};
struct VolumeParameter_1_tADB3F1E2F42E88F6F74B7FD1CE782B1098424D7B  : public VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Value;
};
struct VolumeParameter_1_tF55730717D62BD99642CBDBBD61DC4E5E5396E1C  : public VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_Value;
};
struct Delegate_t  : public RuntimeObject
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	RuntimeObject* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	bool ___method_is_virtual;
};
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Exception_t  : public RuntimeObject
{
	String_t* ____className;
	String_t* ____message;
	RuntimeObject* ____data;
	Exception_t* ____innerException;
	String_t* ____helpURL;
	RuntimeObject* ____stackTrace;
	String_t* ____stackTraceString;
	String_t* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	RuntimeObject* ____dynamicMethods;
	int32_t ____HResult;
	String_t* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_pinvoke
{
	char* ____className;
	char* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_pinvoke* ____innerException;
	char* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	char* ____stackTraceString;
	char* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	char* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className;
	Il2CppChar* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_com* ____innerException;
	Il2CppChar* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	Il2CppChar* ____stackTraceString;
	Il2CppChar* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	Il2CppChar* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct NativeQueueBlockPoolData_t3A0B3E1B852D995248D51AB68660D1B367D28E87 
{
	intptr_t ___m_FirstBlock;
	int32_t ___m_NumBlocks;
	int32_t ___m_MaxBlocks;
	int32_t ___m_AllocLock;
};
struct NativeQueueData_t61B94D7FE48C5715DD5D0C8CB574F73BF15C6E52 
{
	intptr_t ___m_FirstBlock;
	intptr_t ___m_LastBlock;
	int32_t ___m_MaxItems;
	int32_t ___m_CurrentRead;
	uint8_t* ___m_CurrentWriteBlockTLS;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr;
};
struct PanelClearSettings_tA3D8EE9A4864781CE3E5FED5225C6FB37ED66EE7 
{
	bool ___clearDepthStencil;
	bool ___clearColor;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color;
};
struct PanelClearSettings_tA3D8EE9A4864781CE3E5FED5225C6FB37ED66EE7_marshaled_pinvoke
{
	int32_t ___clearDepthStencil;
	int32_t ___clearColor;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color;
};
struct PanelClearSettings_tA3D8EE9A4864781CE3E5FED5225C6FB37ED66EE7_marshaled_com
{
	int32_t ___clearDepthStencil;
	int32_t ___clearColor;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t* ___values;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t* ___values_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___keys_OffsetPadding[8];
			uint8_t* ___keys;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___keys_OffsetPadding_forAlignmentOnly[8];
			uint8_t* ___keys_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___next_OffsetPadding[16];
			uint8_t* ___next;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___next_OffsetPadding_forAlignmentOnly[16];
			uint8_t* ___next_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___buckets_OffsetPadding[24];
			uint8_t* ___buckets;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___buckets_OffsetPadding_forAlignmentOnly[24];
			uint8_t* ___buckets_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___keyCapacity_OffsetPadding[32];
			int32_t ___keyCapacity;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___keyCapacity_OffsetPadding_forAlignmentOnly[32];
			int32_t ___keyCapacity_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___bucketCapacityMask_OffsetPadding[36];
			int32_t ___bucketCapacityMask;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___bucketCapacityMask_OffsetPadding_forAlignmentOnly[36];
			int32_t ___bucketCapacityMask_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___allocatedIndexLength_OffsetPadding[40];
			int32_t ___allocatedIndexLength;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___allocatedIndexLength_OffsetPadding_forAlignmentOnly[40];
			int32_t ___allocatedIndexLength_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___firstFreeTLS_OffsetPadding[64];
			U3CfirstFreeTLSU3Ee__FixedBuffer_tB5D033343517E3E37219A27C7757D645091EFF11 ___firstFreeTLS;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___firstFreeTLS_OffsetPadding_forAlignmentOnly[64];
			U3CfirstFreeTLSU3Ee__FixedBuffer_tB5D033343517E3E37219A27C7757D645091EFF11 ___firstFreeTLS_forAlignmentOnly;
		};
	};
};
struct BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303  : public RuntimeObject
{
	Action_1_tF0C1AFCCE9CE63382F43540DC0DA04A8939A8A53* ___panelDisposed;
	UIElementsBridge_tC28FCEDF493CD746D1973AB27BA2CBA393EB4BA8* ___m_UIElementsBridge;
	float ___m_Scale;
	YogaConfig_tA7EBAFAD020EA5AB3104A2C25AB95CC7CE6FB3E2* ___yogaConfig;
	float ___m_PixelsPerPoint;
	float ___U3CreferenceSpritePixelsPerUnitU3Ek__BackingField;
	PanelClearSettings_tA3D8EE9A4864781CE3E5FED5225C6FB37ED66EE7 ___U3CclearSettingsU3Ek__BackingField;
	bool ___U3CduringLayoutPhaseU3Ek__BackingField;
	RepaintData_t90534752135661579EC254884F550545D001B5EA* ___U3CrepaintDataU3Ek__BackingField;
	RuntimeObject* ___U3CcursorManagerU3Ek__BackingField;
	ContextualMenuManager_tEE3B1F33FFFD180705467CA625AEBA0F5D63154B* ___U3CcontextualMenuManagerU3Ek__BackingField;
	bool ___U3CdisposedU3Ek__BackingField;
	ElementUnderPointer_tB43AD64F79C6F06829D8B90318AF1A6BBE9C1904* ___m_TopElementUnderPointers;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___standardShaderChanged;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___standardWorldSpaceShaderChanged;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___atlasChanged;
	Action_1_t996DFD52B4BDA6CBE8058C13167C4D2B8C612CAA* ___updateMaterial;
	HierarchyEvent_tB23E4347BC47656A014CA104A5B1DDC172A2A705* ___hierarchyChanged;
	Action_1_tE55F8AC1EEC45D0C976E56B2950D65EC814C06E6* ___beforeUpdate;
};
struct MulticastDelegate_t  : public Delegate_t
{
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates;
};
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates;
};
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates;
};
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F  : public MulticastDelegate_t
{
};
struct Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9  : public MulticastDelegate_t
{
};
struct Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821  : public MulticastDelegate_t
{
};
struct VolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	bool ___active;
	String_t* ___U3CdisplayNameU3Ek__BackingField;
	List_1_tD19F7E0FCBD7C3E8D363733582EF93B341DD3039* ___parameterList;
	ReadOnlyCollection_1_tE414953665CCBE1BFF28E8E32C184621ADDA4B76* ___m_ParameterReadOnlyCollection;
};
struct VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	List_1_t602BCD639AA637A6C0BB45C136DD5458DBE18064* ___components;
	bool ___isDirty;
};
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray;
};
struct List_1_t602BCD639AA637A6C0BB45C136DD5458DBE18064_StaticFields
{
	VolumeComponentU5BU5D_t9623DFEA760C190B40486621A48932B26706D143* ___s_emptyArray;
};
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095_StaticFields
{
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___defaultEncoding;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___unicodeEncoding;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___bigEndianUnicode;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf7Encoding;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf8Encoding;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf32Encoding;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___asciiEncoding;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___latin1Encoding;
	Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54* ___encodings;
	RuntimeObject* ___s_InternalSyncObject;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector;
};
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector;
};
struct LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_StaticFields
{
	Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___s_CompareByCookieSize;
	Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___s_CompareByBufferIndex;
};
struct Exception_t_StaticFields
{
	RuntimeObject* ___s_EDILock;
};
struct Type_t_StaticFields
{
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder;
	Il2CppChar ___Delimiter;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes;
	RuntimeObject* ___Missing;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
};
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

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
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 m_Items[1];

	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 value)
	{
		m_Items[index] = value;
	}
};
struct LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263  : public RuntimeArray
{
	ALIGN_FIELD (8) LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 m_Items[1];

	inline LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___light), (void*)NULL);
	}
	inline LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___light), (void*)NULL);
	}
};
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeProfile_TryGet_TisRuntimeObject_m94F2608D83F12FCFA1661C7D7EF19C26A0515933_gshared (VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1* __this, Type_t* ___0_type, RuntimeObject** ___1_component, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Assert_IsNotNull_TisRuntimeObject_mFA75318800124DED2E924476F16DD129394A20AC_gshared (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebResponse_GetData_TisIl2CppFullySharedGenericAny_m739CE59923EE50290B6AC30D9D331961E7FC7534_gshared (WebResponse_t322F22D962A9D03D9CE5F86C1F0CCCB98CE8A20C* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonUtility_FromJson_TisRuntimeObject_m0CCF0FE109BF4C85AECC9C5D0DBB43422A24FB40_gshared (String_t* ___0_json, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ExpressionEvaluator_EvaluateTokens_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m791767867653D0CCE2BEFF83F336A41B5B3A718E_gshared (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_tokens, double* ___1_value, int32_t ___2_index, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ExpressionEvaluator_EvaluateTokens_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m7418F7A8835B2770EF83F1D52F2723897CD76DEB_gshared (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_tokens, int64_t* ___1_value, int32_t ___2_index, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ExpressionEvaluator_EvaluateTokens_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mCFCF758DECB276DBCB0A8B83BAE195EF3B974780_gshared (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_tokens, uint64_t* ___1_value, int32_t ___2_index, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Func_3_Invoke_mE6CD106F59B0ADD2DF9C211DC4CF4088F5A1A4BB_gshared_inline (Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___0_arg1, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___1_arg2, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Func_3_Invoke_m2AED59BE1B0645C0DB5DAE117842A1C0AD4BDEBB_gshared_inline (Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* __this, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 ___0_arg1, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 ___1_arg2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sorting_U3CMedian3PivotU3Eg__SwapU7C2_0_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m2B2B04012DE1B591C8E7AD4765ECB8EF3790F795_gshared (int32_t ___0_a, int32_t ___1_b, U3CU3Ec__DisplayClass2_0_1_t41073816D00B5468033D7AA727FBFFB73E7C9BA2* ___2_p, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sorting_U3CMedian3PivotU3Eg__SwapU7C2_0_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_m06FED96568508A808BFC2F0CB6D49F45194E6051_gshared (int32_t ___0_a, int32_t ___1_b, U3CU3Ec__DisplayClass2_0_1_tC4E3D65CA470C2F2DB85D9B32B717BE3200D4597* ___2_p, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Sorting_Median3Pivot_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m61A04EAD49649BB481C390575840F890DC1AD6D9_gshared (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___0_data, int32_t ___1_start, int32_t ___2_pivot, int32_t ___3_end, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* ___4_compare, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 Sorting_Median3Pivot_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_m3AE419868146FAEE6A59E9FA4E33484BFA9930B1_gshared (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___0_data, int32_t ___1_start, int32_t ___2_pivot, int32_t ___3_end, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___4_compare, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sorting_InsertionSort_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m6B06894C5FA146D1CCE7ECBC21F553F16F2E96F5_gshared (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___0_data, int32_t ___1_start, int32_t ___2_end, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* ___3_compare, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sorting_Partition_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m5B1882A69C494B64F1EA761E21D0018C1D6AB6E8_gshared (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___0_data, int32_t ___1_start, int32_t ___2_end, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* ___3_compare, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sorting_QuickSort_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mAA6CA24576E19917524BFD6BE7AC3ACF4A18B570_gshared (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___0_data, int32_t ___1_start, int32_t ___2_end, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* ___3_compare, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sorting_InsertionSort_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_m50C92303E813A7BFD084FB309E5FB9937C8F2065_gshared (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___0_data, int32_t ___1_start, int32_t ___2_end, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___3_compare, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sorting_Partition_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_m0E79CA1E375645FFDF3E1506F789825A9A6D3D95_gshared (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___0_data, int32_t ___1_start, int32_t ___2_end, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___3_compare, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sorting_QuickSort_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_mADD51465439832E9BCC31668A2DE42CFCCA07F9C_gshared (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___0_data, int32_t ___1_start, int32_t ___2_end, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___3_compare, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* Array_Resize_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1767423622567D1059537F40EF99A5522126FBD0_gshared (uint8_t* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeQueueBlockHeader_tD74DEA5A5D8C910AA5ED04C5E89F2FE1B0521004* Array_Resize_TisNativeQueueBlockHeader_tD74DEA5A5D8C910AA5ED04C5E89F2FE1B0521004_mF823D88C2CF36E927F7071E5ED1571B8DC2E7D51_gshared (NativeQueueBlockHeader_tD74DEA5A5D8C910AA5ED04C5E89F2FE1B0521004* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeQueueBlockPoolData_t3A0B3E1B852D995248D51AB68660D1B367D28E87* Array_Resize_TisNativeQueueBlockPoolData_t3A0B3E1B852D995248D51AB68660D1B367D28E87_m0B0F25C920A5E2CC4CB3CF98A4E37180ADA06A7E_gshared (NativeQueueBlockPoolData_t3A0B3E1B852D995248D51AB68660D1B367D28E87* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeQueueData_t61B94D7FE48C5715DD5D0C8CB574F73BF15C6E52* Array_Resize_TisNativeQueueData_t61B94D7FE48C5715DD5D0C8CB574F73BF15C6E52_mE421AA6A3572FBA2A310DC7DE4AFBEE98D2623E0_gshared (NativeQueueData_t61B94D7FE48C5715DD5D0C8CB574F73BF15C6E52* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4* Array_Resize_TisUnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4_mA531CDFFC7A4E38C552DFDEDFA1E8436B76F7DE9_gshared (UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84* Array_Resize_TisMemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84_m66D39A0700C852DFD578157D9E4862A8230233F3_gshared (MemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t DynamicArray_1_get_size_m1B00C20A8CC4D62269585D16A58425D3F258836F_gshared_inline (DynamicArray_1_t7C64F5A74B7BA6F6B3589A766CADE3F59C6C7BCA* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicArray_1_Resize_m3E24EB8A4A036B423BA304E8C3C94EBD0222822E_gshared (DynamicArray_1_t7C64F5A74B7BA6F6B3589A766CADE3F59C6C7BCA* __this, int32_t ___0_newSize, bool ___1_keepContent, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject** DynamicArray_1_get_Item_m7DDF1E462D1484149A4D812CAD717F816205FD44_gshared (DynamicArray_1_t7C64F5A74B7BA6F6B3589A766CADE3F59C6C7BCA* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Activator_CreateInstance_TisRuntimeObject_m62506836177F0F862A8D619638BF37F48721F138_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m16C827D0F6107B7998F6C99B57F7CC2F181E2198_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisBoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485_m8F344250A2F9E6EE6DDBA6BA833BB36D0F272B66_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisRuntimeObject_m4E17F588B090C1DADAE2D986BDA407DECEAC020F_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_m2C5F5CF80D13B041768C7845C5AAEEC02BB683BA_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisRectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8_mF6949D9EDD480E6666CD975C66487AAD6ABC7D11_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisVector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_mC8EF710494C8986B279262C6C64947BE2C1DC55C_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_mB00220519A80AA5ACE36B7DBA2E6A6CB796302AF_gshared (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m97C7D5E5DE74DC60A0ECAA914830BEDF2C46ACAA_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB152D3C658FB48DEDB6E662EEB0C91018E7F2857_gshared (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisNativeQueueBlockHeader_tD74DEA5A5D8C910AA5ED04C5E89F2FE1B0521004_mD17298D011DA1F41116B52EA79F5E53E3C07037F_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisNativeQueueBlockHeader_tD74DEA5A5D8C910AA5ED04C5E89F2FE1B0521004_mB6891C7A8270EA99BA8C7616A4B23733FE8BED87_gshared (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisNativeQueueBlockPoolData_t3A0B3E1B852D995248D51AB68660D1B367D28E87_mC7FEAA8F718320B4F881566EB9C8D910A41CC37A_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisNativeQueueBlockPoolData_t3A0B3E1B852D995248D51AB68660D1B367D28E87_m8EF809058620A5D5C36B4732089B9D4DA178136D_gshared (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisNativeQueueData_t61B94D7FE48C5715DD5D0C8CB574F73BF15C6E52_m494294FC3C525306A1D00A1A452B1000C14A7D40_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisNativeQueueData_t61B94D7FE48C5715DD5D0C8CB574F73BF15C6E52_mD305539B45883F475C5E06B9227D6142D41C6823_gshared (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisUnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4_mCF165A03E97D72A1EC00EA0FA1B0A1A9F3B6EF6B_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisUnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4_mE84A0B9A63BCBBD40FD2A575AC555294A28A93A3_gshared (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisMemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84_m4A0947EA519A2614EC19544513888A4DC5F42919_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisMemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84_m6AD8B4EF31CDD94CA734378B1443806DAFE68A05_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UpdaterArray_get_Item_m6DADA11557BD3FE2E6680F3C1F6F828DB4EE255C (UpdaterArray_tF8D43D2A3598E7C17ABB5308E83FDECF1F36A449* __this, int32_t ___0_phase, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdaterArray_set_Item_m2961BC09E3C22E6D3887BB8E48A367BAEF847A11 (UpdaterArray_tF8D43D2A3598E7C17ABB5308E83FDECF1F36A449* __this, int32_t ___0_phase, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1* VolumeProfile_Add_mDF517026750FFACF3E21FCC135510FEBEB12BE1B (VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1* __this, Type_t* ___0_type, bool ___1_overrides, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeProfile_Has_m58F53E1D8EC2C8D8D97ADF7AEEB6C432FFE9C8BC (VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1* __this, Type_t* ___0_type, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeProfile_Remove_m9E5CA5F7CA22167AD235A88515C4315F68A579E7 (VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1* __this, Type_t* ___0_type, const RuntimeMethod* method) ;
inline bool VolumeProfile_TryGet_TisRuntimeObject_m94F2608D83F12FCFA1661C7D7EF19C26A0515933 (VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1* __this, Type_t* ___0_type, RuntimeObject** ___1_component, const RuntimeMethod* method)
{
	return ((  bool (*) (VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1*, Type_t*, RuntimeObject**, const RuntimeMethod*))VolumeProfile_TryGet_TisRuntimeObject_m94F2608D83F12FCFA1661C7D7EF19C26A0515933_gshared)(__this, ___0_type, ___1_component, method);
}
inline Enumerator_t28274C6C8959D52D00A7A29993ED244DA2644355 List_1_GetEnumerator_m7FFBBF9B40BF65391F615C1718B33A309DBEC760 (List_1_t602BCD639AA637A6C0BB45C136DD5458DBE18064* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t28274C6C8959D52D00A7A29993ED244DA2644355 (*) (List_1_t602BCD639AA637A6C0BB45C136DD5458DBE18064*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
inline void Enumerator_Dispose_mCE78820A119B5A3974D397DF20EACCF0AE77A607 (Enumerator_t28274C6C8959D52D00A7A29993ED244DA2644355* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t28274C6C8959D52D00A7A29993ED244DA2644355*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
inline VolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1* Enumerator_get_Current_m3E2C62A181DBC8F1232AE097D030451DC49CDC59_inline (Enumerator_t28274C6C8959D52D00A7A29993ED244DA2644355* __this, const RuntimeMethod* method)
{
	return ((  VolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1* (*) (Enumerator_t28274C6C8959D52D00A7A29993ED244DA2644355*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
inline bool Enumerator_MoveNext_mCDC4D51017A6FCCB56125B31477498D37FBC4911 (Enumerator_t28274C6C8959D52D00A7A29993ED244DA2644355* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t28274C6C8959D52D00A7A29993ED244DA2644355*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
inline void Assert_IsNotNull_TisList_1_t602BCD639AA637A6C0BB45C136DD5458DBE18064_m6503DF58750A341F8B75EFD5120342F9F04292C1 (List_1_t602BCD639AA637A6C0BB45C136DD5458DBE18064* ___0_value, const RuntimeMethod* method)
{
	((  void (*) (List_1_t602BCD639AA637A6C0BB45C136DD5458DBE18064*, const RuntimeMethod*))Assert_IsNotNull_TisRuntimeObject_mFA75318800124DED2E924476F16DD129394A20AC_gshared)(___0_value, method);
}
inline int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
inline void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1* VolumeStack_GetComponent_mC7A2CE27A8A6F6A6A4B4B6EF14E190085A343844 (VolumeStack_t5DE94743BDB63D97EF5587DBDAE46468233F36E8* __this, Type_t* ___0_type, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebTool_ToJson_m7170F711903B7AE7A4AA402437BC2D52795CA224 (RuntimeObject* ___0_data, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebContext_SendResponse_m8FB3315588D61AFE7C83D60F8B50158060E356AF (WebContext_t2A58FFA4CEB780A4B9F7FA93D5E0C0224F7F1339* __this, String_t* ___0_value, const RuntimeMethod* method) ;
inline void WebResponse_GetData_TisIl2CppFullySharedGenericAny_m739CE59923EE50290B6AC30D9D331961E7FC7534 (WebResponse_t322F22D962A9D03D9CE5F86C1F0CCCB98CE8A20C* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (WebResponse_t322F22D962A9D03D9CE5F86C1F0CCCB98CE8A20C*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))WebResponse_GetData_TisIl2CppFullySharedGenericAny_m739CE59923EE50290B6AC30D9D331961E7FC7534_gshared)((WebResponse_t322F22D962A9D03D9CE5F86C1F0CCCB98CE8A20C*)__this, il2cppRetVal, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Activator_CreateInstance_mFF030428C64FDDFACC74DFAC97388A1C628BFBCF (Type_t* ___0_type, const RuntimeMethod* method) ;
inline RuntimeObject* JsonUtility_FromJson_TisRuntimeObject_m0CCF0FE109BF4C85AECC9C5D0DBB43422A24FB40 (String_t* ___0_json, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (String_t*, const RuntimeMethod*))JsonUtility_FromJson_TisRuntimeObject_m0CCF0FE109BF4C85AECC9C5D0DBB43422A24FB40_gshared)(___0_json, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t XXHash_Hash32_m32173EED06C4A1A3F85AA601FE079202964153FF_inline (Type_t* ___0_type, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t XXHash_Hash64_mED063B27131C19B79F8CE60BC883B3A2463331D8_inline (Type_t* ___0_type, const RuntimeMethod* method) ;
inline bool ExpressionEvaluator_EvaluateTokens_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m791767867653D0CCE2BEFF83F336A41B5B3A718E (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_tokens, double* ___1_value, int32_t ___2_index, int32_t ___3_count, const RuntimeMethod* method)
{
	return ((  bool (*) (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, double*, int32_t, int32_t, const RuntimeMethod*))ExpressionEvaluator_EvaluateTokens_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m791767867653D0CCE2BEFF83F336A41B5B3A718E_gshared)(___0_tokens, ___1_value, ___2_index, ___3_count, method);
}
inline bool ExpressionEvaluator_EvaluateTokens_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m7418F7A8835B2770EF83F1D52F2723897CD76DEB (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_tokens, int64_t* ___1_value, int32_t ___2_index, int32_t ___3_count, const RuntimeMethod* method)
{
	return ((  bool (*) (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, int64_t*, int32_t, int32_t, const RuntimeMethod*))ExpressionEvaluator_EvaluateTokens_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m7418F7A8835B2770EF83F1D52F2723897CD76DEB_gshared)(___0_tokens, ___1_value, ___2_index, ___3_count, method);
}
inline bool ExpressionEvaluator_EvaluateTokens_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mCFCF758DECB276DBCB0A8B83BAE195EF3B974780 (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_tokens, uint64_t* ___1_value, int32_t ___2_index, int32_t ___3_count, const RuntimeMethod* method)
{
	return ((  bool (*) (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, uint64_t*, int32_t, int32_t, const RuntimeMethod*))ExpressionEvaluator_EvaluateTokens_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mCFCF758DECB276DBCB0A8B83BAE195EF3B974780_gshared)(___0_tokens, ___1_value, ___2_index, ___3_count, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Assert_IsTrue_mE42C53B7220324D1FBAFB7AE48A7D8DD7796A663 (bool ___0_condition, const RuntimeMethod* method) ;
inline int32_t Func_3_Invoke_mE6CD106F59B0ADD2DF9C211DC4CF4088F5A1A4BB_inline (Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___0_arg1, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___1_arg2, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F*, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3, const RuntimeMethod*))Func_3_Invoke_mE6CD106F59B0ADD2DF9C211DC4CF4088F5A1A4BB_gshared_inline)(__this, ___0_arg1, ___1_arg2, method);
}
inline int32_t Func_3_Invoke_m2AED59BE1B0645C0DB5DAE117842A1C0AD4BDEBB_inline (Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* __this, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 ___0_arg1, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 ___1_arg2, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821*, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2, const RuntimeMethod*))Func_3_Invoke_m2AED59BE1B0645C0DB5DAE117842A1C0AD4BDEBB_gshared_inline)(__this, ___0_arg1, ___1_arg2, method);
}
inline void Sorting_U3CMedian3PivotU3Eg__SwapU7C2_0_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m2B2B04012DE1B591C8E7AD4765ECB8EF3790F795 (int32_t ___0_a, int32_t ___1_b, U3CU3Ec__DisplayClass2_0_1_t41073816D00B5468033D7AA727FBFFB73E7C9BA2* ___2_p, const RuntimeMethod* method)
{
	((  void (*) (int32_t, int32_t, U3CU3Ec__DisplayClass2_0_1_t41073816D00B5468033D7AA727FBFFB73E7C9BA2*, const RuntimeMethod*))Sorting_U3CMedian3PivotU3Eg__SwapU7C2_0_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m2B2B04012DE1B591C8E7AD4765ECB8EF3790F795_gshared)(___0_a, ___1_b, ___2_p, method);
}
inline void Sorting_U3CMedian3PivotU3Eg__SwapU7C2_0_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_m06FED96568508A808BFC2F0CB6D49F45194E6051 (int32_t ___0_a, int32_t ___1_b, U3CU3Ec__DisplayClass2_0_1_tC4E3D65CA470C2F2DB85D9B32B717BE3200D4597* ___2_p, const RuntimeMethod* method)
{
	((  void (*) (int32_t, int32_t, U3CU3Ec__DisplayClass2_0_1_tC4E3D65CA470C2F2DB85D9B32B717BE3200D4597*, const RuntimeMethod*))Sorting_U3CMedian3PivotU3Eg__SwapU7C2_0_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_m06FED96568508A808BFC2F0CB6D49F45194E6051_gshared)(___0_a, ___1_b, ___2_p, method);
}
inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Sorting_Median3Pivot_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m61A04EAD49649BB481C390575840F890DC1AD6D9 (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___0_data, int32_t ___1_start, int32_t ___2_pivot, int32_t ___3_end, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* ___4_compare, const RuntimeMethod* method)
{
	return ((  Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 (*) (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*, int32_t, int32_t, int32_t, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F*, const RuntimeMethod*))Sorting_Median3Pivot_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m61A04EAD49649BB481C390575840F890DC1AD6D9_gshared)(___0_data, ___1_start, ___2_pivot, ___3_end, ___4_compare, method);
}
inline LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 Sorting_Median3Pivot_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_m3AE419868146FAEE6A59E9FA4E33484BFA9930B1 (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___0_data, int32_t ___1_start, int32_t ___2_pivot, int32_t ___3_end, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___4_compare, const RuntimeMethod* method)
{
	return ((  LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 (*) (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263*, int32_t, int32_t, int32_t, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821*, const RuntimeMethod*))Sorting_Median3Pivot_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_m3AE419868146FAEE6A59E9FA4E33484BFA9930B1_gshared)(___0_data, ___1_start, ___2_pivot, ___3_end, ___4_compare, method);
}
inline void Sorting_InsertionSort_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m6B06894C5FA146D1CCE7ECBC21F553F16F2E96F5 (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___0_data, int32_t ___1_start, int32_t ___2_end, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* ___3_compare, const RuntimeMethod* method)
{
	((  void (*) (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*, int32_t, int32_t, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F*, const RuntimeMethod*))Sorting_InsertionSort_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m6B06894C5FA146D1CCE7ECBC21F553F16F2E96F5_gshared)(___0_data, ___1_start, ___2_end, ___3_compare, method);
}
inline int32_t Sorting_Partition_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m5B1882A69C494B64F1EA761E21D0018C1D6AB6E8 (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___0_data, int32_t ___1_start, int32_t ___2_end, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* ___3_compare, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*, int32_t, int32_t, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F*, const RuntimeMethod*))Sorting_Partition_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m5B1882A69C494B64F1EA761E21D0018C1D6AB6E8_gshared)(___0_data, ___1_start, ___2_end, ___3_compare, method);
}
inline void Sorting_QuickSort_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mAA6CA24576E19917524BFD6BE7AC3ACF4A18B570 (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___0_data, int32_t ___1_start, int32_t ___2_end, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* ___3_compare, const RuntimeMethod* method)
{
	((  void (*) (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*, int32_t, int32_t, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F*, const RuntimeMethod*))Sorting_QuickSort_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mAA6CA24576E19917524BFD6BE7AC3ACF4A18B570_gshared)(___0_data, ___1_start, ___2_end, ___3_compare, method);
}
inline void Sorting_InsertionSort_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_m50C92303E813A7BFD084FB309E5FB9937C8F2065 (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___0_data, int32_t ___1_start, int32_t ___2_end, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___3_compare, const RuntimeMethod* method)
{
	((  void (*) (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263*, int32_t, int32_t, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821*, const RuntimeMethod*))Sorting_InsertionSort_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_m50C92303E813A7BFD084FB309E5FB9937C8F2065_gshared)(___0_data, ___1_start, ___2_end, ___3_compare, method);
}
inline int32_t Sorting_Partition_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_m0E79CA1E375645FFDF3E1506F789825A9A6D3D95 (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___0_data, int32_t ___1_start, int32_t ___2_end, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___3_compare, const RuntimeMethod* method)
{
	return ((  int32_t (*) (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263*, int32_t, int32_t, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821*, const RuntimeMethod*))Sorting_Partition_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_m0E79CA1E375645FFDF3E1506F789825A9A6D3D95_gshared)(___0_data, ___1_start, ___2_end, ___3_compare, method);
}
inline void Sorting_QuickSort_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_mADD51465439832E9BCC31668A2DE42CFCCA07F9C (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___0_data, int32_t ___1_start, int32_t ___2_end, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___3_compare, const RuntimeMethod* method)
{
	((  void (*) (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263*, int32_t, int32_t, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821*, const RuntimeMethod*))Sorting_QuickSort_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_mADD51465439832E9BCC31668A2DE42CFCCA07F9C_gshared)(___0_data, ___1_start, ___2_end, ___3_compare, method);
}
inline uint8_t* Array_Resize_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1767423622567D1059537F40EF99A5522126FBD0 (uint8_t* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method)
{
	return ((  uint8_t* (*) (uint8_t*, int64_t, int64_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))Array_Resize_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1767423622567D1059537F40EF99A5522126FBD0_gshared)(___0_oldPointer, ___1_oldCount, ___2_newCount, ___3_allocator, method);
}
inline NativeQueueBlockHeader_tD74DEA5A5D8C910AA5ED04C5E89F2FE1B0521004* Array_Resize_TisNativeQueueBlockHeader_tD74DEA5A5D8C910AA5ED04C5E89F2FE1B0521004_mF823D88C2CF36E927F7071E5ED1571B8DC2E7D51 (NativeQueueBlockHeader_tD74DEA5A5D8C910AA5ED04C5E89F2FE1B0521004* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method)
{
	return ((  NativeQueueBlockHeader_tD74DEA5A5D8C910AA5ED04C5E89F2FE1B0521004* (*) (NativeQueueBlockHeader_tD74DEA5A5D8C910AA5ED04C5E89F2FE1B0521004*, int64_t, int64_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))Array_Resize_TisNativeQueueBlockHeader_tD74DEA5A5D8C910AA5ED04C5E89F2FE1B0521004_mF823D88C2CF36E927F7071E5ED1571B8DC2E7D51_gshared)(___0_oldPointer, ___1_oldCount, ___2_newCount, ___3_allocator, method);
}
inline NativeQueueBlockPoolData_t3A0B3E1B852D995248D51AB68660D1B367D28E87* Array_Resize_TisNativeQueueBlockPoolData_t3A0B3E1B852D995248D51AB68660D1B367D28E87_m0B0F25C920A5E2CC4CB3CF98A4E37180ADA06A7E (NativeQueueBlockPoolData_t3A0B3E1B852D995248D51AB68660D1B367D28E87* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method)
{
	return ((  NativeQueueBlockPoolData_t3A0B3E1B852D995248D51AB68660D1B367D28E87* (*) (NativeQueueBlockPoolData_t3A0B3E1B852D995248D51AB68660D1B367D28E87*, int64_t, int64_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))Array_Resize_TisNativeQueueBlockPoolData_t3A0B3E1B852D995248D51AB68660D1B367D28E87_m0B0F25C920A5E2CC4CB3CF98A4E37180ADA06A7E_gshared)(___0_oldPointer, ___1_oldCount, ___2_newCount, ___3_allocator, method);
}
inline NativeQueueData_t61B94D7FE48C5715DD5D0C8CB574F73BF15C6E52* Array_Resize_TisNativeQueueData_t61B94D7FE48C5715DD5D0C8CB574F73BF15C6E52_mE421AA6A3572FBA2A310DC7DE4AFBEE98D2623E0 (NativeQueueData_t61B94D7FE48C5715DD5D0C8CB574F73BF15C6E52* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method)
{
	return ((  NativeQueueData_t61B94D7FE48C5715DD5D0C8CB574F73BF15C6E52* (*) (NativeQueueData_t61B94D7FE48C5715DD5D0C8CB574F73BF15C6E52*, int64_t, int64_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))Array_Resize_TisNativeQueueData_t61B94D7FE48C5715DD5D0C8CB574F73BF15C6E52_mE421AA6A3572FBA2A310DC7DE4AFBEE98D2623E0_gshared)(___0_oldPointer, ___1_oldCount, ___2_newCount, ___3_allocator, method);
}
inline UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4* Array_Resize_TisUnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4_mA531CDFFC7A4E38C552DFDEDFA1E8436B76F7DE9 (UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method)
{
	return ((  UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4* (*) (UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4*, int64_t, int64_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))Array_Resize_TisUnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4_mA531CDFFC7A4E38C552DFDEDFA1E8436B76F7DE9_gshared)(___0_oldPointer, ___1_oldCount, ___2_newCount, ___3_allocator, method);
}
inline MemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84* Array_Resize_TisMemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84_m66D39A0700C852DFD578157D9E4862A8230233F3 (MemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method)
{
	return ((  MemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84* (*) (MemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84*, int64_t, int64_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))Array_Resize_TisMemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84_m66D39A0700C852DFD578157D9E4862A8230233F3_gshared)(___0_oldPointer, ___1_oldCount, ___2_newCount, ___3_allocator, method);
}
inline int32_t DynamicArray_1_get_size_m56D2768863B15299FA4F2F14E271686207A8C2E4_inline (DynamicArray_1_t401F46C0081DE185BCAB1D30DE8D6B6DC9AA6AFB* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (DynamicArray_1_t401F46C0081DE185BCAB1D30DE8D6B6DC9AA6AFB*, const RuntimeMethod*))DynamicArray_1_get_size_m1B00C20A8CC4D62269585D16A58425D3F258836F_gshared_inline)(__this, method);
}
inline void DynamicArray_1_Resize_mEEEB907EAEFD4C22DB449FF052CF6AC967A27AD1 (DynamicArray_1_t401F46C0081DE185BCAB1D30DE8D6B6DC9AA6AFB* __this, int32_t ___0_newSize, bool ___1_keepContent, const RuntimeMethod* method)
{
	((  void (*) (DynamicArray_1_t401F46C0081DE185BCAB1D30DE8D6B6DC9AA6AFB*, int32_t, bool, const RuntimeMethod*))DynamicArray_1_Resize_m3E24EB8A4A036B423BA304E8C3C94EBD0222822E_gshared)(__this, ___0_newSize, ___1_keepContent, method);
}
inline IRenderGraphResource_tF24653A388C17849844C128C19C7A6599C7ADB7D** DynamicArray_1_get_Item_m5FC9383C3A815B0DF7AAD4C2A5CDFB1A25586ECE (DynamicArray_1_t401F46C0081DE185BCAB1D30DE8D6B6DC9AA6AFB* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  IRenderGraphResource_tF24653A388C17849844C128C19C7A6599C7ADB7D** (*) (DynamicArray_1_t401F46C0081DE185BCAB1D30DE8D6B6DC9AA6AFB*, int32_t, const RuntimeMethod*))DynamicArray_1_get_Item_m7DDF1E462D1484149A4D812CAD717F816205FD44_gshared)(__this, ___0_index, method);
}
inline RuntimeObject* Activator_CreateInstance_TisRuntimeObject_m62506836177F0F862A8D619638BF37F48721F138 (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))Activator_CreateInstance_TisRuntimeObject_m62506836177F0F862A8D619638BF37F48721F138_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m16C827D0F6107B7998F6C99B57F7CC2F181E2198 (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m16C827D0F6107B7998F6C99B57F7CC2F181E2198_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisBoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485_m8F344250A2F9E6EE6DDBA6BA833BB36D0F272B66 (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisBoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485_m8F344250A2F9E6EE6DDBA6BA833BB36D0F272B66_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisRuntimeObject_m4E17F588B090C1DADAE2D986BDA407DECEAC020F (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisRuntimeObject_m4E17F588B090C1DADAE2D986BDA407DECEAC020F_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_m2C5F5CF80D13B041768C7845C5AAEEC02BB683BA (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_m2C5F5CF80D13B041768C7845C5AAEEC02BB683BA_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisRectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8_mF6949D9EDD480E6666CD975C66487AAD6ABC7D11 (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisRectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8_mF6949D9EDD480E6666CD975C66487AAD6ABC7D11_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisVector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_mC8EF710494C8986B279262C6C64947BE2C1DC55C (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisVector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_mC8EF710494C8986B279262C6C64947BE2C1DC55C_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_mB00220519A80AA5ACE36B7DBA2E6A6CB796302AF (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_mB00220519A80AA5ACE36B7DBA2E6A6CB796302AF_gshared)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m97C7D5E5DE74DC60A0ECAA914830BEDF2C46ACAA_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m97C7D5E5DE74DC60A0ECAA914830BEDF2C46ACAA_gshared_inline)(method);
}
inline int32_t UnsafeUtility_AlignOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB152D3C658FB48DEDB6E662EEB0C91018E7F2857 (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_AlignOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB152D3C658FB48DEDB6E662EEB0C91018E7F2857_gshared)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* Array_Resize_mC7BE2965DE3FCF4014D43B606D94951480A65380 (void* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, int64_t ___4_size, int32_t ___5_align, const RuntimeMethod* method) ;
inline int32_t UnsafeUtility_SizeOf_TisNativeQueueBlockHeader_tD74DEA5A5D8C910AA5ED04C5E89F2FE1B0521004_mD17298D011DA1F41116B52EA79F5E53E3C07037F_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisNativeQueueBlockHeader_tD74DEA5A5D8C910AA5ED04C5E89F2FE1B0521004_mD17298D011DA1F41116B52EA79F5E53E3C07037F_gshared_inline)(method);
}
inline int32_t UnsafeUtility_AlignOf_TisNativeQueueBlockHeader_tD74DEA5A5D8C910AA5ED04C5E89F2FE1B0521004_mB6891C7A8270EA99BA8C7616A4B23733FE8BED87 (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_AlignOf_TisNativeQueueBlockHeader_tD74DEA5A5D8C910AA5ED04C5E89F2FE1B0521004_mB6891C7A8270EA99BA8C7616A4B23733FE8BED87_gshared)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisNativeQueueBlockPoolData_t3A0B3E1B852D995248D51AB68660D1B367D28E87_mC7FEAA8F718320B4F881566EB9C8D910A41CC37A_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisNativeQueueBlockPoolData_t3A0B3E1B852D995248D51AB68660D1B367D28E87_mC7FEAA8F718320B4F881566EB9C8D910A41CC37A_gshared_inline)(method);
}
inline int32_t UnsafeUtility_AlignOf_TisNativeQueueBlockPoolData_t3A0B3E1B852D995248D51AB68660D1B367D28E87_m8EF809058620A5D5C36B4732089B9D4DA178136D (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_AlignOf_TisNativeQueueBlockPoolData_t3A0B3E1B852D995248D51AB68660D1B367D28E87_m8EF809058620A5D5C36B4732089B9D4DA178136D_gshared)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisNativeQueueData_t61B94D7FE48C5715DD5D0C8CB574F73BF15C6E52_m494294FC3C525306A1D00A1A452B1000C14A7D40_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisNativeQueueData_t61B94D7FE48C5715DD5D0C8CB574F73BF15C6E52_m494294FC3C525306A1D00A1A452B1000C14A7D40_gshared_inline)(method);
}
inline int32_t UnsafeUtility_AlignOf_TisNativeQueueData_t61B94D7FE48C5715DD5D0C8CB574F73BF15C6E52_mD305539B45883F475C5E06B9227D6142D41C6823 (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_AlignOf_TisNativeQueueData_t61B94D7FE48C5715DD5D0C8CB574F73BF15C6E52_mD305539B45883F475C5E06B9227D6142D41C6823_gshared)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisUnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4_mCF165A03E97D72A1EC00EA0FA1B0A1A9F3B6EF6B_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisUnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4_mCF165A03E97D72A1EC00EA0FA1B0A1A9F3B6EF6B_gshared_inline)(method);
}
inline int32_t UnsafeUtility_AlignOf_TisUnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4_mE84A0B9A63BCBBD40FD2A575AC555294A28A93A3 (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_AlignOf_TisUnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4_mE84A0B9A63BCBBD40FD2A575AC555294A28A93A3_gshared)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisMemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84_m4A0947EA519A2614EC19544513888A4DC5F42919_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisMemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84_m4A0947EA519A2614EC19544513888A4DC5F42919_gshared_inline)(method);
}
inline int32_t UnsafeUtility_AlignOf_TisMemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84_m6AD8B4EF31CDD94CA734378B1443806DAFE68A05 (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_AlignOf_TisMemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84_m6AD8B4EF31CDD94CA734378B1443806DAFE68A05_gshared)(method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t XXHash_Hash32_mDAC30AB830DFD291A7AA57B33B1424F7DBC972AB_inline (String_t* ___0_text, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t XXHash_Hash64_mDB605937592EA5AC4862D8FCE939459F5B7F133E_inline (String_t* ___0_text, const RuntimeMethod* method) ;
inline void List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4 (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4_gshared)(__this, ___0_item, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9 (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t XXHash_Hash32_m138B37A17F29CC75B22A5AE277C1223A76A53F9A_inline (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t XXHash_Hash64_m114637D3DC860457D89B4E70C47E6A53EAED7F73_inline (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t XXHash_Hash32_m5536481B50CD190C44DFAFF662A57E441A532AB0_inline (uint8_t* ___0_input, int32_t ___1_length, uint32_t ___2_seed, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t XXHash_Hash64_mB6D41A88BD9EE1A8485AF3BDF38732BBA1DA7DC7_inline (uint8_t* ___0_input, int32_t ___1_length, uint32_t ___2_seed, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualTreeUpdater_SetUpdater_TisIl2CppFullySharedGenericAny_m4EF351A8B23A4EE9E88C20E5398468F5AC304360_gshared (VisualTreeUpdater_tFDE7D9F9A146A26B2ED69565B7BD142B416AB9C9* __this, int32_t ___0_phase, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_T_t3D003580B0C7BDFA3E09B54DB86152417970C81A = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	void* L_6 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 1)));
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_T_t3D003580B0C7BDFA3E09B54DB86152417970C81A);
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_T_t3D003580B0C7BDFA3E09B54DB86152417970C81A);
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_T_t3D003580B0C7BDFA3E09B54DB86152417970C81A);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T_t3D003580B0C7BDFA3E09B54DB86152417970C81A);
	memset(V_0, 0, SizeOf_T_t3D003580B0C7BDFA3E09B54DB86152417970C81A);
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_T_t3D003580B0C7BDFA3E09B54DB86152417970C81A);
	memset(V_1, 0, SizeOf_T_t3D003580B0C7BDFA3E09B54DB86152417970C81A);
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		UpdaterArray_tF8D43D2A3598E7C17ABB5308E83FDECF1F36A449* L_0 = __this->___m_UpdaterArray;
		int32_t L_1 = ___0_phase;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = UpdaterArray_get_Item_m6DADA11557BD3FE2E6680F3C1F6F828DB4EE255C(L_0, L_1, NULL);
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B2_0 = L_3;
			goto IL_0013;
		}
		G_B1_0 = L_3;
	}
	{
		goto IL_0019;
	}

IL_0013:
	{
		NullCheck((RuntimeObject*)G_B2_0);
		InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)G_B2_0);
	}

IL_0019:
	{
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL, (Il2CppFullySharedGenericAny*)L_4);
		il2cpp_codegen_memcpy(V_1, L_4, SizeOf_T_t3D003580B0C7BDFA3E09B54DB86152417970C81A);
		BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303* L_5 = __this->___m_Panel;
		ConstrainedActionInvoker1< BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303* >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 2), L_6, (void*)(Il2CppFullySharedGenericAny*)V_1, L_5);
		il2cpp_codegen_memcpy(L_7, V_1, SizeOf_T_t3D003580B0C7BDFA3E09B54DB86152417970C81A);
		il2cpp_codegen_memcpy(V_0, L_7, SizeOf_T_t3D003580B0C7BDFA3E09B54DB86152417970C81A);
		UpdaterArray_tF8D43D2A3598E7C17ABB5308E83FDECF1F36A449* L_8 = __this->___m_UpdaterArray;
		int32_t L_9 = ___0_phase;
		il2cpp_codegen_memcpy(L_10, V_0, SizeOf_T_t3D003580B0C7BDFA3E09B54DB86152417970C81A);
		RuntimeObject* L_11 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), L_10);
		NullCheck(L_8);
		UpdaterArray_set_Item_m2961BC09E3C22E6D3887BB8E48A367BAEF847A11(L_8, L_9, (RuntimeObject*)L_11, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Volatile_Read_TisRuntimeObject_mDE75C7462350B2A7FB1546BCE22D13CBD69AC088_gshared (RuntimeObject** ___0_location, const RuntimeMethod* method) 
{
	{
		RuntimeObject** L_0 = ___0_location;
		VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99* L_1;
		L_1 = il2cpp_unsafe_as_ref<VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99>(L_0);
		RuntimeObject* L_2 = L_1->___Value;
		il2cpp_codegen_memory_barrier();
		RuntimeObject* L_3;
		L_3 = il2cpp_unsafe_as<RuntimeObject*>(L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Volatile_Write_TisRuntimeObject_mBB6C58646958F01615FEBF405DCE2A9926F81962_gshared (RuntimeObject** ___0_location, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject** L_0 = ___0_location;
		VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99* L_1;
		L_1 = il2cpp_unsafe_as_ref<VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99>(L_0);
		RuntimeObject* L_2 = ___1_value;
		il2cpp_codegen_memory_barrier();
		L_1->___Value = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___Value), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeParameter_GetValue_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m1EF476645F5850C9D1AA95CA55F741FBBDB735B6_gshared (VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	{
		NullCheck(((VolumeParameter_1_tBCB51FE341649CAB77E12B97823E7D31852372CF*)CastclassClass((RuntimeObject*)__this, il2cpp_rgctx_data(method->rgctx_data, 0))));
		bool L_0;
		L_0 = VirtualFuncInvoker0< bool >::Invoke(14, ((VolumeParameter_1_tBCB51FE341649CAB77E12B97823E7D31852372CF*)CastclassClass((RuntimeObject*)__this, il2cpp_rgctx_data(method->rgctx_data, 0))));
		V_0 = L_0;
		goto IL_000f;
	}

IL_000f:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F VolumeParameter_GetValue_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m8B7E31181FEC2F5B762A80FEDF27DAF31E73C30F_gshared (VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		NullCheck(((VolumeParameter_1_t548F25B8FDAED7E284E53FF27602B841970079FC*)CastclassClass((RuntimeObject*)__this, il2cpp_rgctx_data(method->rgctx_data, 0))));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		L_0 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(14, ((VolumeParameter_1_t548F25B8FDAED7E284E53FF27602B841970079FC*)CastclassClass((RuntimeObject*)__this, il2cpp_rgctx_data(method->rgctx_data, 0))));
		V_0 = L_0;
		goto IL_000f;
	}

IL_000f:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VolumeParameter_GetValue_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4319DCF1CDC5AEE67EE47027F2D95657332CBE54_gshared (VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	{
		NullCheck(((VolumeParameter_1_t7111FAD4FF4C5BAEA3D390725AF3BC9069DBB546*)CastclassClass((RuntimeObject*)__this, il2cpp_rgctx_data(method->rgctx_data, 0))));
		int32_t L_0;
		L_0 = VirtualFuncInvoker0< int32_t >::Invoke(14, ((VolumeParameter_1_t7111FAD4FF4C5BAEA3D390725AF3BC9069DBB546*)CastclassClass((RuntimeObject*)__this, il2cpp_rgctx_data(method->rgctx_data, 0))));
		V_0 = L_0;
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VolumeParameter_GetValue_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m2227A115A843BCB75A07DAA9250CD4A8BB6ECF94_gshared (VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	{
		NullCheck(((VolumeParameter_1_t77F022F5333E41A9053315BD571C993F8CC046F2*)CastclassClass((RuntimeObject*)__this, il2cpp_rgctx_data(method->rgctx_data, 0))));
		int32_t L_0;
		L_0 = VirtualFuncInvoker0< int32_t >::Invoke(14, ((VolumeParameter_1_t77F022F5333E41A9053315BD571C993F8CC046F2*)CastclassClass((RuntimeObject*)__this, il2cpp_rgctx_data(method->rgctx_data, 0))));
		V_0 = L_0;
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VolumeParameter_GetValue_TisRuntimeObject_m23656584F84F53EADAD298050CF103022E5994AF_gshared (VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	RuntimeObject* V_0 = NULL;
	{
		NullCheck(((VolumeParameter_1_t5E4D687B1DE10F23FA079D3967111740962E1076*)CastclassClass((RuntimeObject*)__this, il2cpp_rgctx_data(method->rgctx_data, 0))));
		RuntimeObject* L_0;
		L_0 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(14, ((VolumeParameter_1_t5E4D687B1DE10F23FA079D3967111740962E1076*)CastclassClass((RuntimeObject*)__this, il2cpp_rgctx_data(method->rgctx_data, 0))));
		V_0 = L_0;
		goto IL_000f;
	}

IL_000f:
	{
		RuntimeObject* L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float VolumeParameter_GetValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m726AF9294ED67B0B16638E5F5D846CE9C7F911DD_gshared (VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	float V_0 = 0.0f;
	{
		NullCheck(((VolumeParameter_1_t18B35E30089EFE0C2751A53FE6143F972EC9F9B8*)CastclassClass((RuntimeObject*)__this, il2cpp_rgctx_data(method->rgctx_data, 0))));
		float L_0;
		L_0 = VirtualFuncInvoker0< float >::Invoke(14, ((VolumeParameter_1_t18B35E30089EFE0C2751A53FE6143F972EC9F9B8*)CastclassClass((RuntimeObject*)__this, il2cpp_rgctx_data(method->rgctx_data, 0))));
		V_0 = L_0;
		goto IL_000f;
	}

IL_000f:
	{
		float L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 VolumeParameter_GetValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mD6257CDB298BD9F43258404B48F12F640076E5CF_gshared (VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		NullCheck(((VolumeParameter_1_tADB3F1E2F42E88F6F74B7FD1CE782B1098424D7B*)CastclassClass((RuntimeObject*)__this, il2cpp_rgctx_data(method->rgctx_data, 0))));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		L_0 = VirtualFuncInvoker0< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 >::Invoke(14, ((VolumeParameter_1_tADB3F1E2F42E88F6F74B7FD1CE782B1098424D7B*)CastclassClass((RuntimeObject*)__this, il2cpp_rgctx_data(method->rgctx_data, 0))));
		V_0 = L_0;
		goto IL_000f;
	}

IL_000f:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 VolumeParameter_GetValue_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA76DCA04631B12C65AAD65BAED699B30BB3C471B_gshared (VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		NullCheck(((VolumeParameter_1_tF55730717D62BD99642CBDBBD61DC4E5E5396E1C*)CastclassClass((RuntimeObject*)__this, il2cpp_rgctx_data(method->rgctx_data, 0))));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0;
		L_0 = VirtualFuncInvoker0< Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 >::Invoke(14, ((VolumeParameter_1_tF55730717D62BD99642CBDBBD61DC4E5E5396E1C*)CastclassClass((RuntimeObject*)__this, il2cpp_rgctx_data(method->rgctx_data, 0))));
		V_0 = L_0;
		goto IL_000f;
	}

IL_000f:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_GetValue_TisIl2CppFullySharedGenericAny_m1802EB8111365F0224F3D40314C1DDC085109D46_gshared (VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tC4A608EC837315BD32132F4783BBF36D10766FE4 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_tC4A608EC837315BD32132F4783BBF36D10766FE4);
	const Il2CppFullySharedGenericAny L_1 = L_0;
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T_tC4A608EC837315BD32132F4783BBF36D10766FE4);
	memset(V_0, 0, SizeOf_T_tC4A608EC837315BD32132F4783BBF36D10766FE4);
	{
		NullCheck(((VolumeParameter_1_tB1EA9187ACF6A0B2CAC6CF51C310D670594DCCD3*)CastclassClass((RuntimeObject*)__this, il2cpp_rgctx_data(method->rgctx_data, 0))));
		VirtualActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(14, ((VolumeParameter_1_tB1EA9187ACF6A0B2CAC6CF51C310D670594DCCD3*)CastclassClass((RuntimeObject*)__this, il2cpp_rgctx_data(method->rgctx_data, 0))), (Il2CppFullySharedGenericAny*)L_0);
		il2cpp_codegen_memcpy(V_0, L_0, SizeOf_T_tC4A608EC837315BD32132F4783BBF36D10766FE4);
		goto IL_000f;
	}

IL_000f:
	{
		il2cpp_codegen_memcpy(L_1, V_0, SizeOf_T_tC4A608EC837315BD32132F4783BBF36D10766FE4);
		il2cpp_codegen_memcpy(il2cppRetVal, L_1, SizeOf_T_tC4A608EC837315BD32132F4783BBF36D10766FE4);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VolumeProfile_Add_TisRuntimeObject_mD0EDC1447948786E0714DFE904604B0761230922_gshared (VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1* __this, bool ___0_overrides, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		bool L_2 = ___0_overrides;
		VolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1* L_3;
		L_3 = VolumeProfile_Add_mDF517026750FFACF3E21FCC135510FEBEB12BE1B(__this, L_1, L_2, NULL);
		V_0 = ((RuntimeObject*)Castclass((RuntimeObject*)L_3, il2cpp_rgctx_data(method->rgctx_data, 1)));
		goto IL_001a;
	}

IL_001a:
	{
		RuntimeObject* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeProfile_Has_TisRuntimeObject_mF9E37024B032DF74896C8AC57078582521F0D901_gshared (VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	bool V_0 = false;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		bool L_2;
		L_2 = VolumeProfile_Has_m58F53E1D8EC2C8D8D97ADF7AEEB6C432FFE9C8BC(__this, L_1, NULL);
		V_0 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeProfile_Remove_TisRuntimeObject_m44476A33C4850BD8492B325354403A82579B71AC_gshared (VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		VolumeProfile_Remove_m9E5CA5F7CA22167AD235A88515C4315F68A579E7(__this, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeProfile_TryGet_TisRuntimeObject_m6394BC3A9A95358ECE114A783689654E1E2DAC44_gshared (VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1* __this, RuntimeObject** ___0_component, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	bool V_0 = false;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeObject** L_2 = ___0_component;
		bool L_3;
		L_3 = VolumeProfile_TryGet_TisRuntimeObject_m94F2608D83F12FCFA1661C7D7EF19C26A0515933(__this, L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_0 = L_3;
		goto IL_0015;
	}

IL_0015:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeProfile_TryGet_TisRuntimeObject_m94F2608D83F12FCFA1661C7D7EF19C26A0515933_gshared (VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1* __this, Type_t* ___0_type, RuntimeObject** ___1_component, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mCE78820A119B5A3974D397DF20EACCF0AE77A607_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mCDC4D51017A6FCCB56125B31477498D37FBC4911_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m3E2C62A181DBC8F1232AE097D030451DC49CDC59_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m7FFBBF9B40BF65391F615C1718B33A309DBEC760_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Enumerator_t28274C6C8959D52D00A7A29993ED244DA2644355 V_0;
	memset((&V_0), 0, sizeof(V_0));
	VolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	{
		RuntimeObject** L_0 = ___1_component;
		il2cpp_codegen_initobj(L_0, sizeof(RuntimeObject*));
		List_1_t602BCD639AA637A6C0BB45C136DD5458DBE18064* L_1 = __this->___components;
		NullCheck(L_1);
		Enumerator_t28274C6C8959D52D00A7A29993ED244DA2644355 L_2;
		L_2 = List_1_GetEnumerator_m7FFBBF9B40BF65391F615C1718B33A309DBEC760(L_1, List_1_GetEnumerator_m7FFBBF9B40BF65391F615C1718B33A309DBEC760_RuntimeMethod_var);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_004d:
			{
				Enumerator_Dispose_mCE78820A119B5A3974D397DF20EACCF0AE77A607((&V_0), Enumerator_Dispose_mCE78820A119B5A3974D397DF20EACCF0AE77A607_RuntimeMethod_var);
				return;
			}
		});
		try
		{
			{
				goto IL_0042_1;
			}

IL_0017_1:
			{
				VolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1* L_3;
				L_3 = Enumerator_get_Current_m3E2C62A181DBC8F1232AE097D030451DC49CDC59_inline((&V_0), Enumerator_get_Current_m3E2C62A181DBC8F1232AE097D030451DC49CDC59_RuntimeMethod_var);
				V_1 = L_3;
				VolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1* L_4 = V_1;
				NullCheck((RuntimeObject*)L_4);
				Type_t* L_5;
				L_5 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_4, NULL);
				Type_t* L_6 = ___0_type;
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				bool L_7;
				L_7 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_5, L_6, NULL);
				V_2 = L_7;
				bool L_8 = V_2;
				if (!L_8)
				{
					goto IL_0041_1;
				}
			}
			{
				RuntimeObject** L_9 = ___1_component;
				VolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1* L_10 = V_1;
				*(RuntimeObject**)L_9 = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->rgctx_data, 1)));
				Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_9, (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->rgctx_data, 1))));
				V_3 = (bool)1;
				goto IL_0060;
			}

IL_0041_1:
			{
			}

IL_0042_1:
			{
				bool L_11;
				L_11 = Enumerator_MoveNext_mCDC4D51017A6FCCB56125B31477498D37FBC4911((&V_0), Enumerator_MoveNext_mCDC4D51017A6FCCB56125B31477498D37FBC4911_RuntimeMethod_var);
				if (L_11)
				{
					goto IL_0017_1;
				}
			}
			{
				goto IL_005c;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005c:
	{
		V_3 = (bool)0;
		goto IL_0060;
	}

IL_0060:
	{
		bool L_12 = V_3;
		return L_12;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeProfile_TryGetAllSubclassOf_TisRuntimeObject_m9502626D753D72F3D469FAA2A74179B0D5DD5451_gshared (VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1* __this, Type_t* ___0_type, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___1_result, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Assert_IsNotNull_TisList_1_t602BCD639AA637A6C0BB45C136DD5458DBE18064_m6503DF58750A341F8B75EFD5120342F9F04292C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mCE78820A119B5A3974D397DF20EACCF0AE77A607_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mCDC4D51017A6FCCB56125B31477498D37FBC4911_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m3E2C62A181DBC8F1232AE097D030451DC49CDC59_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m7FFBBF9B40BF65391F615C1718B33A309DBEC760_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	Enumerator_t28274C6C8959D52D00A7A29993ED244DA2644355 V_1;
	memset((&V_1), 0, sizeof(V_1));
	VolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	{
		List_1_t602BCD639AA637A6C0BB45C136DD5458DBE18064* L_0 = __this->___components;
		il2cpp_codegen_runtime_class_init_inline(Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		Assert_IsNotNull_TisList_1_t602BCD639AA637A6C0BB45C136DD5458DBE18064_m6503DF58750A341F8B75EFD5120342F9F04292C1(L_0, Assert_IsNotNull_TisList_1_t602BCD639AA637A6C0BB45C136DD5458DBE18064_m6503DF58750A341F8B75EFD5120342F9F04292C1_RuntimeMethod_var);
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_1 = ___1_result;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_inline(L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_2;
		List_1_t602BCD639AA637A6C0BB45C136DD5458DBE18064* L_3 = __this->___components;
		NullCheck(L_3);
		Enumerator_t28274C6C8959D52D00A7A29993ED244DA2644355 L_4;
		L_4 = List_1_GetEnumerator_m7FFBBF9B40BF65391F615C1718B33A309DBEC760(L_3, List_1_GetEnumerator_m7FFBBF9B40BF65391F615C1718B33A309DBEC760_RuntimeMethod_var);
		V_1 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0055:
			{
				Enumerator_Dispose_mCE78820A119B5A3974D397DF20EACCF0AE77A607((&V_1), Enumerator_Dispose_mCE78820A119B5A3974D397DF20EACCF0AE77A607_RuntimeMethod_var);
				return;
			}
		});
		try
		{
			{
				goto IL_004a_1;
			}

IL_0023_1:
			{
				VolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1* L_5;
				L_5 = Enumerator_get_Current_m3E2C62A181DBC8F1232AE097D030451DC49CDC59_inline((&V_1), Enumerator_get_Current_m3E2C62A181DBC8F1232AE097D030451DC49CDC59_RuntimeMethod_var);
				V_2 = L_5;
				VolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1* L_6 = V_2;
				NullCheck((RuntimeObject*)L_6);
				Type_t* L_7;
				L_7 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_6, NULL);
				Type_t* L_8 = ___0_type;
				NullCheck(L_7);
				bool L_9;
				L_9 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(20, L_7, L_8);
				V_3 = L_9;
				bool L_10 = V_3;
				if (!L_10)
				{
					goto IL_0049_1;
				}
			}
			{
				List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_11 = ___1_result;
				VolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1* L_12 = V_2;
				NullCheck(L_11);
				List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_inline(L_11, ((RuntimeObject*)Castclass((RuntimeObject*)L_12, il2cpp_rgctx_data(method->rgctx_data, 2))), il2cpp_rgctx_method(method->rgctx_data, 3));
			}

IL_0049_1:
			{
			}

IL_004a_1:
			{
				bool L_13;
				L_13 = Enumerator_MoveNext_mCDC4D51017A6FCCB56125B31477498D37FBC4911((&V_1), Enumerator_MoveNext_mCDC4D51017A6FCCB56125B31477498D37FBC4911_RuntimeMethod_var);
				if (L_13)
				{
					goto IL_0023_1;
				}
			}
			{
				goto IL_0064;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0064:
	{
		int32_t L_14 = V_0;
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_15 = ___1_result;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_inline(L_15, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_4 = (bool)((((int32_t)((((int32_t)L_14) == ((int32_t)L_16))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0074;
	}

IL_0074:
	{
		bool L_17 = V_4;
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeProfile_TryGetSubclassOf_TisRuntimeObject_mF7DC89AE4F4DE78BE048D236D69F6638DE2D3DFC_gshared (VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1* __this, Type_t* ___0_type, RuntimeObject** ___1_component, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mCE78820A119B5A3974D397DF20EACCF0AE77A607_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mCDC4D51017A6FCCB56125B31477498D37FBC4911_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m3E2C62A181DBC8F1232AE097D030451DC49CDC59_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m7FFBBF9B40BF65391F615C1718B33A309DBEC760_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	Enumerator_t28274C6C8959D52D00A7A29993ED244DA2644355 V_0;
	memset((&V_0), 0, sizeof(V_0));
	VolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	{
		RuntimeObject** L_0 = ___1_component;
		il2cpp_codegen_initobj(L_0, sizeof(RuntimeObject*));
		List_1_t602BCD639AA637A6C0BB45C136DD5458DBE18064* L_1 = __this->___components;
		NullCheck(L_1);
		Enumerator_t28274C6C8959D52D00A7A29993ED244DA2644355 L_2;
		L_2 = List_1_GetEnumerator_m7FFBBF9B40BF65391F615C1718B33A309DBEC760(L_1, List_1_GetEnumerator_m7FFBBF9B40BF65391F615C1718B33A309DBEC760_RuntimeMethod_var);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_004d:
			{
				Enumerator_Dispose_mCE78820A119B5A3974D397DF20EACCF0AE77A607((&V_0), Enumerator_Dispose_mCE78820A119B5A3974D397DF20EACCF0AE77A607_RuntimeMethod_var);
				return;
			}
		});
		try
		{
			{
				goto IL_0042_1;
			}

IL_0017_1:
			{
				VolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1* L_3;
				L_3 = Enumerator_get_Current_m3E2C62A181DBC8F1232AE097D030451DC49CDC59_inline((&V_0), Enumerator_get_Current_m3E2C62A181DBC8F1232AE097D030451DC49CDC59_RuntimeMethod_var);
				V_1 = L_3;
				VolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1* L_4 = V_1;
				NullCheck((RuntimeObject*)L_4);
				Type_t* L_5;
				L_5 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_4, NULL);
				Type_t* L_6 = ___0_type;
				NullCheck(L_5);
				bool L_7;
				L_7 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(20, L_5, L_6);
				V_2 = L_7;
				bool L_8 = V_2;
				if (!L_8)
				{
					goto IL_0041_1;
				}
			}
			{
				RuntimeObject** L_9 = ___1_component;
				VolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1* L_10 = V_1;
				*(RuntimeObject**)L_9 = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->rgctx_data, 1)));
				Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_9, (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->rgctx_data, 1))));
				V_3 = (bool)1;
				goto IL_0060;
			}

IL_0041_1:
			{
			}

IL_0042_1:
			{
				bool L_11;
				L_11 = Enumerator_MoveNext_mCDC4D51017A6FCCB56125B31477498D37FBC4911((&V_0), Enumerator_MoveNext_mCDC4D51017A6FCCB56125B31477498D37FBC4911_RuntimeMethod_var);
				if (L_11)
				{
					goto IL_0017_1;
				}
			}
			{
				goto IL_005c;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005c:
	{
		V_3 = (bool)0;
		goto IL_0060;
	}

IL_0060:
	{
		bool L_12 = V_3;
		return L_12;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VolumeStack_GetComponent_TisRuntimeObject_m8D5395D64A3CF1D54202CD9C021F6515580DB6AE_gshared (VolumeStack_t5DE94743BDB63D97EF5587DBDAE46468233F36E8* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	VolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		VolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1* L_2;
		L_2 = VolumeStack_GetComponent_mC7A2CE27A8A6F6A6A4B4B6EF14E190085A343844(__this, L_1, NULL);
		V_0 = L_2;
		VolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1* L_3 = V_0;
		V_1 = ((RuntimeObject*)Castclass((RuntimeObject*)L_3, il2cpp_rgctx_data(method->rgctx_data, 1)));
		goto IL_001b;
	}

IL_001b:
	{
		RuntimeObject* L_4 = V_1;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebContext_GetData_TisIl2CppFullySharedGenericAny_mF0F132305DF6199AB94607E2C2AD6F44D385DDB7_gshared (WebContext_t2A58FFA4CEB780A4B9F7FA93D5E0C0224F7F1339* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t3DAB7BE2253058B8AE077202DEAB3A779405A0BF = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_t3DAB7BE2253058B8AE077202DEAB3A779405A0BF);
	const Il2CppFullySharedGenericAny L_2 = L_1;
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T_t3DAB7BE2253058B8AE077202DEAB3A779405A0BF);
	memset(V_0, 0, SizeOf_T_t3DAB7BE2253058B8AE077202DEAB3A779405A0BF);
	{
		String_t* L_0 = __this->___data;
		InvokerActionInvoker2< String_t*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL, L_0, (Il2CppFullySharedGenericAny*)L_1);
		il2cpp_codegen_memcpy(V_0, L_1, SizeOf_T_t3DAB7BE2253058B8AE077202DEAB3A779405A0BF);
		goto IL_000f;
	}

IL_000f:
	{
		il2cpp_codegen_memcpy(L_2, V_0, SizeOf_T_t3DAB7BE2253058B8AE077202DEAB3A779405A0BF);
		il2cpp_codegen_memcpy(il2cppRetVal, L_2, SizeOf_T_t3DAB7BE2253058B8AE077202DEAB3A779405A0BF);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebContext_SendResponse_TisIl2CppFullySharedGenericAny_m831FAA6B0D25DB2A95E4117CD85893C336409E65_gshared (WebContext_t2A58FFA4CEB780A4B9F7FA93D5E0C0224F7F1339* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t87D70352E4DA911A086566F31B2A062F0D40AC31 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t87D70352E4DA911A086566F31B2A062F0D40AC31);
	String_t* V_0 = NULL;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___0_value : &___0_value), SizeOf_T_t87D70352E4DA911A086566F31B2A062F0D40AC31);
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), L_0);
		String_t* L_2;
		L_2 = WebTool_ToJson_m7170F711903B7AE7A4AA402437BC2D52795CA224(L_1, NULL);
		V_0 = L_2;
		String_t* L_3 = V_0;
		WebContext_SendResponse_m8FB3315588D61AFE7C83D60F8B50158060E356AF(__this, L_3, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebResponse_GetData_TisIl2CppFullySharedGenericAny_m739CE59923EE50290B6AC30D9D331961E7FC7534_gshared (WebResponse_t322F22D962A9D03D9CE5F86C1F0CCCB98CE8A20C* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t1316B0D71A139EF97D1FB74CC2DE990427454A03 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_t1316B0D71A139EF97D1FB74CC2DE990427454A03);
	const Il2CppFullySharedGenericAny L_2 = L_1;
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T_t1316B0D71A139EF97D1FB74CC2DE990427454A03);
	memset(V_0, 0, SizeOf_T_t1316B0D71A139EF97D1FB74CC2DE990427454A03);
	{
		String_t* L_0 = __this->___data;
		InvokerActionInvoker2< String_t*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL, L_0, (Il2CppFullySharedGenericAny*)L_1);
		il2cpp_codegen_memcpy(V_0, L_1, SizeOf_T_t1316B0D71A139EF97D1FB74CC2DE990427454A03);
		goto IL_000f;
	}

IL_000f:
	{
		il2cpp_codegen_memcpy(L_2, V_0, SizeOf_T_t1316B0D71A139EF97D1FB74CC2DE990427454A03);
		il2cpp_codegen_memcpy(il2cppRetVal, L_2, SizeOf_T_t1316B0D71A139EF97D1FB74CC2DE990427454A03);
		return;
	}
}
IL2CPP_EXTERN_C  void WebResponse_GetData_TisIl2CppFullySharedGenericAny_m739CE59923EE50290B6AC30D9D331961E7FC7534_AdjustorThunk (RuntimeObject* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	WebResponse_t322F22D962A9D03D9CE5F86C1F0CCCB98CE8A20C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<WebResponse_t322F22D962A9D03D9CE5F86C1F0CCCB98CE8A20C*>(__this + _offset);
	WebResponse_GetData_TisIl2CppFullySharedGenericAny_m739CE59923EE50290B6AC30D9D331961E7FC7534(_thisAdjusted, il2cppRetVal, method);
	return;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* WebTool_JsonToArray_TisIl2CppFullySharedGenericAny_m4E4216A03D2D9CEE5BB687CCD83434CDCA96CEA7_gshared (String_t* ___0_json, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral97B2D64205979E491CAA681CCAAE8EA55DD2AF0B);
		il2cpp_rgctx_method_init(method);
	}
	ListJson_1_t78121586879DA543E2D43DE6569B16DE1D05C539* V_0 = NULL;
	String_t* V_1 = NULL;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		ListJson_1_t78121586879DA543E2D43DE6569B16DE1D05C539* L_0 = (ListJson_1_t78121586879DA543E2D43DE6569B16DE1D05C539*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		((  void (*) (ListJson_1_t78121586879DA543E2D43DE6569B16DE1D05C539*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_0;
		ListJson_1_t78121586879DA543E2D43DE6569B16DE1D05C539* L_1 = V_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_2 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 2), (uint32_t)0);
		NullCheck(L_1);
		L_1->___list = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___list), (void*)L_2);
	}
	try
	{
		String_t* L_3 = ___0_json;
		String_t* L_4;
		L_4 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral97B2D64205979E491CAA681CCAAE8EA55DD2AF0B, L_3, _stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30, NULL);
		V_1 = L_4;
		String_t* L_5 = V_1;
		ListJson_1_t78121586879DA543E2D43DE6569B16DE1D05C539* L_6;
		L_6 = InvokerFuncInvoker1< ListJson_1_t78121586879DA543E2D43DE6569B16DE1D05C539*, String_t* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)), il2cpp_rgctx_method(method->rgctx_data, 4), NULL, L_5);
		V_0 = L_6;
		ListJson_1_t78121586879DA543E2D43DE6569B16DE1D05C539* L_7 = V_0;
		NullCheck(L_7);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_8 = L_7->___list;
		V_2 = L_8;
		goto IL_0043;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0035;
		}
		throw e;
	}

CATCH_0035:
	{
		Exception_t* L_9 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_003a;
	}

IL_003a:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_10 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 2), (uint32_t)0);
		V_2 = L_10;
		goto IL_0043;
	}

IL_0043:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_11 = V_2;
		return L_11;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WebTool_JsonToObject_TisRuntimeObject_m2AAABA72FF8A235E05D8D60EF9E57385D07F71C0_gshared (String_t* ___0_json, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeObject* L_2;
		L_2 = Activator_CreateInstance_mFF030428C64FDDFACC74DFAC97388A1C628BFBCF(L_1, NULL);
		V_0 = ((RuntimeObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->rgctx_data, 1)));
	}
	try
	{
		String_t* L_3 = ___0_json;
		RuntimeObject* L_4;
		L_4 = JsonUtility_FromJson_TisRuntimeObject_m0CCF0FE109BF4C85AECC9C5D0DBB43422A24FB40(L_3, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_0 = L_4;
		goto IL_0026;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0021;
		}
		throw e;
	}

CATCH_0021:
	{
		Exception_t* L_5 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0026;
	}

IL_0026:
	{
		RuntimeObject* L_6 = V_0;
		V_1 = L_6;
		goto IL_002a;
	}

IL_002a:
	{
		RuntimeObject* L_7 = V_1;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebTool_JsonToObject_TisIl2CppFullySharedGenericAny_m34DB02B6EE6C2EE9F89169442802196CAE89ED9D_gshared (String_t* ___0_json, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_T_t40926D6D650866029F57F2391F65C1C363720DCC = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_t40926D6D650866029F57F2391F65C1C363720DCC);
	const Il2CppFullySharedGenericAny L_6 = L_3;
	const Il2CppFullySharedGenericAny L_8 = L_3;
	const Il2CppFullySharedGenericAny L_9 = L_3;
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T_t40926D6D650866029F57F2391F65C1C363720DCC);
	memset(V_0, 0, SizeOf_T_t40926D6D650866029F57F2391F65C1C363720DCC);
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_T_t40926D6D650866029F57F2391F65C1C363720DCC);
	memset(V_1, 0, SizeOf_T_t40926D6D650866029F57F2391F65C1C363720DCC);
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeObject* L_2;
		L_2 = Activator_CreateInstance_mFF030428C64FDDFACC74DFAC97388A1C628BFBCF(L_1, NULL);
		void* L_4 = UnBox_Any(L_2, il2cpp_rgctx_data(method->rgctx_data, 1), L_3);
		il2cpp_codegen_memcpy(V_0, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4))), SizeOf_T_t40926D6D650866029F57F2391F65C1C363720DCC);
	}
	try
	{
		String_t* L_5 = ___0_json;
		InvokerActionInvoker2< String_t*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_5, (Il2CppFullySharedGenericAny*)L_6);
		il2cpp_codegen_memcpy(V_0, L_6, SizeOf_T_t40926D6D650866029F57F2391F65C1C363720DCC);
		goto IL_0026;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0021;
		}
		throw e;
	}

CATCH_0021:
	{
		Exception_t* L_7 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0026;
	}

IL_0026:
	{
		il2cpp_codegen_memcpy(L_8, V_0, SizeOf_T_t40926D6D650866029F57F2391F65C1C363720DCC);
		il2cpp_codegen_memcpy(V_1, L_8, SizeOf_T_t40926D6D650866029F57F2391F65C1C363720DCC);
		goto IL_002a;
	}

IL_002a:
	{
		il2cpp_codegen_memcpy(L_9, V_1, SizeOf_T_t40926D6D650866029F57F2391F65C1C363720DCC);
		il2cpp_codegen_memcpy(il2cppRetVal, L_9, SizeOf_T_t40926D6D650866029F57F2391F65C1C363720DCC);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t XXHash_Hash32_TisIl2CppFullySharedGenericAny_m3BB7E8F6C41ED23D335750682CEF5402555772B9_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		uint32_t L_2;
		L_2 = XXHash_Hash32_m32173EED06C4A1A3F85AA601FE079202964153FF_inline(L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t XXHash_Hash64_TisIl2CppFullySharedGenericAny_m1E52D2460D537941A0F1F746CB9CD21B86FF6361_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		uint64_t L_2;
		L_2 = XXHash_Hash64_mED063B27131C19B79F8CE60BC883B3A2463331D8_inline(L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Expression_Evaluate_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m078E1EC84AFDC45614AC23E12723A0B785941D40_gshared (Expression_t24E9476A15D0D7F6495CF8292DA48C63C871E4B7* __this, double* ___0_value, int32_t ___1_index, int32_t ___2_count, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExpressionEvaluator_tF912A1FA6CB7EA697DFA7926E78D808A446B48F0_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	bool V_0 = false;
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = __this->___rpnTokens;
		double* L_1 = ___0_value;
		int32_t L_2 = ___1_index;
		int32_t L_3 = ___2_count;
		il2cpp_codegen_runtime_class_init_inline(ExpressionEvaluator_tF912A1FA6CB7EA697DFA7926E78D808A446B48F0_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = ExpressionEvaluator_EvaluateTokens_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m791767867653D0CCE2BEFF83F336A41B5B3A718E(L_0, L_1, L_2, L_3, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_4;
		goto IL_0012;
	}

IL_0012:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Expression_Evaluate_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m838397FA34A03D1C68D150CC95FD210252FEC377_gshared (Expression_t24E9476A15D0D7F6495CF8292DA48C63C871E4B7* __this, int64_t* ___0_value, int32_t ___1_index, int32_t ___2_count, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExpressionEvaluator_tF912A1FA6CB7EA697DFA7926E78D808A446B48F0_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	bool V_0 = false;
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = __this->___rpnTokens;
		int64_t* L_1 = ___0_value;
		int32_t L_2 = ___1_index;
		int32_t L_3 = ___2_count;
		il2cpp_codegen_runtime_class_init_inline(ExpressionEvaluator_tF912A1FA6CB7EA697DFA7926E78D808A446B48F0_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = ExpressionEvaluator_EvaluateTokens_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m7418F7A8835B2770EF83F1D52F2723897CD76DEB(L_0, L_1, L_2, L_3, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_4;
		goto IL_0012;
	}

IL_0012:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Expression_Evaluate_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m58D75192AF2281079E2FDE4034707E9883147B2C_gshared (Expression_t24E9476A15D0D7F6495CF8292DA48C63C871E4B7* __this, uint64_t* ___0_value, int32_t ___1_index, int32_t ___2_count, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExpressionEvaluator_tF912A1FA6CB7EA697DFA7926E78D808A446B48F0_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	bool V_0 = false;
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = __this->___rpnTokens;
		uint64_t* L_1 = ___0_value;
		int32_t L_2 = ___1_index;
		int32_t L_3 = ___2_count;
		il2cpp_codegen_runtime_class_init_inline(ExpressionEvaluator_tF912A1FA6CB7EA697DFA7926E78D808A446B48F0_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = ExpressionEvaluator_EvaluateTokens_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mCFCF758DECB276DBCB0A8B83BAE195EF3B974780(L_0, L_1, L_2, L_3, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_4;
		goto IL_0012;
	}

IL_0012:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Expression_Evaluate_TisIl2CppFullySharedGenericAny_mC962ADA59143EB4298C3AE46F923C4552B01A4CC_gshared (Expression_t24E9476A15D0D7F6495CF8292DA48C63C871E4B7* __this, Il2CppFullySharedGenericAny* ___0_value, int32_t ___1_index, int32_t ___2_count, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExpressionEvaluator_tF912A1FA6CB7EA697DFA7926E78D808A446B48F0_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	bool V_0 = false;
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = __this->___rpnTokens;
		Il2CppFullySharedGenericAny* L_1 = ___0_value;
		int32_t L_2 = ___1_index;
		int32_t L_3 = ___2_count;
		il2cpp_codegen_runtime_class_init_inline(ExpressionEvaluator_tF912A1FA6CB7EA697DFA7926E78D808A446B48F0_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = ((  bool (*) (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, Il2CppFullySharedGenericAny*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, L_1, L_2, L_3, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_4;
		goto IL_0012;
	}

IL_0012:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sorting_U3CMedian3PivotU3Eg__SwapU7C2_0_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m2B2B04012DE1B591C8E7AD4765ECB8EF3790F795_gshared (int32_t ___0_a, int32_t ___1_b, U3CU3Ec__DisplayClass2_0_1_t41073816D00B5468033D7AA727FBFFB73E7C9BA2* ___2_p, const RuntimeMethod* method) 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		U3CU3Ec__DisplayClass2_0_1_t41073816D00B5468033D7AA727FBFFB73E7C9BA2* L_0 = ___2_p;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_1 = L_0->___data;
		int32_t L_2 = ___0_a;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = L_4;
		U3CU3Ec__DisplayClass2_0_1_t41073816D00B5468033D7AA727FBFFB73E7C9BA2* L_5 = ___2_p;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_6 = L_5->___data;
		int32_t L_7 = ___0_a;
		U3CU3Ec__DisplayClass2_0_1_t41073816D00B5468033D7AA727FBFFB73E7C9BA2* L_8 = ___2_p;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_9 = L_8->___data;
		int32_t L_10 = ___1_b;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3)L_12);
		U3CU3Ec__DisplayClass2_0_1_t41073816D00B5468033D7AA727FBFFB73E7C9BA2* L_13 = ___2_p;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_14 = L_13->___data;
		int32_t L_15 = ___1_b;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_16 = V_0;
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(L_15), (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3)L_16);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sorting_U3CMedian3PivotU3Eg__SwapU7C2_0_TisIl2CppFullySharedGenericAny_m2C056932E189D5E31D1107D28ABA7A6A5B5EC099_gshared (int32_t ___0_a, int32_t ___1_b, U3CU3Ec__DisplayClass2_0_1_t95D21073081C2AD9435E6E2ED2FD63B720ABF032* ___2_p, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tDB7A5E7DABCFD3E23853235D7F359DE185A4D541 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 3));
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_T_tDB7A5E7DABCFD3E23853235D7F359DE185A4D541);
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_T_tDB7A5E7DABCFD3E23853235D7F359DE185A4D541);
	const Il2CppFullySharedGenericAny L_16 = alloca(SizeOf_T_tDB7A5E7DABCFD3E23853235D7F359DE185A4D541);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T_tDB7A5E7DABCFD3E23853235D7F359DE185A4D541);
	memset(V_0, 0, SizeOf_T_tDB7A5E7DABCFD3E23853235D7F359DE185A4D541);
	{
		U3CU3Ec__DisplayClass2_0_1_t95D21073081C2AD9435E6E2ED2FD63B720ABF032* L_0 = ___2_p;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = L_0->___data;
		int32_t L_2 = ___0_a;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		il2cpp_codegen_memcpy(L_4, (L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)), SizeOf_T_tDB7A5E7DABCFD3E23853235D7F359DE185A4D541);
		il2cpp_codegen_memcpy(V_0, L_4, SizeOf_T_tDB7A5E7DABCFD3E23853235D7F359DE185A4D541);
		U3CU3Ec__DisplayClass2_0_1_t95D21073081C2AD9435E6E2ED2FD63B720ABF032* L_5 = ___2_p;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = L_5->___data;
		int32_t L_7 = ___0_a;
		U3CU3Ec__DisplayClass2_0_1_t95D21073081C2AD9435E6E2ED2FD63B720ABF032* L_8 = ___2_p;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_9 = L_8->___data;
		int32_t L_10 = ___1_b;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		il2cpp_codegen_memcpy(L_12, (L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)), SizeOf_T_tDB7A5E7DABCFD3E23853235D7F359DE185A4D541);
		NullCheck(L_6);
		il2cpp_codegen_memcpy((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)), L_12, SizeOf_T_tDB7A5E7DABCFD3E23853235D7F359DE185A4D541);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 3), (void**)(L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)), (void*)L_12);
		U3CU3Ec__DisplayClass2_0_1_t95D21073081C2AD9435E6E2ED2FD63B720ABF032* L_13 = ___2_p;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_14 = L_13->___data;
		int32_t L_15 = ___1_b;
		il2cpp_codegen_memcpy(L_16, V_0, SizeOf_T_tDB7A5E7DABCFD3E23853235D7F359DE185A4D541);
		NullCheck(L_14);
		il2cpp_codegen_memcpy((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)), L_16, SizeOf_T_tDB7A5E7DABCFD3E23853235D7F359DE185A4D541);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 3), (void**)(L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)), (void*)L_16);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sorting_U3CMedian3PivotU3Eg__SwapU7C2_0_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_m06FED96568508A808BFC2F0CB6D49F45194E6051_gshared (int32_t ___0_a, int32_t ___1_b, U3CU3Ec__DisplayClass2_0_1_tC4E3D65CA470C2F2DB85D9B32B717BE3200D4597* ___2_p, const RuntimeMethod* method) 
{
	LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		U3CU3Ec__DisplayClass2_0_1_tC4E3D65CA470C2F2DB85D9B32B717BE3200D4597* L_0 = ___2_p;
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_1 = L_0->___data;
		int32_t L_2 = ___0_a;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = L_4;
		U3CU3Ec__DisplayClass2_0_1_tC4E3D65CA470C2F2DB85D9B32B717BE3200D4597* L_5 = ___2_p;
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_6 = L_5->___data;
		int32_t L_7 = ___0_a;
		U3CU3Ec__DisplayClass2_0_1_tC4E3D65CA470C2F2DB85D9B32B717BE3200D4597* L_8 = ___2_p;
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_9 = L_8->___data;
		int32_t L_10 = ___1_b;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2)L_12);
		U3CU3Ec__DisplayClass2_0_1_tC4E3D65CA470C2F2DB85D9B32B717BE3200D4597* L_13 = ___2_p;
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_14 = L_13->___data;
		int32_t L_15 = ___1_b;
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_16 = V_0;
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(L_15), (LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2)L_16);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sorting_InsertionSort_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m6B06894C5FA146D1CCE7ECBC21F553F16F2E96F5_gshared (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___0_data, int32_t ___1_start, int32_t ___2_end, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* ___3_compare, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	int32_t G_B6_0 = 0;
	{
		int32_t L_0 = ___1_start;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_1 = ___0_data;
		NullCheck(L_1);
		il2cpp_codegen_runtime_class_init_inline(Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		Assert_IsTrue_mE42C53B7220324D1FBAFB7AE48A7D8DD7796A663((bool)((((int64_t)((int64_t)(uint64_t)((uint32_t)L_0))) < ((int64_t)((int64_t)((int32_t)(((RuntimeArray*)L_1)->max_length)))))? 1 : 0), NULL);
		int32_t L_2 = ___2_end;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_3 = ___0_data;
		NullCheck(L_3);
		Assert_IsTrue_mE42C53B7220324D1FBAFB7AE48A7D8DD7796A663((bool)((((int64_t)((int64_t)(uint64_t)((uint32_t)L_2))) < ((int64_t)((int64_t)((int32_t)(((RuntimeArray*)L_3)->max_length)))))? 1 : 0), NULL);
		int32_t L_4 = ___1_start;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 1));
		goto IL_0073;
	}

IL_0023:
	{
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_5 = ___0_data;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_1 = L_8;
		int32_t L_9 = V_0;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_9, 1));
		goto IL_0048;
	}

IL_0032:
	{
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_10 = ___0_data;
		int32_t L_11 = V_2;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_12 = ___0_data;
		int32_t L_13 = V_2;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_11, 1))), (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3)L_15);
		int32_t L_16 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_16, 1));
	}

IL_0048:
	{
		int32_t L_17 = V_2;
		if ((((int32_t)L_17) < ((int32_t)0)))
		{
			goto IL_005f;
		}
	}
	{
		Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* L_18 = ___3_compare;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_19 = V_1;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_20 = ___0_data;
		int32_t L_21 = V_2;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		NullCheck(L_18);
		int32_t L_24;
		L_24 = Func_3_Invoke_mE6CD106F59B0ADD2DF9C211DC4CF4088F5A1A4BB_inline(L_18, L_19, L_23, il2cpp_rgctx_method(method->rgctx_data, 3));
		G_B6_0 = ((((int32_t)L_24) < ((int32_t)0))? 1 : 0);
		goto IL_0060;
	}

IL_005f:
	{
		G_B6_0 = 0;
	}

IL_0060:
	{
		V_3 = (bool)G_B6_0;
		bool L_25 = V_3;
		if (L_25)
		{
			goto IL_0032;
		}
	}
	{
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_26 = ___0_data;
		int32_t L_27 = V_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_28 = V_1;
		NullCheck(L_26);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_27, 1))), (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3)L_28);
		int32_t L_29 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_29, 1));
	}

IL_0073:
	{
		int32_t L_30 = V_0;
		int32_t L_31 = ___2_end;
		V_4 = (bool)((((int32_t)L_30) < ((int32_t)((int32_t)il2cpp_codegen_add(L_31, 1))))? 1 : 0);
		bool L_32 = V_4;
		if (L_32)
		{
			goto IL_0023;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sorting_InsertionSort_TisIl2CppFullySharedGenericAny_m4D143D52B52C5F1F971193FD2EBC1F991E1DAF27_gshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_data, int32_t ___1_start, int32_t ___2_end, Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9* ___3_compare, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_T_t4E7DADE3DB15D6ACACD4EA4FA1DFFF15559CC2B2 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_T_t4E7DADE3DB15D6ACACD4EA4FA1DFFF15559CC2B2);
	const Il2CppFullySharedGenericAny L_15 = L_8;
	const Il2CppFullySharedGenericAny L_19 = L_8;
	const Il2CppFullySharedGenericAny L_28 = L_8;
	const Il2CppFullySharedGenericAny L_23 = alloca(SizeOf_T_t4E7DADE3DB15D6ACACD4EA4FA1DFFF15559CC2B2);
	int32_t V_0 = 0;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_T_t4E7DADE3DB15D6ACACD4EA4FA1DFFF15559CC2B2);
	memset(V_1, 0, SizeOf_T_t4E7DADE3DB15D6ACACD4EA4FA1DFFF15559CC2B2);
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	int32_t G_B6_0 = 0;
	{
		int32_t L_0 = ___1_start;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = ___0_data;
		NullCheck(L_1);
		il2cpp_codegen_runtime_class_init_inline(Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		Assert_IsTrue_mE42C53B7220324D1FBAFB7AE48A7D8DD7796A663((bool)((((int64_t)((int64_t)(uint64_t)((uint32_t)L_0))) < ((int64_t)((int64_t)((int32_t)(((RuntimeArray*)L_1)->max_length)))))? 1 : 0), NULL);
		int32_t L_2 = ___2_end;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = ___0_data;
		NullCheck(L_3);
		Assert_IsTrue_mE42C53B7220324D1FBAFB7AE48A7D8DD7796A663((bool)((((int64_t)((int64_t)(uint64_t)((uint32_t)L_2))) < ((int64_t)((int64_t)((int32_t)(((RuntimeArray*)L_3)->max_length)))))? 1 : 0), NULL);
		int32_t L_4 = ___1_start;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 1));
		goto IL_0073;
	}

IL_0023:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = ___0_data;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		il2cpp_codegen_memcpy(L_8, (L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)), SizeOf_T_t4E7DADE3DB15D6ACACD4EA4FA1DFFF15559CC2B2);
		il2cpp_codegen_memcpy(V_1, L_8, SizeOf_T_t4E7DADE3DB15D6ACACD4EA4FA1DFFF15559CC2B2);
		int32_t L_9 = V_0;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_9, 1));
		goto IL_0048;
	}

IL_0032:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_10 = ___0_data;
		int32_t L_11 = V_2;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_12 = ___0_data;
		int32_t L_13 = V_2;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		il2cpp_codegen_memcpy(L_15, (L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)), SizeOf_T_t4E7DADE3DB15D6ACACD4EA4FA1DFFF15559CC2B2);
		NullCheck(L_10);
		il2cpp_codegen_memcpy((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_11, 1)))), L_15, SizeOf_T_t4E7DADE3DB15D6ACACD4EA4FA1DFFF15559CC2B2);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 1), (void**)(L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_11, 1)))), (void*)L_15);
		int32_t L_16 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_16, 1));
	}

IL_0048:
	{
		int32_t L_17 = V_2;
		if ((((int32_t)L_17) < ((int32_t)0)))
		{
			goto IL_005f;
		}
	}
	{
		Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9* L_18 = ___3_compare;
		il2cpp_codegen_memcpy(L_19, V_1, SizeOf_T_t4E7DADE3DB15D6ACACD4EA4FA1DFFF15559CC2B2);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_20 = ___0_data;
		int32_t L_21 = V_2;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		il2cpp_codegen_memcpy(L_23, (L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_22)), SizeOf_T_t4E7DADE3DB15D6ACACD4EA4FA1DFFF15559CC2B2);
		NullCheck(L_18);
		int32_t L_24;
		L_24 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), L_18, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? L_19: *(void**)L_19), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? L_23: *(void**)L_23));
		G_B6_0 = ((((int32_t)L_24) < ((int32_t)0))? 1 : 0);
		goto IL_0060;
	}

IL_005f:
	{
		G_B6_0 = 0;
	}

IL_0060:
	{
		V_3 = (bool)G_B6_0;
		bool L_25 = V_3;
		if (L_25)
		{
			goto IL_0032;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_26 = ___0_data;
		int32_t L_27 = V_2;
		il2cpp_codegen_memcpy(L_28, V_1, SizeOf_T_t4E7DADE3DB15D6ACACD4EA4FA1DFFF15559CC2B2);
		NullCheck(L_26);
		il2cpp_codegen_memcpy((L_26)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_27, 1)))), L_28, SizeOf_T_t4E7DADE3DB15D6ACACD4EA4FA1DFFF15559CC2B2);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 1), (void**)(L_26)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_27, 1)))), (void*)L_28);
		int32_t L_29 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_29, 1));
	}

IL_0073:
	{
		int32_t L_30 = V_0;
		int32_t L_31 = ___2_end;
		V_4 = (bool)((((int32_t)L_30) < ((int32_t)((int32_t)il2cpp_codegen_add(L_31, 1))))? 1 : 0);
		bool L_32 = V_4;
		if (L_32)
		{
			goto IL_0023;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sorting_InsertionSort_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_m50C92303E813A7BFD084FB309E5FB9937C8F2065_gshared (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___0_data, int32_t ___1_start, int32_t ___2_end, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___3_compare, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	int32_t G_B6_0 = 0;
	{
		int32_t L_0 = ___1_start;
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_1 = ___0_data;
		NullCheck(L_1);
		il2cpp_codegen_runtime_class_init_inline(Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		Assert_IsTrue_mE42C53B7220324D1FBAFB7AE48A7D8DD7796A663((bool)((((int64_t)((int64_t)(uint64_t)((uint32_t)L_0))) < ((int64_t)((int64_t)((int32_t)(((RuntimeArray*)L_1)->max_length)))))? 1 : 0), NULL);
		int32_t L_2 = ___2_end;
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_3 = ___0_data;
		NullCheck(L_3);
		Assert_IsTrue_mE42C53B7220324D1FBAFB7AE48A7D8DD7796A663((bool)((((int64_t)((int64_t)(uint64_t)((uint32_t)L_2))) < ((int64_t)((int64_t)((int32_t)(((RuntimeArray*)L_3)->max_length)))))? 1 : 0), NULL);
		int32_t L_4 = ___1_start;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 1));
		goto IL_0073;
	}

IL_0023:
	{
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_5 = ___0_data;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_1 = L_8;
		int32_t L_9 = V_0;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_9, 1));
		goto IL_0048;
	}

IL_0032:
	{
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_10 = ___0_data;
		int32_t L_11 = V_2;
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_12 = ___0_data;
		int32_t L_13 = V_2;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_11, 1))), (LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2)L_15);
		int32_t L_16 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_16, 1));
	}

IL_0048:
	{
		int32_t L_17 = V_2;
		if ((((int32_t)L_17) < ((int32_t)0)))
		{
			goto IL_005f;
		}
	}
	{
		Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* L_18 = ___3_compare;
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_19 = V_1;
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_20 = ___0_data;
		int32_t L_21 = V_2;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		NullCheck(L_18);
		int32_t L_24;
		L_24 = Func_3_Invoke_m2AED59BE1B0645C0DB5DAE117842A1C0AD4BDEBB_inline(L_18, L_19, L_23, il2cpp_rgctx_method(method->rgctx_data, 3));
		G_B6_0 = ((((int32_t)L_24) < ((int32_t)0))? 1 : 0);
		goto IL_0060;
	}

IL_005f:
	{
		G_B6_0 = 0;
	}

IL_0060:
	{
		V_3 = (bool)G_B6_0;
		bool L_25 = V_3;
		if (L_25)
		{
			goto IL_0032;
		}
	}
	{
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_26 = ___0_data;
		int32_t L_27 = V_2;
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_28 = V_1;
		NullCheck(L_26);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_27, 1))), (LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2)L_28);
		int32_t L_29 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_29, 1));
	}

IL_0073:
	{
		int32_t L_30 = V_0;
		int32_t L_31 = ___2_end;
		V_4 = (bool)((((int32_t)L_30) < ((int32_t)((int32_t)il2cpp_codegen_add(L_31, 1))))? 1 : 0);
		bool L_32 = V_4;
		if (L_32)
		{
			goto IL_0023;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Sorting_Median3Pivot_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m61A04EAD49649BB481C390575840F890DC1AD6D9_gshared (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___0_data, int32_t ___1_start, int32_t ___2_pivot, int32_t ___3_end, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* ___4_compare, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	U3CU3Ec__DisplayClass2_0_1_t41073816D00B5468033D7AA727FBFFB73E7C9BA2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_0 = ___0_data;
		(&V_0)->___data = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___data), (void*)L_0);
		Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* L_1 = ___4_compare;
		U3CU3Ec__DisplayClass2_0_1_t41073816D00B5468033D7AA727FBFFB73E7C9BA2 L_2 = V_0;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_3 = L_2.___data;
		int32_t L_4 = ___3_end;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		U3CU3Ec__DisplayClass2_0_1_t41073816D00B5468033D7AA727FBFFB73E7C9BA2 L_7 = V_0;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_8 = L_7.___data;
		int32_t L_9 = ___1_start;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_1);
		int32_t L_12;
		L_12 = Func_3_Invoke_mE6CD106F59B0ADD2DF9C211DC4CF4088F5A1A4BB_inline(L_1, L_6, L_11, il2cpp_rgctx_method(method->rgctx_data, 4));
		V_1 = (bool)((((int32_t)L_12) < ((int32_t)0))? 1 : 0);
		bool L_13 = V_1;
		if (!L_13)
		{
			goto IL_003a;
		}
	}
	{
		int32_t L_14 = ___1_start;
		int32_t L_15 = ___3_end;
		Sorting_U3CMedian3PivotU3Eg__SwapU7C2_0_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m2B2B04012DE1B591C8E7AD4765ECB8EF3790F795(L_14, L_15, (&V_0), il2cpp_rgctx_method(method->rgctx_data, 5));
	}

IL_003a:
	{
		Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* L_16 = ___4_compare;
		U3CU3Ec__DisplayClass2_0_1_t41073816D00B5468033D7AA727FBFFB73E7C9BA2 L_17 = V_0;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_18 = L_17.___data;
		int32_t L_19 = ___2_pivot;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		U3CU3Ec__DisplayClass2_0_1_t41073816D00B5468033D7AA727FBFFB73E7C9BA2 L_22 = V_0;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_23 = L_22.___data;
		int32_t L_24 = ___1_start;
		NullCheck(L_23);
		int32_t L_25 = L_24;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		NullCheck(L_16);
		int32_t L_27;
		L_27 = Func_3_Invoke_mE6CD106F59B0ADD2DF9C211DC4CF4088F5A1A4BB_inline(L_16, L_21, L_26, il2cpp_rgctx_method(method->rgctx_data, 4));
		V_2 = (bool)((((int32_t)L_27) < ((int32_t)0))? 1 : 0);
		bool L_28 = V_2;
		if (!L_28)
		{
			goto IL_006a;
		}
	}
	{
		int32_t L_29 = ___1_start;
		int32_t L_30 = ___2_pivot;
		Sorting_U3CMedian3PivotU3Eg__SwapU7C2_0_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m2B2B04012DE1B591C8E7AD4765ECB8EF3790F795(L_29, L_30, (&V_0), il2cpp_rgctx_method(method->rgctx_data, 5));
	}

IL_006a:
	{
		Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* L_31 = ___4_compare;
		U3CU3Ec__DisplayClass2_0_1_t41073816D00B5468033D7AA727FBFFB73E7C9BA2 L_32 = V_0;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_33 = L_32.___data;
		int32_t L_34 = ___3_end;
		NullCheck(L_33);
		int32_t L_35 = L_34;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_36 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		U3CU3Ec__DisplayClass2_0_1_t41073816D00B5468033D7AA727FBFFB73E7C9BA2 L_37 = V_0;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_38 = L_37.___data;
		int32_t L_39 = ___2_pivot;
		NullCheck(L_38);
		int32_t L_40 = L_39;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_41 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		NullCheck(L_31);
		int32_t L_42;
		L_42 = Func_3_Invoke_mE6CD106F59B0ADD2DF9C211DC4CF4088F5A1A4BB_inline(L_31, L_36, L_41, il2cpp_rgctx_method(method->rgctx_data, 4));
		V_3 = (bool)((((int32_t)L_42) < ((int32_t)0))? 1 : 0);
		bool L_43 = V_3;
		if (!L_43)
		{
			goto IL_009a;
		}
	}
	{
		int32_t L_44 = ___2_pivot;
		int32_t L_45 = ___3_end;
		Sorting_U3CMedian3PivotU3Eg__SwapU7C2_0_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m2B2B04012DE1B591C8E7AD4765ECB8EF3790F795(L_44, L_45, (&V_0), il2cpp_rgctx_method(method->rgctx_data, 5));
	}

IL_009a:
	{
		U3CU3Ec__DisplayClass2_0_1_t41073816D00B5468033D7AA727FBFFB73E7C9BA2 L_46 = V_0;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_47 = L_46.___data;
		int32_t L_48 = ___2_pivot;
		NullCheck(L_47);
		int32_t L_49 = L_48;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_50 = (L_47)->GetAt(static_cast<il2cpp_array_size_t>(L_49));
		V_4 = L_50;
		goto IL_00aa;
	}

IL_00aa:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_51 = V_4;
		return L_51;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sorting_Median3Pivot_TisIl2CppFullySharedGenericAny_mA6E8814C46DAB9D561A5440B447E24E67159A5A1_gshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_data, int32_t ___1_start, int32_t ___2_pivot, int32_t ___3_end, Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9* ___4_compare, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t7DAA074A5FED821310D99584547BB9B1AEB7FBB5 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 3));
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_T_t7DAA074A5FED821310D99584547BB9B1AEB7FBB5);
	const Il2CppFullySharedGenericAny L_21 = L_6;
	const Il2CppFullySharedGenericAny L_36 = L_6;
	const Il2CppFullySharedGenericAny L_50 = L_6;
	const Il2CppFullySharedGenericAny L_51 = L_6;
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_T_t7DAA074A5FED821310D99584547BB9B1AEB7FBB5);
	const Il2CppFullySharedGenericAny L_26 = L_11;
	const Il2CppFullySharedGenericAny L_41 = L_11;
	U3CU3Ec__DisplayClass2_0_1_t95D21073081C2AD9435E6E2ED2FD63B720ABF032 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	Il2CppFullySharedGenericAny V_4 = alloca(SizeOf_T_t7DAA074A5FED821310D99584547BB9B1AEB7FBB5);
	memset(V_4, 0, SizeOf_T_t7DAA074A5FED821310D99584547BB9B1AEB7FBB5);
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_data;
		(&V_0)->___data = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___data), (void*)L_0);
		Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9* L_1 = ___4_compare;
		U3CU3Ec__DisplayClass2_0_1_t95D21073081C2AD9435E6E2ED2FD63B720ABF032 L_2 = V_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = L_2.___data;
		int32_t L_4 = ___3_end;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		il2cpp_codegen_memcpy(L_6, (L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)), SizeOf_T_t7DAA074A5FED821310D99584547BB9B1AEB7FBB5);
		U3CU3Ec__DisplayClass2_0_1_t95D21073081C2AD9435E6E2ED2FD63B720ABF032 L_7 = V_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_8 = L_7.___data;
		int32_t L_9 = ___1_start;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		il2cpp_codegen_memcpy(L_11, (L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)), SizeOf_T_t7DAA074A5FED821310D99584547BB9B1AEB7FBB5);
		NullCheck(L_1);
		int32_t L_12;
		L_12 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)), il2cpp_rgctx_method(method->rgctx_data, 4), L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 3)) ? L_6: *(void**)L_6), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 3)) ? L_11: *(void**)L_11));
		V_1 = (bool)((((int32_t)L_12) < ((int32_t)0))? 1 : 0);
		bool L_13 = V_1;
		if (!L_13)
		{
			goto IL_003a;
		}
	}
	{
		int32_t L_14 = ___1_start;
		int32_t L_15 = ___3_end;
		((  void (*) (int32_t, int32_t, U3CU3Ec__DisplayClass2_0_1_t95D21073081C2AD9435E6E2ED2FD63B720ABF032*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))(L_14, L_15, (&V_0), il2cpp_rgctx_method(method->rgctx_data, 5));
	}

IL_003a:
	{
		Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9* L_16 = ___4_compare;
		U3CU3Ec__DisplayClass2_0_1_t95D21073081C2AD9435E6E2ED2FD63B720ABF032 L_17 = V_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_18 = L_17.___data;
		int32_t L_19 = ___2_pivot;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		il2cpp_codegen_memcpy(L_21, (L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)), SizeOf_T_t7DAA074A5FED821310D99584547BB9B1AEB7FBB5);
		U3CU3Ec__DisplayClass2_0_1_t95D21073081C2AD9435E6E2ED2FD63B720ABF032 L_22 = V_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_23 = L_22.___data;
		int32_t L_24 = ___1_start;
		NullCheck(L_23);
		int32_t L_25 = L_24;
		il2cpp_codegen_memcpy(L_26, (L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_25)), SizeOf_T_t7DAA074A5FED821310D99584547BB9B1AEB7FBB5);
		NullCheck(L_16);
		int32_t L_27;
		L_27 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)), il2cpp_rgctx_method(method->rgctx_data, 4), L_16, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 3)) ? L_21: *(void**)L_21), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 3)) ? L_26: *(void**)L_26));
		V_2 = (bool)((((int32_t)L_27) < ((int32_t)0))? 1 : 0);
		bool L_28 = V_2;
		if (!L_28)
		{
			goto IL_006a;
		}
	}
	{
		int32_t L_29 = ___1_start;
		int32_t L_30 = ___2_pivot;
		((  void (*) (int32_t, int32_t, U3CU3Ec__DisplayClass2_0_1_t95D21073081C2AD9435E6E2ED2FD63B720ABF032*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))(L_29, L_30, (&V_0), il2cpp_rgctx_method(method->rgctx_data, 5));
	}

IL_006a:
	{
		Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9* L_31 = ___4_compare;
		U3CU3Ec__DisplayClass2_0_1_t95D21073081C2AD9435E6E2ED2FD63B720ABF032 L_32 = V_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_33 = L_32.___data;
		int32_t L_34 = ___3_end;
		NullCheck(L_33);
		int32_t L_35 = L_34;
		il2cpp_codegen_memcpy(L_36, (L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)), SizeOf_T_t7DAA074A5FED821310D99584547BB9B1AEB7FBB5);
		U3CU3Ec__DisplayClass2_0_1_t95D21073081C2AD9435E6E2ED2FD63B720ABF032 L_37 = V_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_38 = L_37.___data;
		int32_t L_39 = ___2_pivot;
		NullCheck(L_38);
		int32_t L_40 = L_39;
		il2cpp_codegen_memcpy(L_41, (L_38)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_40)), SizeOf_T_t7DAA074A5FED821310D99584547BB9B1AEB7FBB5);
		NullCheck(L_31);
		int32_t L_42;
		L_42 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)), il2cpp_rgctx_method(method->rgctx_data, 4), L_31, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 3)) ? L_36: *(void**)L_36), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 3)) ? L_41: *(void**)L_41));
		V_3 = (bool)((((int32_t)L_42) < ((int32_t)0))? 1 : 0);
		bool L_43 = V_3;
		if (!L_43)
		{
			goto IL_009a;
		}
	}
	{
		int32_t L_44 = ___2_pivot;
		int32_t L_45 = ___3_end;
		((  void (*) (int32_t, int32_t, U3CU3Ec__DisplayClass2_0_1_t95D21073081C2AD9435E6E2ED2FD63B720ABF032*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))(L_44, L_45, (&V_0), il2cpp_rgctx_method(method->rgctx_data, 5));
	}

IL_009a:
	{
		U3CU3Ec__DisplayClass2_0_1_t95D21073081C2AD9435E6E2ED2FD63B720ABF032 L_46 = V_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_47 = L_46.___data;
		int32_t L_48 = ___2_pivot;
		NullCheck(L_47);
		int32_t L_49 = L_48;
		il2cpp_codegen_memcpy(L_50, (L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_49)), SizeOf_T_t7DAA074A5FED821310D99584547BB9B1AEB7FBB5);
		il2cpp_codegen_memcpy(V_4, L_50, SizeOf_T_t7DAA074A5FED821310D99584547BB9B1AEB7FBB5);
		goto IL_00aa;
	}

IL_00aa:
	{
		il2cpp_codegen_memcpy(L_51, V_4, SizeOf_T_t7DAA074A5FED821310D99584547BB9B1AEB7FBB5);
		il2cpp_codegen_memcpy(il2cppRetVal, L_51, SizeOf_T_t7DAA074A5FED821310D99584547BB9B1AEB7FBB5);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 Sorting_Median3Pivot_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_m3AE419868146FAEE6A59E9FA4E33484BFA9930B1_gshared (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___0_data, int32_t ___1_start, int32_t ___2_pivot, int32_t ___3_end, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___4_compare, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	U3CU3Ec__DisplayClass2_0_1_tC4E3D65CA470C2F2DB85D9B32B717BE3200D4597 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_0 = ___0_data;
		(&V_0)->___data = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___data), (void*)L_0);
		Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* L_1 = ___4_compare;
		U3CU3Ec__DisplayClass2_0_1_tC4E3D65CA470C2F2DB85D9B32B717BE3200D4597 L_2 = V_0;
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_3 = L_2.___data;
		int32_t L_4 = ___3_end;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		U3CU3Ec__DisplayClass2_0_1_tC4E3D65CA470C2F2DB85D9B32B717BE3200D4597 L_7 = V_0;
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_8 = L_7.___data;
		int32_t L_9 = ___1_start;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_1);
		int32_t L_12;
		L_12 = Func_3_Invoke_m2AED59BE1B0645C0DB5DAE117842A1C0AD4BDEBB_inline(L_1, L_6, L_11, il2cpp_rgctx_method(method->rgctx_data, 4));
		V_1 = (bool)((((int32_t)L_12) < ((int32_t)0))? 1 : 0);
		bool L_13 = V_1;
		if (!L_13)
		{
			goto IL_003a;
		}
	}
	{
		int32_t L_14 = ___1_start;
		int32_t L_15 = ___3_end;
		Sorting_U3CMedian3PivotU3Eg__SwapU7C2_0_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_m06FED96568508A808BFC2F0CB6D49F45194E6051(L_14, L_15, (&V_0), il2cpp_rgctx_method(method->rgctx_data, 5));
	}

IL_003a:
	{
		Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* L_16 = ___4_compare;
		U3CU3Ec__DisplayClass2_0_1_tC4E3D65CA470C2F2DB85D9B32B717BE3200D4597 L_17 = V_0;
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_18 = L_17.___data;
		int32_t L_19 = ___2_pivot;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		U3CU3Ec__DisplayClass2_0_1_tC4E3D65CA470C2F2DB85D9B32B717BE3200D4597 L_22 = V_0;
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_23 = L_22.___data;
		int32_t L_24 = ___1_start;
		NullCheck(L_23);
		int32_t L_25 = L_24;
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		NullCheck(L_16);
		int32_t L_27;
		L_27 = Func_3_Invoke_m2AED59BE1B0645C0DB5DAE117842A1C0AD4BDEBB_inline(L_16, L_21, L_26, il2cpp_rgctx_method(method->rgctx_data, 4));
		V_2 = (bool)((((int32_t)L_27) < ((int32_t)0))? 1 : 0);
		bool L_28 = V_2;
		if (!L_28)
		{
			goto IL_006a;
		}
	}
	{
		int32_t L_29 = ___1_start;
		int32_t L_30 = ___2_pivot;
		Sorting_U3CMedian3PivotU3Eg__SwapU7C2_0_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_m06FED96568508A808BFC2F0CB6D49F45194E6051(L_29, L_30, (&V_0), il2cpp_rgctx_method(method->rgctx_data, 5));
	}

IL_006a:
	{
		Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* L_31 = ___4_compare;
		U3CU3Ec__DisplayClass2_0_1_tC4E3D65CA470C2F2DB85D9B32B717BE3200D4597 L_32 = V_0;
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_33 = L_32.___data;
		int32_t L_34 = ___3_end;
		NullCheck(L_33);
		int32_t L_35 = L_34;
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_36 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		U3CU3Ec__DisplayClass2_0_1_tC4E3D65CA470C2F2DB85D9B32B717BE3200D4597 L_37 = V_0;
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_38 = L_37.___data;
		int32_t L_39 = ___2_pivot;
		NullCheck(L_38);
		int32_t L_40 = L_39;
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_41 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		NullCheck(L_31);
		int32_t L_42;
		L_42 = Func_3_Invoke_m2AED59BE1B0645C0DB5DAE117842A1C0AD4BDEBB_inline(L_31, L_36, L_41, il2cpp_rgctx_method(method->rgctx_data, 4));
		V_3 = (bool)((((int32_t)L_42) < ((int32_t)0))? 1 : 0);
		bool L_43 = V_3;
		if (!L_43)
		{
			goto IL_009a;
		}
	}
	{
		int32_t L_44 = ___2_pivot;
		int32_t L_45 = ___3_end;
		Sorting_U3CMedian3PivotU3Eg__SwapU7C2_0_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_m06FED96568508A808BFC2F0CB6D49F45194E6051(L_44, L_45, (&V_0), il2cpp_rgctx_method(method->rgctx_data, 5));
	}

IL_009a:
	{
		U3CU3Ec__DisplayClass2_0_1_tC4E3D65CA470C2F2DB85D9B32B717BE3200D4597 L_46 = V_0;
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_47 = L_46.___data;
		int32_t L_48 = ___2_pivot;
		NullCheck(L_47);
		int32_t L_49 = L_48;
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_50 = (L_47)->GetAt(static_cast<il2cpp_array_size_t>(L_49));
		V_4 = L_50;
		goto IL_00aa;
	}

IL_00aa:
	{
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_51 = V_4;
		return L_51;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sorting_Partition_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m5B1882A69C494B64F1EA761E21D0018C1D6AB6E8_gshared (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___0_data, int32_t ___1_start, int32_t ___2_end, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* ___3_compare, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_3;
	memset((&V_3), 0, sizeof(V_3));
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	int32_t V_7 = 0;
	bool V_8 = false;
	{
		int32_t L_0 = ___2_end;
		int32_t L_1 = ___1_start;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		int32_t L_2 = ___1_start;
		int32_t L_3 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_2, ((int32_t)(L_3/2))));
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_4 = ___0_data;
		int32_t L_5 = ___1_start;
		int32_t L_6 = V_1;
		int32_t L_7 = ___2_end;
		Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* L_8 = ___3_compare;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_9;
		L_9 = Sorting_Median3Pivot_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m61A04EAD49649BB481C390575840F890DC1AD6D9(L_4, L_5, L_6, L_7, L_8, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_2 = L_9;
		goto IL_0091;
	}

IL_0018:
	{
		goto IL_0020;
	}

IL_001b:
	{
		int32_t L_10 = ___1_start;
		___1_start = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0020:
	{
		Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* L_11 = ___3_compare;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_12 = ___0_data;
		int32_t L_13 = ___1_start;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_16 = V_2;
		NullCheck(L_11);
		int32_t L_17;
		L_17 = Func_3_Invoke_mE6CD106F59B0ADD2DF9C211DC4CF4088F5A1A4BB_inline(L_11, L_15, L_16, il2cpp_rgctx_method(method->rgctx_data, 4));
		V_4 = (bool)((((int32_t)L_17) < ((int32_t)0))? 1 : 0);
		bool L_18 = V_4;
		if (L_18)
		{
			goto IL_001b;
		}
	}
	{
		goto IL_003e;
	}

IL_0039:
	{
		int32_t L_19 = ___2_end;
		___2_end = ((int32_t)il2cpp_codegen_subtract(L_19, 1));
	}

IL_003e:
	{
		Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* L_20 = ___3_compare;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_21 = ___0_data;
		int32_t L_22 = ___2_end;
		NullCheck(L_21);
		int32_t L_23 = L_22;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_25 = V_2;
		NullCheck(L_20);
		int32_t L_26;
		L_26 = Func_3_Invoke_mE6CD106F59B0ADD2DF9C211DC4CF4088F5A1A4BB_inline(L_20, L_24, L_25, il2cpp_rgctx_method(method->rgctx_data, 4));
		V_5 = (bool)((((int32_t)L_26) > ((int32_t)0))? 1 : 0);
		bool L_27 = V_5;
		if (L_27)
		{
			goto IL_0039;
		}
	}
	{
		int32_t L_28 = ___1_start;
		int32_t L_29 = ___2_end;
		V_6 = (bool)((((int32_t)((((int32_t)L_28) < ((int32_t)L_29))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_30 = V_6;
		if (!L_30)
		{
			goto IL_0068;
		}
	}
	{
		int32_t L_31 = ___2_end;
		V_7 = L_31;
		goto IL_0096;
	}

IL_0068:
	{
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_32 = ___0_data;
		int32_t L_33 = ___1_start;
		NullCheck(L_32);
		int32_t L_34 = L_33;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		V_3 = L_35;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_36 = ___0_data;
		int32_t L_37 = ___1_start;
		int32_t L_38 = L_37;
		___1_start = ((int32_t)il2cpp_codegen_add(L_38, 1));
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_39 = ___0_data;
		int32_t L_40 = ___2_end;
		NullCheck(L_39);
		int32_t L_41 = L_40;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_42 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		NullCheck(L_36);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(L_38), (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3)L_42);
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_43 = ___0_data;
		int32_t L_44 = ___2_end;
		int32_t L_45 = L_44;
		___2_end = ((int32_t)il2cpp_codegen_subtract(L_45, 1));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_46 = V_3;
		NullCheck(L_43);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(L_45), (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3)L_46);
	}

IL_0091:
	{
		V_8 = (bool)1;
		goto IL_0018;
	}

IL_0096:
	{
		int32_t L_47 = V_7;
		return L_47;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sorting_Partition_TisIl2CppFullySharedGenericAny_m712B611DAC06FA9738A8F85CAA404B955BB47029_gshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_data, int32_t ___1_start, int32_t ___2_end, Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9* ___3_compare, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tC40FDC7B5C85862D1DEB60A6C3716599A9ECA6BE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 3));
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_T_tC40FDC7B5C85862D1DEB60A6C3716599A9ECA6BE);
	const Il2CppFullySharedGenericAny L_15 = L_9;
	const Il2CppFullySharedGenericAny L_24 = L_9;
	const Il2CppFullySharedGenericAny L_35 = L_9;
	const Il2CppFullySharedGenericAny L_16 = alloca(SizeOf_T_tC40FDC7B5C85862D1DEB60A6C3716599A9ECA6BE);
	const Il2CppFullySharedGenericAny L_25 = L_16;
	const Il2CppFullySharedGenericAny L_42 = L_16;
	const Il2CppFullySharedGenericAny L_46 = alloca(SizeOf_T_tC40FDC7B5C85862D1DEB60A6C3716599A9ECA6BE);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_T_tC40FDC7B5C85862D1DEB60A6C3716599A9ECA6BE);
	memset(V_2, 0, SizeOf_T_tC40FDC7B5C85862D1DEB60A6C3716599A9ECA6BE);
	Il2CppFullySharedGenericAny V_3 = alloca(SizeOf_T_tC40FDC7B5C85862D1DEB60A6C3716599A9ECA6BE);
	memset(V_3, 0, SizeOf_T_tC40FDC7B5C85862D1DEB60A6C3716599A9ECA6BE);
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	int32_t V_7 = 0;
	bool V_8 = false;
	{
		int32_t L_0 = ___2_end;
		int32_t L_1 = ___1_start;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		int32_t L_2 = ___1_start;
		int32_t L_3 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_2, ((int32_t)(L_3/2))));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = ___0_data;
		int32_t L_5 = ___1_start;
		int32_t L_6 = V_1;
		int32_t L_7 = ___2_end;
		Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9* L_8 = ___3_compare;
		InvokerActionInvoker6< __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, int32_t, Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_4, L_5, L_6, L_7, L_8, (Il2CppFullySharedGenericAny*)L_9);
		il2cpp_codegen_memcpy(V_2, L_9, SizeOf_T_tC40FDC7B5C85862D1DEB60A6C3716599A9ECA6BE);
		goto IL_0091;
	}

IL_0018:
	{
		goto IL_0020;
	}

IL_001b:
	{
		int32_t L_10 = ___1_start;
		___1_start = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0020:
	{
		Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9* L_11 = ___3_compare;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_12 = ___0_data;
		int32_t L_13 = ___1_start;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		il2cpp_codegen_memcpy(L_15, (L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)), SizeOf_T_tC40FDC7B5C85862D1DEB60A6C3716599A9ECA6BE);
		il2cpp_codegen_memcpy(L_16, V_2, SizeOf_T_tC40FDC7B5C85862D1DEB60A6C3716599A9ECA6BE);
		NullCheck(L_11);
		int32_t L_17;
		L_17 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)), il2cpp_rgctx_method(method->rgctx_data, 4), L_11, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 3)) ? L_15: *(void**)L_15), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 3)) ? L_16: *(void**)L_16));
		V_4 = (bool)((((int32_t)L_17) < ((int32_t)0))? 1 : 0);
		bool L_18 = V_4;
		if (L_18)
		{
			goto IL_001b;
		}
	}
	{
		goto IL_003e;
	}

IL_0039:
	{
		int32_t L_19 = ___2_end;
		___2_end = ((int32_t)il2cpp_codegen_subtract(L_19, 1));
	}

IL_003e:
	{
		Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9* L_20 = ___3_compare;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_21 = ___0_data;
		int32_t L_22 = ___2_end;
		NullCheck(L_21);
		int32_t L_23 = L_22;
		il2cpp_codegen_memcpy(L_24, (L_21)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)), SizeOf_T_tC40FDC7B5C85862D1DEB60A6C3716599A9ECA6BE);
		il2cpp_codegen_memcpy(L_25, V_2, SizeOf_T_tC40FDC7B5C85862D1DEB60A6C3716599A9ECA6BE);
		NullCheck(L_20);
		int32_t L_26;
		L_26 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)), il2cpp_rgctx_method(method->rgctx_data, 4), L_20, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 3)) ? L_24: *(void**)L_24), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 3)) ? L_25: *(void**)L_25));
		V_5 = (bool)((((int32_t)L_26) > ((int32_t)0))? 1 : 0);
		bool L_27 = V_5;
		if (L_27)
		{
			goto IL_0039;
		}
	}
	{
		int32_t L_28 = ___1_start;
		int32_t L_29 = ___2_end;
		V_6 = (bool)((((int32_t)((((int32_t)L_28) < ((int32_t)L_29))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_30 = V_6;
		if (!L_30)
		{
			goto IL_0068;
		}
	}
	{
		int32_t L_31 = ___2_end;
		V_7 = L_31;
		goto IL_0096;
	}

IL_0068:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_32 = ___0_data;
		int32_t L_33 = ___1_start;
		NullCheck(L_32);
		int32_t L_34 = L_33;
		il2cpp_codegen_memcpy(L_35, (L_32)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_34)), SizeOf_T_tC40FDC7B5C85862D1DEB60A6C3716599A9ECA6BE);
		il2cpp_codegen_memcpy(V_3, L_35, SizeOf_T_tC40FDC7B5C85862D1DEB60A6C3716599A9ECA6BE);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_36 = ___0_data;
		int32_t L_37 = ___1_start;
		int32_t L_38 = L_37;
		___1_start = ((int32_t)il2cpp_codegen_add(L_38, 1));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_39 = ___0_data;
		int32_t L_40 = ___2_end;
		NullCheck(L_39);
		int32_t L_41 = L_40;
		il2cpp_codegen_memcpy(L_42, (L_39)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_41)), SizeOf_T_tC40FDC7B5C85862D1DEB60A6C3716599A9ECA6BE);
		NullCheck(L_36);
		il2cpp_codegen_memcpy((L_36)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_38)), L_42, SizeOf_T_tC40FDC7B5C85862D1DEB60A6C3716599A9ECA6BE);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 3), (void**)(L_36)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_38)), (void*)L_42);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_43 = ___0_data;
		int32_t L_44 = ___2_end;
		int32_t L_45 = L_44;
		___2_end = ((int32_t)il2cpp_codegen_subtract(L_45, 1));
		il2cpp_codegen_memcpy(L_46, V_3, SizeOf_T_tC40FDC7B5C85862D1DEB60A6C3716599A9ECA6BE);
		NullCheck(L_43);
		il2cpp_codegen_memcpy((L_43)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_45)), L_46, SizeOf_T_tC40FDC7B5C85862D1DEB60A6C3716599A9ECA6BE);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 3), (void**)(L_43)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_45)), (void*)L_46);
	}

IL_0091:
	{
		V_8 = (bool)1;
		goto IL_0018;
	}

IL_0096:
	{
		int32_t L_47 = V_7;
		return L_47;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sorting_Partition_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_m0E79CA1E375645FFDF3E1506F789825A9A6D3D95_gshared (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___0_data, int32_t ___1_start, int32_t ___2_end, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___3_compare, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	int32_t V_7 = 0;
	bool V_8 = false;
	{
		int32_t L_0 = ___2_end;
		int32_t L_1 = ___1_start;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		int32_t L_2 = ___1_start;
		int32_t L_3 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_2, ((int32_t)(L_3/2))));
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_4 = ___0_data;
		int32_t L_5 = ___1_start;
		int32_t L_6 = V_1;
		int32_t L_7 = ___2_end;
		Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* L_8 = ___3_compare;
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_9;
		L_9 = Sorting_Median3Pivot_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_m3AE419868146FAEE6A59E9FA4E33484BFA9930B1(L_4, L_5, L_6, L_7, L_8, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_2 = L_9;
		goto IL_0091;
	}

IL_0018:
	{
		goto IL_0020;
	}

IL_001b:
	{
		int32_t L_10 = ___1_start;
		___1_start = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0020:
	{
		Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* L_11 = ___3_compare;
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_12 = ___0_data;
		int32_t L_13 = ___1_start;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_16 = V_2;
		NullCheck(L_11);
		int32_t L_17;
		L_17 = Func_3_Invoke_m2AED59BE1B0645C0DB5DAE117842A1C0AD4BDEBB_inline(L_11, L_15, L_16, il2cpp_rgctx_method(method->rgctx_data, 4));
		V_4 = (bool)((((int32_t)L_17) < ((int32_t)0))? 1 : 0);
		bool L_18 = V_4;
		if (L_18)
		{
			goto IL_001b;
		}
	}
	{
		goto IL_003e;
	}

IL_0039:
	{
		int32_t L_19 = ___2_end;
		___2_end = ((int32_t)il2cpp_codegen_subtract(L_19, 1));
	}

IL_003e:
	{
		Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* L_20 = ___3_compare;
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_21 = ___0_data;
		int32_t L_22 = ___2_end;
		NullCheck(L_21);
		int32_t L_23 = L_22;
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_25 = V_2;
		NullCheck(L_20);
		int32_t L_26;
		L_26 = Func_3_Invoke_m2AED59BE1B0645C0DB5DAE117842A1C0AD4BDEBB_inline(L_20, L_24, L_25, il2cpp_rgctx_method(method->rgctx_data, 4));
		V_5 = (bool)((((int32_t)L_26) > ((int32_t)0))? 1 : 0);
		bool L_27 = V_5;
		if (L_27)
		{
			goto IL_0039;
		}
	}
	{
		int32_t L_28 = ___1_start;
		int32_t L_29 = ___2_end;
		V_6 = (bool)((((int32_t)((((int32_t)L_28) < ((int32_t)L_29))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_30 = V_6;
		if (!L_30)
		{
			goto IL_0068;
		}
	}
	{
		int32_t L_31 = ___2_end;
		V_7 = L_31;
		goto IL_0096;
	}

IL_0068:
	{
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_32 = ___0_data;
		int32_t L_33 = ___1_start;
		NullCheck(L_32);
		int32_t L_34 = L_33;
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		V_3 = L_35;
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_36 = ___0_data;
		int32_t L_37 = ___1_start;
		int32_t L_38 = L_37;
		___1_start = ((int32_t)il2cpp_codegen_add(L_38, 1));
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_39 = ___0_data;
		int32_t L_40 = ___2_end;
		NullCheck(L_39);
		int32_t L_41 = L_40;
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_42 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		NullCheck(L_36);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(L_38), (LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2)L_42);
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_43 = ___0_data;
		int32_t L_44 = ___2_end;
		int32_t L_45 = L_44;
		___2_end = ((int32_t)il2cpp_codegen_subtract(L_45, 1));
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_46 = V_3;
		NullCheck(L_43);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(L_45), (LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2)L_46);
	}

IL_0091:
	{
		V_8 = (bool)1;
		goto IL_0018;
	}

IL_0096:
	{
		int32_t L_47 = V_7;
		return L_47;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sorting_QuickSort_TisIl2CppFullySharedGenericAny_mEC21DF5A7D470F44BB30B97EB39D03491BD65D1F_gshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_data, Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9* ___1_compare, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_data;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = ___0_data;
		NullCheck(L_1);
		Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9* L_2 = ___1_compare;
		((  void (*) (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_0, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_1)->max_length)), 1)), L_2, il2cpp_rgctx_method(method->rgctx_data, 2));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sorting_QuickSort_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mAA6CA24576E19917524BFD6BE7AC3ACF4A18B570_gshared (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___0_data, int32_t ___1_start, int32_t ___2_end, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* ___3_compare, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	int32_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	{
		int32_t L_0 = ___2_end;
		int32_t L_1 = ___1_start;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		int32_t L_2 = V_0;
		V_1 = (bool)((((int32_t)L_2) < ((int32_t)1))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_000f;
		}
	}
	{
		goto IL_0088;
	}

IL_000f:
	{
		int32_t L_4 = V_0;
		V_2 = (bool)((((int32_t)L_4) < ((int32_t)8))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0024;
		}
	}
	{
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_6 = ___0_data;
		int32_t L_7 = ___1_start;
		int32_t L_8 = ___2_end;
		Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* L_9 = ___3_compare;
		Sorting_InsertionSort_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m6B06894C5FA146D1CCE7ECBC21F553F16F2E96F5(L_6, L_7, L_8, L_9, il2cpp_rgctx_method(method->rgctx_data, 2));
		goto IL_0088;
	}

IL_0024:
	{
		int32_t L_10 = ___1_start;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_11 = ___0_data;
		NullCheck(L_11);
		il2cpp_codegen_runtime_class_init_inline(Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		Assert_IsTrue_mE42C53B7220324D1FBAFB7AE48A7D8DD7796A663((bool)((((int64_t)((int64_t)(uint64_t)((uint32_t)L_10))) < ((int64_t)((int64_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))))? 1 : 0), NULL);
		int32_t L_12 = ___2_end;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_13 = ___0_data;
		NullCheck(L_13);
		Assert_IsTrue_mE42C53B7220324D1FBAFB7AE48A7D8DD7796A663((bool)((((int64_t)((int64_t)(uint64_t)((uint32_t)L_12))) < ((int64_t)((int64_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))))? 1 : 0), NULL);
		int32_t L_14 = ___1_start;
		int32_t L_15 = ___2_end;
		V_3 = (bool)((((int32_t)L_14) < ((int32_t)L_15))? 1 : 0);
		bool L_16 = V_3;
		if (!L_16)
		{
			goto IL_0088;
		}
	}
	{
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_17 = ___0_data;
		int32_t L_18 = ___1_start;
		int32_t L_19 = ___2_end;
		Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* L_20 = ___3_compare;
		int32_t L_21;
		L_21 = Sorting_Partition_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m5B1882A69C494B64F1EA761E21D0018C1D6AB6E8(L_17, L_18, L_19, L_20, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_4 = L_21;
		int32_t L_22 = V_4;
		V_5 = (bool)((((int32_t)((((int32_t)L_22) < ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_23 = V_5;
		if (!L_23)
		{
			goto IL_006d;
		}
	}
	{
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_24 = ___0_data;
		int32_t L_25 = ___1_start;
		int32_t L_26 = V_4;
		Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* L_27 = ___3_compare;
		Sorting_QuickSort_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mAA6CA24576E19917524BFD6BE7AC3ACF4A18B570(L_24, L_25, L_26, L_27, il2cpp_rgctx_method(method->rgctx_data, 4));
	}

IL_006d:
	{
		int32_t L_28 = V_4;
		int32_t L_29 = ___2_end;
		V_6 = (bool)((((int32_t)((int32_t)il2cpp_codegen_add(L_28, 1))) < ((int32_t)L_29))? 1 : 0);
		bool L_30 = V_6;
		if (!L_30)
		{
			goto IL_0087;
		}
	}
	{
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_31 = ___0_data;
		int32_t L_32 = V_4;
		int32_t L_33 = ___2_end;
		Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* L_34 = ___3_compare;
		Sorting_QuickSort_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mAA6CA24576E19917524BFD6BE7AC3ACF4A18B570(L_31, ((int32_t)il2cpp_codegen_add(L_32, 1)), L_33, L_34, il2cpp_rgctx_method(method->rgctx_data, 4));
	}

IL_0087:
	{
	}

IL_0088:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sorting_QuickSort_TisIl2CppFullySharedGenericAny_m64F66E9A59079142461E29BCD21FE90D0C81BB59_gshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_data, int32_t ___1_start, int32_t ___2_end, Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9* ___3_compare, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	int32_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	{
		int32_t L_0 = ___2_end;
		int32_t L_1 = ___1_start;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		int32_t L_2 = V_0;
		V_1 = (bool)((((int32_t)L_2) < ((int32_t)1))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_000f;
		}
	}
	{
		goto IL_0088;
	}

IL_000f:
	{
		int32_t L_4 = V_0;
		V_2 = (bool)((((int32_t)L_4) < ((int32_t)8))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0024;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = ___0_data;
		int32_t L_7 = ___1_start;
		int32_t L_8 = ___2_end;
		Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9* L_9 = ___3_compare;
		((  void (*) (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_6, L_7, L_8, L_9, il2cpp_rgctx_method(method->rgctx_data, 2));
		goto IL_0088;
	}

IL_0024:
	{
		int32_t L_10 = ___1_start;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_11 = ___0_data;
		NullCheck(L_11);
		il2cpp_codegen_runtime_class_init_inline(Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		Assert_IsTrue_mE42C53B7220324D1FBAFB7AE48A7D8DD7796A663((bool)((((int64_t)((int64_t)(uint64_t)((uint32_t)L_10))) < ((int64_t)((int64_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))))? 1 : 0), NULL);
		int32_t L_12 = ___2_end;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_13 = ___0_data;
		NullCheck(L_13);
		Assert_IsTrue_mE42C53B7220324D1FBAFB7AE48A7D8DD7796A663((bool)((((int64_t)((int64_t)(uint64_t)((uint32_t)L_12))) < ((int64_t)((int64_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))))? 1 : 0), NULL);
		int32_t L_14 = ___1_start;
		int32_t L_15 = ___2_end;
		V_3 = (bool)((((int32_t)L_14) < ((int32_t)L_15))? 1 : 0);
		bool L_16 = V_3;
		if (!L_16)
		{
			goto IL_0088;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_17 = ___0_data;
		int32_t L_18 = ___1_start;
		int32_t L_19 = ___2_end;
		Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9* L_20 = ___3_compare;
		int32_t L_21;
		L_21 = ((  int32_t (*) (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(L_17, L_18, L_19, L_20, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_4 = L_21;
		int32_t L_22 = V_4;
		V_5 = (bool)((((int32_t)((((int32_t)L_22) < ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_23 = V_5;
		if (!L_23)
		{
			goto IL_006d;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_24 = ___0_data;
		int32_t L_25 = ___1_start;
		int32_t L_26 = V_4;
		Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9* L_27 = ___3_compare;
		((  void (*) (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_24, L_25, L_26, L_27, il2cpp_rgctx_method(method->rgctx_data, 4));
	}

IL_006d:
	{
		int32_t L_28 = V_4;
		int32_t L_29 = ___2_end;
		V_6 = (bool)((((int32_t)((int32_t)il2cpp_codegen_add(L_28, 1))) < ((int32_t)L_29))? 1 : 0);
		bool L_30 = V_6;
		if (!L_30)
		{
			goto IL_0087;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_31 = ___0_data;
		int32_t L_32 = V_4;
		int32_t L_33 = ___2_end;
		Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9* L_34 = ___3_compare;
		((  void (*) (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_31, ((int32_t)il2cpp_codegen_add(L_32, 1)), L_33, L_34, il2cpp_rgctx_method(method->rgctx_data, 4));
	}

IL_0087:
	{
	}

IL_0088:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sorting_QuickSort_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_mADD51465439832E9BCC31668A2DE42CFCCA07F9C_gshared (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___0_data, int32_t ___1_start, int32_t ___2_end, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___3_compare, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	int32_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	{
		int32_t L_0 = ___2_end;
		int32_t L_1 = ___1_start;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		int32_t L_2 = V_0;
		V_1 = (bool)((((int32_t)L_2) < ((int32_t)1))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_000f;
		}
	}
	{
		goto IL_0088;
	}

IL_000f:
	{
		int32_t L_4 = V_0;
		V_2 = (bool)((((int32_t)L_4) < ((int32_t)8))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0024;
		}
	}
	{
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_6 = ___0_data;
		int32_t L_7 = ___1_start;
		int32_t L_8 = ___2_end;
		Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* L_9 = ___3_compare;
		Sorting_InsertionSort_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_m50C92303E813A7BFD084FB309E5FB9937C8F2065(L_6, L_7, L_8, L_9, il2cpp_rgctx_method(method->rgctx_data, 2));
		goto IL_0088;
	}

IL_0024:
	{
		int32_t L_10 = ___1_start;
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_11 = ___0_data;
		NullCheck(L_11);
		il2cpp_codegen_runtime_class_init_inline(Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		Assert_IsTrue_mE42C53B7220324D1FBAFB7AE48A7D8DD7796A663((bool)((((int64_t)((int64_t)(uint64_t)((uint32_t)L_10))) < ((int64_t)((int64_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))))? 1 : 0), NULL);
		int32_t L_12 = ___2_end;
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_13 = ___0_data;
		NullCheck(L_13);
		Assert_IsTrue_mE42C53B7220324D1FBAFB7AE48A7D8DD7796A663((bool)((((int64_t)((int64_t)(uint64_t)((uint32_t)L_12))) < ((int64_t)((int64_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))))? 1 : 0), NULL);
		int32_t L_14 = ___1_start;
		int32_t L_15 = ___2_end;
		V_3 = (bool)((((int32_t)L_14) < ((int32_t)L_15))? 1 : 0);
		bool L_16 = V_3;
		if (!L_16)
		{
			goto IL_0088;
		}
	}
	{
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_17 = ___0_data;
		int32_t L_18 = ___1_start;
		int32_t L_19 = ___2_end;
		Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* L_20 = ___3_compare;
		int32_t L_21;
		L_21 = Sorting_Partition_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_m0E79CA1E375645FFDF3E1506F789825A9A6D3D95(L_17, L_18, L_19, L_20, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_4 = L_21;
		int32_t L_22 = V_4;
		V_5 = (bool)((((int32_t)((((int32_t)L_22) < ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_23 = V_5;
		if (!L_23)
		{
			goto IL_006d;
		}
	}
	{
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_24 = ___0_data;
		int32_t L_25 = ___1_start;
		int32_t L_26 = V_4;
		Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* L_27 = ___3_compare;
		Sorting_QuickSort_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_mADD51465439832E9BCC31668A2DE42CFCCA07F9C(L_24, L_25, L_26, L_27, il2cpp_rgctx_method(method->rgctx_data, 4));
	}

IL_006d:
	{
		int32_t L_28 = V_4;
		int32_t L_29 = ___2_end;
		V_6 = (bool)((((int32_t)((int32_t)il2cpp_codegen_add(L_28, 1))) < ((int32_t)L_29))? 1 : 0);
		bool L_30 = V_6;
		if (!L_30)
		{
			goto IL_0087;
		}
	}
	{
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_31 = ___0_data;
		int32_t L_32 = V_4;
		int32_t L_33 = ___2_end;
		Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* L_34 = ___3_compare;
		Sorting_QuickSort_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_mADD51465439832E9BCC31668A2DE42CFCCA07F9C(L_31, ((int32_t)il2cpp_codegen_add(L_32, 1)), L_33, L_34, il2cpp_rgctx_method(method->rgctx_data, 4));
	}

IL_0087:
	{
	}

IL_0088:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_gshared (uint8_t* ___0_pointer, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	{
		uint8_t* L_0 = ___0_pointer;
		V_0 = (bool)((((intptr_t)L_0) == ((intptr_t)((uintptr_t)0)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000c;
		}
	}
	{
		goto IL_0018;
	}

IL_000c:
	{
		uint8_t* L_2 = ___0_pointer;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___1_allocator;
		uint8_t* L_4;
		L_4 = Array_Resize_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1767423622567D1059537F40EF99A5522126FBD0(L_2, ((int64_t)1), ((int64_t)0), L_3, il2cpp_rgctx_method(method->rgctx_data, 1));
	}

IL_0018:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unmanaged_Free_TisNativeQueueBlockHeader_tD74DEA5A5D8C910AA5ED04C5E89F2FE1B0521004_m243D8201F69E8B9517904DD82D2AF7681CC70844_gshared (NativeQueueBlockHeader_tD74DEA5A5D8C910AA5ED04C5E89F2FE1B0521004* ___0_pointer, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	{
		NativeQueueBlockHeader_tD74DEA5A5D8C910AA5ED04C5E89F2FE1B0521004* L_0 = ___0_pointer;
		V_0 = (bool)((((intptr_t)L_0) == ((intptr_t)((uintptr_t)0)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000c;
		}
	}
	{
		goto IL_0018;
	}

IL_000c:
	{
		NativeQueueBlockHeader_tD74DEA5A5D8C910AA5ED04C5E89F2FE1B0521004* L_2 = ___0_pointer;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___1_allocator;
		NativeQueueBlockHeader_tD74DEA5A5D8C910AA5ED04C5E89F2FE1B0521004* L_4;
		L_4 = Array_Resize_TisNativeQueueBlockHeader_tD74DEA5A5D8C910AA5ED04C5E89F2FE1B0521004_mF823D88C2CF36E927F7071E5ED1571B8DC2E7D51(L_2, ((int64_t)1), ((int64_t)0), L_3, il2cpp_rgctx_method(method->rgctx_data, 1));
	}

IL_0018:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unmanaged_Free_TisNativeQueueBlockPoolData_t3A0B3E1B852D995248D51AB68660D1B367D28E87_mB841F028990B75239A6FDF58EBC78E296907E772_gshared (NativeQueueBlockPoolData_t3A0B3E1B852D995248D51AB68660D1B367D28E87* ___0_pointer, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	{
		NativeQueueBlockPoolData_t3A0B3E1B852D995248D51AB68660D1B367D28E87* L_0 = ___0_pointer;
		V_0 = (bool)((((intptr_t)L_0) == ((intptr_t)((uintptr_t)0)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000c;
		}
	}
	{
		goto IL_0018;
	}

IL_000c:
	{
		NativeQueueBlockPoolData_t3A0B3E1B852D995248D51AB68660D1B367D28E87* L_2 = ___0_pointer;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___1_allocator;
		NativeQueueBlockPoolData_t3A0B3E1B852D995248D51AB68660D1B367D28E87* L_4;
		L_4 = Array_Resize_TisNativeQueueBlockPoolData_t3A0B3E1B852D995248D51AB68660D1B367D28E87_m0B0F25C920A5E2CC4CB3CF98A4E37180ADA06A7E(L_2, ((int64_t)1), ((int64_t)0), L_3, il2cpp_rgctx_method(method->rgctx_data, 1));
	}

IL_0018:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unmanaged_Free_TisNativeQueueData_t61B94D7FE48C5715DD5D0C8CB574F73BF15C6E52_m4D14134CC0BDD6353804BD8F2032D3B2D2F0C494_gshared (NativeQueueData_t61B94D7FE48C5715DD5D0C8CB574F73BF15C6E52* ___0_pointer, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	{
		NativeQueueData_t61B94D7FE48C5715DD5D0C8CB574F73BF15C6E52* L_0 = ___0_pointer;
		V_0 = (bool)((((intptr_t)L_0) == ((intptr_t)((uintptr_t)0)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000c;
		}
	}
	{
		goto IL_0018;
	}

IL_000c:
	{
		NativeQueueData_t61B94D7FE48C5715DD5D0C8CB574F73BF15C6E52* L_2 = ___0_pointer;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___1_allocator;
		NativeQueueData_t61B94D7FE48C5715DD5D0C8CB574F73BF15C6E52* L_4;
		L_4 = Array_Resize_TisNativeQueueData_t61B94D7FE48C5715DD5D0C8CB574F73BF15C6E52_mE421AA6A3572FBA2A310DC7DE4AFBEE98D2623E0(L_2, ((int64_t)1), ((int64_t)0), L_3, il2cpp_rgctx_method(method->rgctx_data, 1));
	}

IL_0018:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unmanaged_Free_TisUnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4_m44E1299744F197B4690015E38D6E5EB21AFDC0AC_gshared (UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4* ___0_pointer, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	{
		UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4* L_0 = ___0_pointer;
		V_0 = (bool)((((intptr_t)L_0) == ((intptr_t)((uintptr_t)0)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000c;
		}
	}
	{
		goto IL_0018;
	}

IL_000c:
	{
		UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4* L_2 = ___0_pointer;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___1_allocator;
		UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4* L_4;
		L_4 = Array_Resize_TisUnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4_mA531CDFFC7A4E38C552DFDEDFA1E8436B76F7DE9(L_2, ((int64_t)1), ((int64_t)0), L_3, il2cpp_rgctx_method(method->rgctx_data, 1));
	}

IL_0018:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unmanaged_Free_TisIl2CppFullySharedGenericStruct_mC5E4D92A647D08D8B3B7CCF667B40D0ECD8ACB83_gshared (Il2CppFullySharedGenericStruct* ___0_pointer, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	{
		Il2CppFullySharedGenericStruct* L_0 = ___0_pointer;
		V_0 = (bool)((((intptr_t)L_0) == ((intptr_t)((uintptr_t)0)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000c;
		}
	}
	{
		goto IL_0018;
	}

IL_000c:
	{
		Il2CppFullySharedGenericStruct* L_2 = ___0_pointer;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___1_allocator;
		Il2CppFullySharedGenericStruct* L_4;
		L_4 = ((  Il2CppFullySharedGenericStruct* (*) (Il2CppFullySharedGenericStruct*, int64_t, int64_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_2, ((int64_t)1), ((int64_t)0), L_3, il2cpp_rgctx_method(method->rgctx_data, 1));
	}

IL_0018:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unmanaged_Free_TisMemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84_m7B99D1F06742355AC760F246D818C9979FADF666_gshared (MemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84* ___0_pointer, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	{
		MemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84* L_0 = ___0_pointer;
		V_0 = (bool)((((intptr_t)L_0) == ((intptr_t)((uintptr_t)0)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000c;
		}
	}
	{
		goto IL_0018;
	}

IL_000c:
	{
		MemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84* L_2 = ___0_pointer;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___1_allocator;
		MemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84* L_4;
		L_4 = Array_Resize_TisMemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84_m66D39A0700C852DFD578157D9E4862A8230233F3(L_2, ((int64_t)1), ((int64_t)0), L_3, il2cpp_rgctx_method(method->rgctx_data, 1));
	}

IL_0018:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RenderGraphResourcesData_AddNewRenderGraphResource_TisRuntimeObject_mB9040DF97633813729CADB454AAEAF31E23C7E91_gshared (RenderGraphResourcesData_tB2FF97B16A3E1DE700283778679C5CC0C39F4CFE* __this, RuntimeObject** ___0_outRes, bool ___1_pooledResource, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DynamicArray_1_Resize_mEEEB907EAEFD4C22DB449FF052CF6AC967A27AD1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DynamicArray_1_get_Item_m5FC9383C3A815B0DF7AAD4C2A5CDFB1A25586ECE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DynamicArray_1_get_size_m56D2768863B15299FA4F2F14E271686207A8C2E4_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	RuntimeObject** G_B4_0 = NULL;
	RuntimeObject** G_B3_0 = NULL;
	IRenderGraphResourcePool_t8BF833F3C5D0BD8E45632CF923363EC782F4DDA8* G_B5_0 = NULL;
	RuntimeObject** G_B5_1 = NULL;
	{
		DynamicArray_1_t401F46C0081DE185BCAB1D30DE8D6B6DC9AA6AFB* L_0 = __this->___resourceArray;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = DynamicArray_1_get_size_m56D2768863B15299FA4F2F14E271686207A8C2E4_inline(L_0, DynamicArray_1_get_size_m56D2768863B15299FA4F2F14E271686207A8C2E4_RuntimeMethod_var);
		V_0 = L_1;
		DynamicArray_1_t401F46C0081DE185BCAB1D30DE8D6B6DC9AA6AFB* L_2 = __this->___resourceArray;
		DynamicArray_1_t401F46C0081DE185BCAB1D30DE8D6B6DC9AA6AFB* L_3 = __this->___resourceArray;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = DynamicArray_1_get_size_m56D2768863B15299FA4F2F14E271686207A8C2E4_inline(L_3, DynamicArray_1_get_size_m56D2768863B15299FA4F2F14E271686207A8C2E4_RuntimeMethod_var);
		NullCheck(L_2);
		DynamicArray_1_Resize_mEEEB907EAEFD4C22DB449FF052CF6AC967A27AD1(L_2, ((int32_t)il2cpp_codegen_add(L_4, 1)), (bool)1, DynamicArray_1_Resize_mEEEB907EAEFD4C22DB449FF052CF6AC967A27AD1_RuntimeMethod_var);
		DynamicArray_1_t401F46C0081DE185BCAB1D30DE8D6B6DC9AA6AFB* L_5 = __this->___resourceArray;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		IRenderGraphResource_tF24653A388C17849844C128C19C7A6599C7ADB7D** L_7;
		L_7 = DynamicArray_1_get_Item_m5FC9383C3A815B0DF7AAD4C2A5CDFB1A25586ECE(L_5, L_6, DynamicArray_1_get_Item_m5FC9383C3A815B0DF7AAD4C2A5CDFB1A25586ECE_RuntimeMethod_var);
		IRenderGraphResource_tF24653A388C17849844C128C19C7A6599C7ADB7D* L_8 = *((IRenderGraphResource_tF24653A388C17849844C128C19C7A6599C7ADB7D**)L_7);
		V_1 = (bool)((((RuntimeObject*)(IRenderGraphResource_tF24653A388C17849844C128C19C7A6599C7ADB7D*)L_8) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_9 = V_1;
		if (!L_9)
		{
			goto IL_0052;
		}
	}
	{
		DynamicArray_1_t401F46C0081DE185BCAB1D30DE8D6B6DC9AA6AFB* L_10 = __this->___resourceArray;
		int32_t L_11 = V_0;
		NullCheck(L_10);
		IRenderGraphResource_tF24653A388C17849844C128C19C7A6599C7ADB7D** L_12;
		L_12 = DynamicArray_1_get_Item_m5FC9383C3A815B0DF7AAD4C2A5CDFB1A25586ECE(L_10, L_11, DynamicArray_1_get_Item_m5FC9383C3A815B0DF7AAD4C2A5CDFB1A25586ECE_RuntimeMethod_var);
		RuntimeObject* L_13;
		L_13 = Activator_CreateInstance_TisRuntimeObject_m62506836177F0F862A8D619638BF37F48721F138(il2cpp_rgctx_method(method->rgctx_data, 0));
		*((RuntimeObject**)L_12) = (RuntimeObject*)L_13;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_12, (void*)(RuntimeObject*)L_13);
	}

IL_0052:
	{
		RuntimeObject** L_14 = ___0_outRes;
		DynamicArray_1_t401F46C0081DE185BCAB1D30DE8D6B6DC9AA6AFB* L_15 = __this->___resourceArray;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		IRenderGraphResource_tF24653A388C17849844C128C19C7A6599C7ADB7D** L_17;
		L_17 = DynamicArray_1_get_Item_m5FC9383C3A815B0DF7AAD4C2A5CDFB1A25586ECE(L_15, L_16, DynamicArray_1_get_Item_m5FC9383C3A815B0DF7AAD4C2A5CDFB1A25586ECE_RuntimeMethod_var);
		IRenderGraphResource_tF24653A388C17849844C128C19C7A6599C7ADB7D* L_18 = *((IRenderGraphResource_tF24653A388C17849844C128C19C7A6599C7ADB7D**)L_17);
		*(RuntimeObject**)L_14 = ((RuntimeObject*)Castclass((RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_18, il2cpp_rgctx_data(method->rgctx_data, 1))), il2cpp_rgctx_data(method->rgctx_data, 1)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_14, (void*)((RuntimeObject*)Castclass((RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_18, il2cpp_rgctx_data(method->rgctx_data, 1))), il2cpp_rgctx_data(method->rgctx_data, 1))));
		RuntimeObject** L_19 = ___0_outRes;
		bool L_20 = ___1_pooledResource;
		if (L_20)
		{
			G_B4_0 = L_19;
			goto IL_0076;
		}
		G_B3_0 = L_19;
	}
	{
		G_B5_0 = ((IRenderGraphResourcePool_t8BF833F3C5D0BD8E45632CF923363EC782F4DDA8*)(NULL));
		G_B5_1 = G_B3_0;
		goto IL_007c;
	}

IL_0076:
	{
		IRenderGraphResourcePool_t8BF833F3C5D0BD8E45632CF923363EC782F4DDA8* L_21 = __this->___pool;
		G_B5_0 = L_21;
		G_B5_1 = G_B4_0;
	}

IL_007c:
	{
		NullCheck((IRenderGraphResource_tF24653A388C17849844C128C19C7A6599C7ADB7D*)(*G_B5_1));
		VirtualActionInvoker1< IRenderGraphResourcePool_t8BF833F3C5D0BD8E45632CF923363EC782F4DDA8* >::Invoke(4, (IRenderGraphResource_tF24653A388C17849844C128C19C7A6599C7ADB7D*)(*G_B5_1), G_B5_0);
		int32_t L_22 = V_0;
		V_2 = L_22;
		goto IL_008c;
	}

IL_008c:
	{
		int32_t L_23 = V_2;
		return L_23;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m2A21711A3D655B51E421ACBEA3F03A09C8BBC250_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m16C827D0F6107B7998F6C99B57F7CC2F181E2198(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisBoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485_mA9E7AA6DB293483965B65EEEBF63885DEF084EA2_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisBoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485_m8F344250A2F9E6EE6DDBA6BA833BB36D0F272B66(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisRuntimeObject_m6C6E2EDC433DCAB90206712FB63993865A9B9305_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisRuntimeObject_m4E17F588B090C1DADAE2D986BDA407DECEAC020F(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_m97DBB59374BCA99C98C45F169AF69955608B68AA_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_m2C5F5CF80D13B041768C7845C5AAEEC02BB683BA(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisRectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8_m7C42EB46E69BD2515C39AB6013A0763C6479AD66_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisRectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8_mF6949D9EDD480E6666CD975C66487AAD6ABC7D11(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisVector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_m0E8E39845CA3F1BFADAC1B15E849E5885D813E6F_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisVector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_mC8EF710494C8986B279262C6C64947BE2C1DC55C(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m28D19B06528A4614AF9C3E29DC8274DE067868D8_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_mB00220519A80AA5ACE36B7DBA2E6A6CB796302AF(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisIl2CppFullySharedGenericAny_m8B414261A078E3FE7517FAF2F9E944969F6B73E2_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* Array_Resize_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1767423622567D1059537F40EF99A5522126FBD0_gshared (uint8_t* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	uint8_t* V_0 = NULL;
	{
		uint8_t* L_0 = ___0_oldPointer;
		int64_t L_1 = ___1_oldCount;
		int64_t L_2 = ___2_newCount;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___3_allocator;
		int32_t L_4;
		L_4 = UnsafeUtility_SizeOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m97C7D5E5DE74DC60A0ECAA914830BEDF2C46ACAA_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_5;
		L_5 = UnsafeUtility_AlignOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB152D3C658FB48DEDB6E662EEB0C91018E7F2857(il2cpp_rgctx_method(method->rgctx_data, 2));
		void* L_6;
		L_6 = Array_Resize_mC7BE2965DE3FCF4014D43B606D94951480A65380((void*)L_0, L_1, L_2, L_3, ((int64_t)L_4), L_5, NULL);
		V_0 = (uint8_t*)L_6;
		goto IL_0018;
	}

IL_0018:
	{
		uint8_t* L_7 = V_0;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeQueueBlockHeader_tD74DEA5A5D8C910AA5ED04C5E89F2FE1B0521004* Array_Resize_TisNativeQueueBlockHeader_tD74DEA5A5D8C910AA5ED04C5E89F2FE1B0521004_mF823D88C2CF36E927F7071E5ED1571B8DC2E7D51_gshared (NativeQueueBlockHeader_tD74DEA5A5D8C910AA5ED04C5E89F2FE1B0521004* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	NativeQueueBlockHeader_tD74DEA5A5D8C910AA5ED04C5E89F2FE1B0521004* V_0 = NULL;
	{
		NativeQueueBlockHeader_tD74DEA5A5D8C910AA5ED04C5E89F2FE1B0521004* L_0 = ___0_oldPointer;
		int64_t L_1 = ___1_oldCount;
		int64_t L_2 = ___2_newCount;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___3_allocator;
		int32_t L_4;
		L_4 = UnsafeUtility_SizeOf_TisNativeQueueBlockHeader_tD74DEA5A5D8C910AA5ED04C5E89F2FE1B0521004_mD17298D011DA1F41116B52EA79F5E53E3C07037F_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_5;
		L_5 = UnsafeUtility_AlignOf_TisNativeQueueBlockHeader_tD74DEA5A5D8C910AA5ED04C5E89F2FE1B0521004_mB6891C7A8270EA99BA8C7616A4B23733FE8BED87(il2cpp_rgctx_method(method->rgctx_data, 2));
		void* L_6;
		L_6 = Array_Resize_mC7BE2965DE3FCF4014D43B606D94951480A65380((void*)L_0, L_1, L_2, L_3, ((int64_t)L_4), L_5, NULL);
		V_0 = (NativeQueueBlockHeader_tD74DEA5A5D8C910AA5ED04C5E89F2FE1B0521004*)L_6;
		goto IL_0018;
	}

IL_0018:
	{
		NativeQueueBlockHeader_tD74DEA5A5D8C910AA5ED04C5E89F2FE1B0521004* L_7 = V_0;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeQueueBlockPoolData_t3A0B3E1B852D995248D51AB68660D1B367D28E87* Array_Resize_TisNativeQueueBlockPoolData_t3A0B3E1B852D995248D51AB68660D1B367D28E87_m0B0F25C920A5E2CC4CB3CF98A4E37180ADA06A7E_gshared (NativeQueueBlockPoolData_t3A0B3E1B852D995248D51AB68660D1B367D28E87* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	NativeQueueBlockPoolData_t3A0B3E1B852D995248D51AB68660D1B367D28E87* V_0 = NULL;
	{
		NativeQueueBlockPoolData_t3A0B3E1B852D995248D51AB68660D1B367D28E87* L_0 = ___0_oldPointer;
		int64_t L_1 = ___1_oldCount;
		int64_t L_2 = ___2_newCount;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___3_allocator;
		int32_t L_4;
		L_4 = UnsafeUtility_SizeOf_TisNativeQueueBlockPoolData_t3A0B3E1B852D995248D51AB68660D1B367D28E87_mC7FEAA8F718320B4F881566EB9C8D910A41CC37A_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_5;
		L_5 = UnsafeUtility_AlignOf_TisNativeQueueBlockPoolData_t3A0B3E1B852D995248D51AB68660D1B367D28E87_m8EF809058620A5D5C36B4732089B9D4DA178136D(il2cpp_rgctx_method(method->rgctx_data, 2));
		void* L_6;
		L_6 = Array_Resize_mC7BE2965DE3FCF4014D43B606D94951480A65380((void*)L_0, L_1, L_2, L_3, ((int64_t)L_4), L_5, NULL);
		V_0 = (NativeQueueBlockPoolData_t3A0B3E1B852D995248D51AB68660D1B367D28E87*)L_6;
		goto IL_0018;
	}

IL_0018:
	{
		NativeQueueBlockPoolData_t3A0B3E1B852D995248D51AB68660D1B367D28E87* L_7 = V_0;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeQueueData_t61B94D7FE48C5715DD5D0C8CB574F73BF15C6E52* Array_Resize_TisNativeQueueData_t61B94D7FE48C5715DD5D0C8CB574F73BF15C6E52_mE421AA6A3572FBA2A310DC7DE4AFBEE98D2623E0_gshared (NativeQueueData_t61B94D7FE48C5715DD5D0C8CB574F73BF15C6E52* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	NativeQueueData_t61B94D7FE48C5715DD5D0C8CB574F73BF15C6E52* V_0 = NULL;
	{
		NativeQueueData_t61B94D7FE48C5715DD5D0C8CB574F73BF15C6E52* L_0 = ___0_oldPointer;
		int64_t L_1 = ___1_oldCount;
		int64_t L_2 = ___2_newCount;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___3_allocator;
		int32_t L_4;
		L_4 = UnsafeUtility_SizeOf_TisNativeQueueData_t61B94D7FE48C5715DD5D0C8CB574F73BF15C6E52_m494294FC3C525306A1D00A1A452B1000C14A7D40_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_5;
		L_5 = UnsafeUtility_AlignOf_TisNativeQueueData_t61B94D7FE48C5715DD5D0C8CB574F73BF15C6E52_mD305539B45883F475C5E06B9227D6142D41C6823(il2cpp_rgctx_method(method->rgctx_data, 2));
		void* L_6;
		L_6 = Array_Resize_mC7BE2965DE3FCF4014D43B606D94951480A65380((void*)L_0, L_1, L_2, L_3, ((int64_t)L_4), L_5, NULL);
		V_0 = (NativeQueueData_t61B94D7FE48C5715DD5D0C8CB574F73BF15C6E52*)L_6;
		goto IL_0018;
	}

IL_0018:
	{
		NativeQueueData_t61B94D7FE48C5715DD5D0C8CB574F73BF15C6E52* L_7 = V_0;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4* Array_Resize_TisUnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4_mA531CDFFC7A4E38C552DFDEDFA1E8436B76F7DE9_gshared (UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4* V_0 = NULL;
	{
		UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4* L_0 = ___0_oldPointer;
		int64_t L_1 = ___1_oldCount;
		int64_t L_2 = ___2_newCount;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___3_allocator;
		int32_t L_4;
		L_4 = UnsafeUtility_SizeOf_TisUnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4_mCF165A03E97D72A1EC00EA0FA1B0A1A9F3B6EF6B_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_5;
		L_5 = UnsafeUtility_AlignOf_TisUnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4_mE84A0B9A63BCBBD40FD2A575AC555294A28A93A3(il2cpp_rgctx_method(method->rgctx_data, 2));
		void* L_6;
		L_6 = Array_Resize_mC7BE2965DE3FCF4014D43B606D94951480A65380((void*)L_0, L_1, L_2, L_3, ((int64_t)L_4), L_5, NULL);
		V_0 = (UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4*)L_6;
		goto IL_0018;
	}

IL_0018:
	{
		UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4* L_7 = V_0;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* Array_Resize_TisIl2CppFullySharedGenericStruct_m07039200651D43DBB7FBC0CB244761DA34C164FD_gshared (Il2CppFullySharedGenericStruct* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	Il2CppFullySharedGenericStruct* V_0 = NULL;
	{
		Il2CppFullySharedGenericStruct* L_0 = ___0_oldPointer;
		int64_t L_1 = ___1_oldCount;
		int64_t L_2 = ___2_newCount;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___3_allocator;
		int32_t L_4;
		L_4 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_5;
		L_5 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(il2cpp_rgctx_method(method->rgctx_data, 2));
		void* L_6;
		L_6 = Array_Resize_mC7BE2965DE3FCF4014D43B606D94951480A65380((void*)L_0, L_1, L_2, L_3, ((int64_t)L_4), L_5, NULL);
		V_0 = (Il2CppFullySharedGenericStruct*)L_6;
		goto IL_0018;
	}

IL_0018:
	{
		Il2CppFullySharedGenericStruct* L_7 = V_0;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84* Array_Resize_TisMemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84_m66D39A0700C852DFD578157D9E4862A8230233F3_gshared (MemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	MemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84* V_0 = NULL;
	{
		MemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84* L_0 = ___0_oldPointer;
		int64_t L_1 = ___1_oldCount;
		int64_t L_2 = ___2_newCount;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___3_allocator;
		int32_t L_4;
		L_4 = UnsafeUtility_SizeOf_TisMemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84_m4A0947EA519A2614EC19544513888A4DC5F42919_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_5;
		L_5 = UnsafeUtility_AlignOf_TisMemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84_m6AD8B4EF31CDD94CA734378B1443806DAFE68A05(il2cpp_rgctx_method(method->rgctx_data, 2));
		void* L_6;
		L_6 = Array_Resize_mC7BE2965DE3FCF4014D43B606D94951480A65380((void*)L_0, L_1, L_2, L_3, ((int64_t)L_4), L_5, NULL);
		V_0 = (MemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84*)L_6;
		goto IL_0018;
	}

IL_0018:
	{
		MemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84* L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t XXHash_Hash32_m32173EED06C4A1A3F85AA601FE079202964153FF_inline (Type_t* ___0_type, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = ___0_type;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(25, L_0);
		uint32_t L_2;
		L_2 = XXHash_Hash32_mDAC30AB830DFD291A7AA57B33B1424F7DBC972AB_inline(L_1, NULL);
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t XXHash_Hash64_mED063B27131C19B79F8CE60BC883B3A2463331D8_inline (Type_t* ___0_type, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = ___0_type;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(25, L_0);
		uint64_t L_2;
		L_2 = XXHash_Hash64_mDB605937592EA5AC4862D8FCE939459F5B7F133E_inline(L_1, NULL);
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____current;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___0_item;
		List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Func_3_Invoke_mE6CD106F59B0ADD2DF9C211DC4CF4088F5A1A4BB_gshared_inline (Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___0_arg1, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___1_arg2, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg1, ___1_arg2, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Func_3_Invoke_m2AED59BE1B0645C0DB5DAE117842A1C0AD4BDEBB_gshared_inline (Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* __this, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 ___0_arg1, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 ___1_arg2, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg1, ___1_arg2, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t DynamicArray_1_get_size_m1B00C20A8CC4D62269585D16A58425D3F258836F_gshared_inline (DynamicArray_1_t7C64F5A74B7BA6F6B3589A766CADE3F59C6C7BCA* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CsizeU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m97C7D5E5DE74DC60A0ECAA914830BEDF2C46ACAA_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(uint8_t);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisNativeQueueBlockHeader_tD74DEA5A5D8C910AA5ED04C5E89F2FE1B0521004_mD17298D011DA1F41116B52EA79F5E53E3C07037F_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(NativeQueueBlockHeader_tD74DEA5A5D8C910AA5ED04C5E89F2FE1B0521004);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisNativeQueueBlockPoolData_t3A0B3E1B852D995248D51AB68660D1B367D28E87_mC7FEAA8F718320B4F881566EB9C8D910A41CC37A_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(NativeQueueBlockPoolData_t3A0B3E1B852D995248D51AB68660D1B367D28E87);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisNativeQueueData_t61B94D7FE48C5715DD5D0C8CB574F73BF15C6E52_m494294FC3C525306A1D00A1A452B1000C14A7D40_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(NativeQueueData_t61B94D7FE48C5715DD5D0C8CB574F73BF15C6E52);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisUnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4_mCF165A03E97D72A1EC00EA0FA1B0A1A9F3B6EF6B_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisMemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84_m4A0947EA519A2614EC19544513888A4DC5F42919_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(MemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t XXHash_Hash32_mDAC30AB830DFD291A7AA57B33B1424F7DBC972AB_inline (String_t* ___0_text, const RuntimeMethod* method) 
{
	{
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_0;
		L_0 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		String_t* L_1 = ___0_text;
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(17, L_0, L_1);
		uint32_t L_3;
		L_3 = XXHash_Hash32_m138B37A17F29CC75B22A5AE277C1223A76A53F9A_inline(L_2, NULL);
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t XXHash_Hash64_mDB605937592EA5AC4862D8FCE939459F5B7F133E_inline (String_t* ___0_text, const RuntimeMethod* method) 
{
	{
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_0;
		L_0 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		String_t* L_1 = ___0_text;
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(17, L_0, L_1);
		uint64_t L_3;
		L_3 = XXHash_Hash64_m114637D3DC860457D89B4E70C47E6A53EAED7F73_inline(L_2, NULL);
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t XXHash_Hash32_m138B37A17F29CC75B22A5AE277C1223A76A53F9A_inline (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	uint8_t* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	uint32_t V_3 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_buffer;
		NullCheck(L_0);
		V_0 = ((int32_t)(((RuntimeArray*)L_0)->max_length));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_buffer;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = L_1;
		V_2 = L_2;
		if (!L_2)
		{
			goto IL_0010;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_2;
		NullCheck(L_3);
		if (((int32_t)(((RuntimeArray*)L_3)->max_length)))
		{
			goto IL_0015;
		}
	}

IL_0010:
	{
		V_1 = (uint8_t*)((uintptr_t)0);
		goto IL_001e;
	}

IL_0015:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_2;
		NullCheck(L_4);
		V_1 = (uint8_t*)((uintptr_t)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_001e:
	{
		uint8_t* L_5 = V_1;
		int32_t L_6 = V_0;
		uint32_t L_7;
		L_7 = XXHash_Hash32_m5536481B50CD190C44DFAFF662A57E441A532AB0_inline(L_5, L_6, 0, NULL);
		V_3 = L_7;
		goto IL_002a;
	}

IL_002a:
	{
		uint32_t L_8 = V_3;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t XXHash_Hash64_m114637D3DC860457D89B4E70C47E6A53EAED7F73_inline (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	uint8_t* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	uint64_t V_3 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_buffer;
		NullCheck(L_0);
		V_0 = ((int32_t)(((RuntimeArray*)L_0)->max_length));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_buffer;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = L_1;
		V_2 = L_2;
		if (!L_2)
		{
			goto IL_0010;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_2;
		NullCheck(L_3);
		if (((int32_t)(((RuntimeArray*)L_3)->max_length)))
		{
			goto IL_0015;
		}
	}

IL_0010:
	{
		V_1 = (uint8_t*)((uintptr_t)0);
		goto IL_001e;
	}

IL_0015:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_2;
		NullCheck(L_4);
		V_1 = (uint8_t*)((uintptr_t)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_001e:
	{
		uint8_t* L_5 = V_1;
		int32_t L_6 = V_0;
		uint64_t L_7;
		L_7 = XXHash_Hash64_mB6D41A88BD9EE1A8485AF3BDF38732BBA1DA7DC7_inline(L_5, L_6, 0, NULL);
		V_3 = L_7;
		goto IL_002a;
	}

IL_002a:
	{
		uint64_t L_8 = V_3;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t XXHash_Hash32_m5536481B50CD190C44DFAFF662A57E441A532AB0_inline (uint8_t* ___0_input, int32_t ___1_length, uint32_t ___2_seed, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	bool V_1 = false;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	uint32_t V_4 = 0;
	uint32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	uint32_t V_8 = 0;
	uint32_t V_9 = 0;
	uint32_t V_10 = 0;
	uint32_t V_11 = 0;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	uint32_t V_15 = 0;
	{
		uint32_t L_0 = ___2_seed;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_0, ((int32_t)374761393)));
		int32_t L_1 = ___1_length;
		V_1 = (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)((int32_t)16)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_012a;
		}
	}
	{
		uint32_t L_3 = ___2_seed;
		V_2 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_3, ((int32_t)-1640531535))), ((int32_t)-2048144777)));
		uint32_t L_4 = ___2_seed;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, ((int32_t)-2048144777)));
		uint32_t L_5 = ___2_seed;
		V_4 = L_5;
		uint32_t L_6 = ___2_seed;
		V_5 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_6, ((int32_t)-1640531535)));
		int32_t L_7 = ___1_length;
		V_6 = ((int32_t)(L_7>>4));
		V_7 = 0;
		goto IL_00f0;
	}

IL_0049:
	{
		uint8_t* L_8 = ___0_input;
		int32_t L_9 = *((uint32_t*)L_8);
		V_8 = L_9;
		uint8_t* L_10 = ___0_input;
		int32_t L_11 = *((uint32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_10, 4)));
		V_9 = L_11;
		uint8_t* L_12 = ___0_input;
		int32_t L_13 = *((uint32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_12, 8)));
		V_10 = L_13;
		uint8_t* L_14 = ___0_input;
		int32_t L_15 = *((uint32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_14, ((int32_t)12))));
		V_11 = L_15;
		uint32_t L_16 = V_2;
		uint32_t L_17 = V_8;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, ((int32_t)il2cpp_codegen_multiply((int32_t)L_17, ((int32_t)-2048144777)))));
		uint32_t L_18 = V_2;
		uint32_t L_19 = V_2;
		V_2 = ((int32_t)(((int32_t)((int32_t)L_18<<((int32_t)13)))|((int32_t)((uint32_t)L_19>>((int32_t)19)))));
		uint32_t L_20 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_20, ((int32_t)-1640531535)));
		uint32_t L_21 = V_3;
		uint32_t L_22 = V_9;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_21, ((int32_t)il2cpp_codegen_multiply((int32_t)L_22, ((int32_t)-2048144777)))));
		uint32_t L_23 = V_3;
		uint32_t L_24 = V_3;
		V_3 = ((int32_t)(((int32_t)((int32_t)L_23<<((int32_t)13)))|((int32_t)((uint32_t)L_24>>((int32_t)19)))));
		uint32_t L_25 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_25, ((int32_t)-1640531535)));
		uint32_t L_26 = V_4;
		uint32_t L_27 = V_10;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_26, ((int32_t)il2cpp_codegen_multiply((int32_t)L_27, ((int32_t)-2048144777)))));
		uint32_t L_28 = V_4;
		uint32_t L_29 = V_4;
		V_4 = ((int32_t)(((int32_t)((int32_t)L_28<<((int32_t)13)))|((int32_t)((uint32_t)L_29>>((int32_t)19)))));
		uint32_t L_30 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_30, ((int32_t)-1640531535)));
		uint32_t L_31 = V_5;
		uint32_t L_32 = V_11;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_31, ((int32_t)il2cpp_codegen_multiply((int32_t)L_32, ((int32_t)-2048144777)))));
		uint32_t L_33 = V_5;
		uint32_t L_34 = V_5;
		V_5 = ((int32_t)(((int32_t)((int32_t)L_33<<((int32_t)13)))|((int32_t)((uint32_t)L_34>>((int32_t)19)))));
		uint32_t L_35 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_35, ((int32_t)-1640531535)));
		uint8_t* L_36 = ___0_input;
		___0_input = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_36, ((int32_t)16)));
		int32_t L_37 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_37, 1));
	}

IL_00f0:
	{
		int32_t L_38 = V_7;
		int32_t L_39 = V_6;
		V_12 = (bool)((((int32_t)L_38) < ((int32_t)L_39))? 1 : 0);
		bool L_40 = V_12;
		if (L_40)
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_41 = V_2;
		uint32_t L_42 = V_2;
		uint32_t L_43 = V_3;
		uint32_t L_44 = V_3;
		uint32_t L_45 = V_4;
		uint32_t L_46 = V_4;
		uint32_t L_47 = V_5;
		uint32_t L_48 = V_5;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_41<<1))|((int32_t)((uint32_t)L_42>>((int32_t)31))))), ((int32_t)(((int32_t)((int32_t)L_43<<7))|((int32_t)((uint32_t)L_44>>((int32_t)25))))))), ((int32_t)(((int32_t)((int32_t)L_45<<((int32_t)12)))|((int32_t)((uint32_t)L_46>>((int32_t)20))))))), ((int32_t)(((int32_t)((int32_t)L_47<<((int32_t)18)))|((int32_t)((uint32_t)L_48>>((int32_t)14)))))));
	}

IL_012a:
	{
		uint32_t L_49 = V_0;
		int32_t L_50 = ___1_length;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_49, L_50));
		int32_t L_51 = ___1_length;
		___1_length = ((int32_t)(L_51&((int32_t)15)));
		goto IL_015d;
	}

IL_0136:
	{
		uint32_t L_52 = V_0;
		uint8_t* L_53 = ___0_input;
		int32_t L_54 = *((uint32_t*)L_53);
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_52, ((int32_t)il2cpp_codegen_multiply(L_54, ((int32_t)-1028477379)))));
		uint32_t L_55 = V_0;
		uint32_t L_56 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)(((int32_t)((int32_t)L_55<<((int32_t)17)))|((int32_t)((uint32_t)L_56>>((int32_t)15))))), ((int32_t)668265263)));
		uint8_t* L_57 = ___0_input;
		___0_input = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_57, 4));
		int32_t L_58 = ___1_length;
		___1_length = ((int32_t)il2cpp_codegen_subtract(L_58, 4));
	}

IL_015d:
	{
		int32_t L_59 = ___1_length;
		V_13 = (bool)((((int32_t)((((int32_t)L_59) < ((int32_t)4))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_60 = V_13;
		if (L_60)
		{
			goto IL_0136;
		}
	}
	{
		goto IL_0193;
	}

IL_016c:
	{
		uint32_t L_61 = V_0;
		uint8_t* L_62 = ___0_input;
		int32_t L_63 = (*(L_62));
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_61, ((int32_t)il2cpp_codegen_multiply(L_63, ((int32_t)374761393)))));
		uint32_t L_64 = V_0;
		uint32_t L_65 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)(((int32_t)((int32_t)L_64<<((int32_t)11)))|((int32_t)((uint32_t)L_65>>((int32_t)21))))), ((int32_t)-1640531535)));
		uint8_t* L_66 = ___0_input;
		___0_input = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_66, 1));
		int32_t L_67 = ___1_length;
		___1_length = ((int32_t)il2cpp_codegen_subtract(L_67, 1));
	}

IL_0193:
	{
		int32_t L_68 = ___1_length;
		V_14 = (bool)((((int32_t)L_68) > ((int32_t)0))? 1 : 0);
		bool L_69 = V_14;
		if (L_69)
		{
			goto IL_016c;
		}
	}
	{
		uint32_t L_70 = V_0;
		uint32_t L_71 = V_0;
		V_0 = ((int32_t)((int32_t)L_70^((int32_t)((uint32_t)L_71>>((int32_t)15)))));
		uint32_t L_72 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_72, ((int32_t)-2048144777)));
		uint32_t L_73 = V_0;
		uint32_t L_74 = V_0;
		V_0 = ((int32_t)((int32_t)L_73^((int32_t)((uint32_t)L_74>>((int32_t)13)))));
		uint32_t L_75 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_75, ((int32_t)-1028477379)));
		uint32_t L_76 = V_0;
		uint32_t L_77 = V_0;
		V_0 = ((int32_t)((int32_t)L_76^((int32_t)((uint32_t)L_77>>((int32_t)16)))));
		uint32_t L_78 = V_0;
		V_15 = L_78;
		goto IL_01c7;
	}

IL_01c7:
	{
		uint32_t L_79 = V_15;
		return L_79;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t XXHash_Hash64_mB6D41A88BD9EE1A8485AF3BDF38732BBA1DA7DC7_inline (uint8_t* ___0_input, int32_t ___1_length, uint32_t ___2_seed, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	bool V_1 = false;
	uint64_t V_2 = 0;
	uint64_t V_3 = 0;
	uint64_t V_4 = 0;
	uint64_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	uint64_t V_8 = 0;
	uint64_t V_9 = 0;
	uint64_t V_10 = 0;
	uint64_t V_11 = 0;
	bool V_12 = false;
	uint64_t V_13 = 0;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	uint64_t V_17 = 0;
	{
		uint32_t L_0 = ___2_seed;
		V_0 = ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_0), ((int64_t)2870177450012600261LL)));
		int32_t L_1 = ___1_length;
		V_1 = (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)((int32_t)32)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0264;
		}
	}
	{
		uint32_t L_3 = ___2_seed;
		V_2 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_3), ((int64_t)-7046029288634856825LL))), ((int64_t)-4417276706812531889LL)));
		uint32_t L_4 = ___2_seed;
		V_3 = ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_4), ((int64_t)-4417276706812531889LL)));
		uint32_t L_5 = ___2_seed;
		V_4 = ((int64_t)(uint64_t)L_5);
		uint32_t L_6 = ___2_seed;
		V_5 = ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_6), ((int64_t)-7046029288634856825LL)));
		int32_t L_7 = ___1_length;
		V_6 = ((int32_t)(L_7>>5));
		V_7 = 0;
		goto IL_012a;
	}

IL_0062:
	{
		uint8_t* L_8 = ___0_input;
		int64_t L_9 = *((int64_t*)L_8);
		V_8 = L_9;
		uint8_t* L_10 = ___0_input;
		int64_t L_11 = *((int64_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_10, 8)));
		V_9 = L_11;
		uint8_t* L_12 = ___0_input;
		int64_t L_13 = *((int64_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_12, ((int32_t)16))));
		V_10 = L_13;
		uint8_t* L_14 = ___0_input;
		int64_t L_15 = *((int64_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_14, ((int32_t)24))));
		V_11 = L_15;
		uint64_t L_16 = V_2;
		uint64_t L_17 = V_8;
		V_2 = ((int64_t)il2cpp_codegen_add((int64_t)L_16, ((int64_t)il2cpp_codegen_multiply((int64_t)L_17, ((int64_t)-4417276706812531889LL)))));
		uint64_t L_18 = V_2;
		uint64_t L_19 = V_2;
		V_2 = ((int64_t)(((int64_t)((int64_t)L_18<<((int32_t)31)))|((int64_t)((uint64_t)L_19>>((int32_t)33)))));
		uint64_t L_20 = V_2;
		V_2 = ((int64_t)il2cpp_codegen_multiply((int64_t)L_20, ((int64_t)-7046029288634856825LL)));
		uint64_t L_21 = V_3;
		uint64_t L_22 = V_9;
		V_3 = ((int64_t)il2cpp_codegen_add((int64_t)L_21, ((int64_t)il2cpp_codegen_multiply((int64_t)L_22, ((int64_t)-4417276706812531889LL)))));
		uint64_t L_23 = V_3;
		uint64_t L_24 = V_3;
		V_3 = ((int64_t)(((int64_t)((int64_t)L_23<<((int32_t)31)))|((int64_t)((uint64_t)L_24>>((int32_t)33)))));
		uint64_t L_25 = V_3;
		V_3 = ((int64_t)il2cpp_codegen_multiply((int64_t)L_25, ((int64_t)-7046029288634856825LL)));
		uint64_t L_26 = V_4;
		uint64_t L_27 = V_10;
		V_4 = ((int64_t)il2cpp_codegen_add((int64_t)L_26, ((int64_t)il2cpp_codegen_multiply((int64_t)L_27, ((int64_t)-4417276706812531889LL)))));
		uint64_t L_28 = V_4;
		uint64_t L_29 = V_4;
		V_4 = ((int64_t)(((int64_t)((int64_t)L_28<<((int32_t)31)))|((int64_t)((uint64_t)L_29>>((int32_t)33)))));
		uint64_t L_30 = V_4;
		V_4 = ((int64_t)il2cpp_codegen_multiply((int64_t)L_30, ((int64_t)-7046029288634856825LL)));
		uint64_t L_31 = V_5;
		uint64_t L_32 = V_11;
		V_5 = ((int64_t)il2cpp_codegen_add((int64_t)L_31, ((int64_t)il2cpp_codegen_multiply((int64_t)L_32, ((int64_t)-4417276706812531889LL)))));
		uint64_t L_33 = V_5;
		uint64_t L_34 = V_5;
		V_5 = ((int64_t)(((int64_t)((int64_t)L_33<<((int32_t)31)))|((int64_t)((uint64_t)L_34>>((int32_t)33)))));
		uint64_t L_35 = V_5;
		V_5 = ((int64_t)il2cpp_codegen_multiply((int64_t)L_35, ((int64_t)-7046029288634856825LL)));
		uint8_t* L_36 = ___0_input;
		___0_input = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_36, ((int32_t)32)));
		int32_t L_37 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_37, 1));
	}

IL_012a:
	{
		int32_t L_38 = V_7;
		int32_t L_39 = V_6;
		V_12 = (bool)((((int32_t)L_38) < ((int32_t)L_39))? 1 : 0);
		bool L_40 = V_12;
		if (L_40)
		{
			goto IL_0062;
		}
	}
	{
		uint64_t L_41 = V_2;
		uint64_t L_42 = V_2;
		uint64_t L_43 = V_3;
		uint64_t L_44 = V_3;
		uint64_t L_45 = V_4;
		uint64_t L_46 = V_4;
		uint64_t L_47 = V_5;
		uint64_t L_48 = V_5;
		V_0 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)(((int64_t)((int64_t)L_41<<1))|((int64_t)((uint64_t)L_42>>((int32_t)63))))), ((int64_t)(((int64_t)((int64_t)L_43<<7))|((int64_t)((uint64_t)L_44>>((int32_t)57))))))), ((int64_t)(((int64_t)((int64_t)L_45<<((int32_t)12)))|((int64_t)((uint64_t)L_46>>((int32_t)52))))))), ((int64_t)(((int64_t)((int64_t)L_47<<((int32_t)18)))|((int64_t)((uint64_t)L_48>>((int32_t)46)))))));
		uint64_t L_49 = V_2;
		V_2 = ((int64_t)il2cpp_codegen_multiply((int64_t)L_49, ((int64_t)-4417276706812531889LL)));
		uint64_t L_50 = V_2;
		uint64_t L_51 = V_2;
		V_2 = ((int64_t)(((int64_t)((int64_t)L_50<<((int32_t)31)))|((int64_t)((uint64_t)L_51>>((int32_t)33)))));
		uint64_t L_52 = V_2;
		V_2 = ((int64_t)il2cpp_codegen_multiply((int64_t)L_52, ((int64_t)-7046029288634856825LL)));
		uint64_t L_53 = V_0;
		uint64_t L_54 = V_2;
		V_0 = ((int64_t)((int64_t)L_53^(int64_t)L_54));
		uint64_t L_55 = V_0;
		V_0 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_55, ((int64_t)-7046029288634856825LL))), ((int64_t)-8796714831421723037LL)));
		uint64_t L_56 = V_3;
		V_3 = ((int64_t)il2cpp_codegen_multiply((int64_t)L_56, ((int64_t)-4417276706812531889LL)));
		uint64_t L_57 = V_3;
		uint64_t L_58 = V_3;
		V_3 = ((int64_t)(((int64_t)((int64_t)L_57<<((int32_t)31)))|((int64_t)((uint64_t)L_58>>((int32_t)33)))));
		uint64_t L_59 = V_3;
		V_3 = ((int64_t)il2cpp_codegen_multiply((int64_t)L_59, ((int64_t)-7046029288634856825LL)));
		uint64_t L_60 = V_0;
		uint64_t L_61 = V_3;
		V_0 = ((int64_t)((int64_t)L_60^(int64_t)L_61));
		uint64_t L_62 = V_0;
		V_0 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_62, ((int64_t)-7046029288634856825LL))), ((int64_t)-8796714831421723037LL)));
		uint64_t L_63 = V_4;
		V_4 = ((int64_t)il2cpp_codegen_multiply((int64_t)L_63, ((int64_t)-4417276706812531889LL)));
		uint64_t L_64 = V_4;
		uint64_t L_65 = V_4;
		V_4 = ((int64_t)(((int64_t)((int64_t)L_64<<((int32_t)31)))|((int64_t)((uint64_t)L_65>>((int32_t)33)))));
		uint64_t L_66 = V_4;
		V_4 = ((int64_t)il2cpp_codegen_multiply((int64_t)L_66, ((int64_t)-7046029288634856825LL)));
		uint64_t L_67 = V_0;
		uint64_t L_68 = V_4;
		V_0 = ((int64_t)((int64_t)L_67^(int64_t)L_68));
		uint64_t L_69 = V_0;
		V_0 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_69, ((int64_t)-7046029288634856825LL))), ((int64_t)-8796714831421723037LL)));
		uint64_t L_70 = V_5;
		V_5 = ((int64_t)il2cpp_codegen_multiply((int64_t)L_70, ((int64_t)-4417276706812531889LL)));
		uint64_t L_71 = V_5;
		uint64_t L_72 = V_5;
		V_5 = ((int64_t)(((int64_t)((int64_t)L_71<<((int32_t)31)))|((int64_t)((uint64_t)L_72>>((int32_t)33)))));
		uint64_t L_73 = V_5;
		V_5 = ((int64_t)il2cpp_codegen_multiply((int64_t)L_73, ((int64_t)-7046029288634856825LL)));
		uint64_t L_74 = V_0;
		uint64_t L_75 = V_5;
		V_0 = ((int64_t)((int64_t)L_74^(int64_t)L_75));
		uint64_t L_76 = V_0;
		V_0 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_76, ((int64_t)-7046029288634856825LL))), ((int64_t)-8796714831421723037LL)));
	}

IL_0264:
	{
		uint64_t L_77 = V_0;
		int32_t L_78 = ___1_length;
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_77, ((int64_t)L_78)));
		int32_t L_79 = ___1_length;
		___1_length = ((int32_t)(L_79&((int32_t)31)));
		goto IL_02c5;
	}

IL_0271:
	{
		uint8_t* L_80 = ___0_input;
		int64_t L_81 = *((int64_t*)L_80);
		V_13 = ((int64_t)il2cpp_codegen_multiply(L_81, ((int64_t)-4417276706812531889LL)));
		uint64_t L_82 = V_13;
		uint64_t L_83 = V_13;
		V_13 = ((int64_t)il2cpp_codegen_multiply(((int64_t)(((int64_t)((int64_t)L_82<<((int32_t)31)))|((int64_t)((uint64_t)L_83>>((int32_t)33))))), ((int64_t)-7046029288634856825LL)));
		uint64_t L_84 = V_0;
		uint64_t L_85 = V_13;
		V_0 = ((int64_t)((int64_t)L_84^(int64_t)L_85));
		uint64_t L_86 = V_0;
		uint64_t L_87 = V_0;
		V_0 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)(((int64_t)((int64_t)L_86<<((int32_t)27)))|((int64_t)((uint64_t)L_87>>((int32_t)37))))), ((int64_t)-7046029288634856825LL))), ((int64_t)-8796714831421723037LL)));
		uint8_t* L_88 = ___0_input;
		___0_input = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_88, 8));
		int32_t L_89 = ___1_length;
		___1_length = ((int32_t)il2cpp_codegen_subtract(L_89, 8));
	}

IL_02c5:
	{
		int32_t L_90 = ___1_length;
		V_14 = (bool)((((int32_t)((((int32_t)L_90) < ((int32_t)8))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_91 = V_14;
		if (L_91)
		{
			goto IL_0271;
		}
	}
	{
		int32_t L_92 = ___1_length;
		V_15 = (bool)((((int32_t)((((int32_t)L_92) < ((int32_t)4))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_93 = V_15;
		if (!L_93)
		{
			goto IL_0319;
		}
	}
	{
		uint64_t L_94 = V_0;
		uint8_t* L_95 = ___0_input;
		int32_t L_96 = *((uint32_t*)L_95);
		V_0 = ((int64_t)((int64_t)L_94^((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)((uint32_t)L_96)), ((int64_t)-7046029288634856825LL)))));
		uint64_t L_97 = V_0;
		uint64_t L_98 = V_0;
		V_0 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)(((int64_t)((int64_t)L_97<<((int32_t)23)))|((int64_t)((uint64_t)L_98>>((int32_t)41))))), ((int64_t)-4417276706812531889LL))), ((int64_t)1609587929392839161LL)));
		uint8_t* L_99 = ___0_input;
		___0_input = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_99, 4));
		int32_t L_100 = ___1_length;
		___1_length = ((int32_t)il2cpp_codegen_subtract(L_100, 4));
	}

IL_0319:
	{
		goto IL_034b;
	}

IL_031b:
	{
		uint64_t L_101 = V_0;
		uint8_t* L_102 = ___0_input;
		int32_t L_103 = (*(L_102));
		V_0 = ((int64_t)((int64_t)L_101^((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)((uint32_t)L_103)), ((int64_t)2870177450012600261LL)))));
		uint64_t L_104 = V_0;
		uint64_t L_105 = V_0;
		V_0 = ((int64_t)il2cpp_codegen_multiply(((int64_t)(((int64_t)((int64_t)L_104<<((int32_t)11)))|((int64_t)((uint64_t)L_105>>((int32_t)53))))), ((int64_t)-7046029288634856825LL)));
		uint8_t* L_106 = ___0_input;
		___0_input = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_106, 1));
		int32_t L_107 = ___1_length;
		___1_length = ((int32_t)il2cpp_codegen_subtract(L_107, 1));
	}

IL_034b:
	{
		int32_t L_108 = ___1_length;
		V_16 = (bool)((((int32_t)L_108) > ((int32_t)0))? 1 : 0);
		bool L_109 = V_16;
		if (L_109)
		{
			goto IL_031b;
		}
	}
	{
		uint64_t L_110 = V_0;
		uint64_t L_111 = V_0;
		V_0 = ((int64_t)((int64_t)L_110^((int64_t)((uint64_t)L_111>>((int32_t)33)))));
		uint64_t L_112 = V_0;
		V_0 = ((int64_t)il2cpp_codegen_multiply((int64_t)L_112, ((int64_t)-4417276706812531889LL)));
		uint64_t L_113 = V_0;
		uint64_t L_114 = V_0;
		V_0 = ((int64_t)((int64_t)L_113^((int64_t)((uint64_t)L_114>>((int32_t)29)))));
		uint64_t L_115 = V_0;
		V_0 = ((int64_t)il2cpp_codegen_multiply((int64_t)L_115, ((int64_t)1609587929392839161LL)));
		uint64_t L_116 = V_0;
		uint64_t L_117 = V_0;
		V_0 = ((int64_t)((int64_t)L_116^((int64_t)((uint64_t)L_117>>((int32_t)32)))));
		uint64_t L_118 = V_0;
		V_17 = L_118;
		goto IL_0387;
	}

IL_0387:
	{
		uint64_t L_119 = V_17;
		return L_119;
	}
}
