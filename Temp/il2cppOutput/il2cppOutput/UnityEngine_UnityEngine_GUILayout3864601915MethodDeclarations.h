#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.String
struct String_t;
// UnityEngine.GUILayoutOption[]
struct GUILayoutOptionU5BU5D_t2977405297;
// UnityEngine.GUIContent
struct GUIContent_t2094828418;
// UnityEngine.GUIStyle
struct GUIStyle_t2990928826;
// UnityEngine.Texture
struct Texture_t2526458961;
// System.String[]
struct StringU5BU5D_t4054002952;
// UnityEngine.GUIContent[]
struct GUIContentU5BU5D_t3588725815;
// UnityEngine.GUILayoutOption
struct GUILayoutOption_t331591504;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "UnityEngine_UnityEngine_GUIContent2094828418.h"
#include "UnityEngine_UnityEngine_GUIStyle2990928826.h"
#include "UnityEngine_UnityEngine_Texture2526458961.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"

// System.Void UnityEngine.GUILayout::Label(System.String,UnityEngine.GUILayoutOption[])
extern "C"  void GUILayout_Label_m925445731 (Il2CppObject * __this /* static, unused */, String_t* ___text0, GUILayoutOptionU5BU5D_t2977405297* ___options1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::Label(UnityEngine.GUIContent,UnityEngine.GUILayoutOption[])
extern "C"  void GUILayout_Label_m3931056408 (Il2CppObject * __this /* static, unused */, GUIContent_t2094828418 * ___content0, GUILayoutOptionU5BU5D_t2977405297* ___options1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::Label(System.String,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C"  void GUILayout_Label_m1421013860 (Il2CppObject * __this /* static, unused */, String_t* ___text0, GUIStyle_t2990928826 * ___style1, GUILayoutOptionU5BU5D_t2977405297* ___options2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::DoLabel(UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C"  void GUILayout_DoLabel_m3812046522 (Il2CppObject * __this /* static, unused */, GUIContent_t2094828418 * ___content0, GUIStyle_t2990928826 * ___style1, GUILayoutOptionU5BU5D_t2977405297* ___options2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::Box(UnityEngine.Texture,UnityEngine.GUILayoutOption[])
extern "C"  void GUILayout_Box_m2655113688 (Il2CppObject * __this /* static, unused */, Texture_t2526458961 * ___image0, GUILayoutOptionU5BU5D_t2977405297* ___options1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::Box(System.String,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C"  void GUILayout_Box_m3676946619 (Il2CppObject * __this /* static, unused */, String_t* ___text0, GUIStyle_t2990928826 * ___style1, GUILayoutOptionU5BU5D_t2977405297* ___options2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::DoBox(UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C"  void GUILayout_DoBox_m2769828355 (Il2CppObject * __this /* static, unused */, GUIContent_t2094828418 * ___content0, GUIStyle_t2990928826 * ___style1, GUILayoutOptionU5BU5D_t2977405297* ___options2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUILayout::Button(System.String,UnityEngine.GUILayoutOption[])
extern "C"  bool GUILayout_Button_m6468109 (Il2CppObject * __this /* static, unused */, String_t* ___text0, GUILayoutOptionU5BU5D_t2977405297* ___options1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUILayout::Button(System.String,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C"  bool GUILayout_Button_m2087140858 (Il2CppObject * __this /* static, unused */, String_t* ___text0, GUIStyle_t2990928826 * ___style1, GUILayoutOptionU5BU5D_t2977405297* ___options2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUILayout::DoButton(UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C"  bool GUILayout_DoButton_m1519327982 (Il2CppObject * __this /* static, unused */, GUIContent_t2094828418 * ___content0, GUIStyle_t2990928826 * ___style1, GUILayoutOptionU5BU5D_t2977405297* ___options2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.GUILayout::TextField(System.String,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C"  String_t* GUILayout_TextField_m2367652128 (Il2CppObject * __this /* static, unused */, String_t* ___text0, GUIStyle_t2990928826 * ___style1, GUILayoutOptionU5BU5D_t2977405297* ___options2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.GUILayout::TextArea(System.String,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C"  String_t* GUILayout_TextArea_m1482648581 (Il2CppObject * __this /* static, unused */, String_t* ___text0, GUIStyle_t2990928826 * ___style1, GUILayoutOptionU5BU5D_t2977405297* ___options2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.GUILayout::DoTextField(System.String,System.Int32,System.Boolean,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C"  String_t* GUILayout_DoTextField_m3824368015 (Il2CppObject * __this /* static, unused */, String_t* ___text0, int32_t ___maxLength1, bool ___multiline2, GUIStyle_t2990928826 * ___style3, GUILayoutOptionU5BU5D_t2977405297* ___options4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUILayout::Toolbar(System.Int32,System.String[],UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C"  int32_t GUILayout_Toolbar_m1603037928 (Il2CppObject * __this /* static, unused */, int32_t ___selected0, StringU5BU5D_t4054002952* ___texts1, GUIStyle_t2990928826 * ___style2, GUILayoutOptionU5BU5D_t2977405297* ___options3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUILayout::Toolbar(System.Int32,UnityEngine.GUIContent[],UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C"  int32_t GUILayout_Toolbar_m1916473871 (Il2CppObject * __this /* static, unused */, int32_t ___selected0, GUIContentU5BU5D_t3588725815* ___contents1, GUIStyle_t2990928826 * ___style2, GUILayoutOptionU5BU5D_t2977405297* ___options3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::Space(System.Single)
extern "C"  void GUILayout_Space_m559926739 (Il2CppObject * __this /* static, unused */, float ___pixels0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::FlexibleSpace()
extern "C"  void GUILayout_FlexibleSpace_m3316706189 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::BeginHorizontal(UnityEngine.GUILayoutOption[])
extern "C"  void GUILayout_BeginHorizontal_m722450062 (Il2CppObject * __this /* static, unused */, GUILayoutOptionU5BU5D_t2977405297* ___options0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::BeginHorizontal(UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C"  void GUILayout_BeginHorizontal_m2423643318 (Il2CppObject * __this /* static, unused */, GUIContent_t2094828418 * ___content0, GUIStyle_t2990928826 * ___style1, GUILayoutOptionU5BU5D_t2977405297* ___options2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::EndHorizontal()
extern "C"  void GUILayout_EndHorizontal_m556624369 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::BeginVertical(UnityEngine.GUILayoutOption[])
extern "C"  void GUILayout_BeginVertical_m2155819644 (Il2CppObject * __this /* static, unused */, GUILayoutOptionU5BU5D_t2977405297* ___options0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::BeginVertical(UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C"  void GUILayout_BeginVertical_m3125652388 (Il2CppObject * __this /* static, unused */, GUIContent_t2094828418 * ___content0, GUIStyle_t2990928826 * ___style1, GUILayoutOptionU5BU5D_t2977405297* ___options2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::EndVertical()
extern "C"  void GUILayout_EndVertical_m3685530563 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.GUILayout::BeginScrollView(UnityEngine.Vector2,UnityEngine.GUILayoutOption[])
extern "C"  Vector2_t4282066565  GUILayout_BeginScrollView_m247627737 (Il2CppObject * __this /* static, unused */, Vector2_t4282066565  ___scrollPosition0, GUILayoutOptionU5BU5D_t2977405297* ___options1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.GUILayout::BeginScrollView(UnityEngine.Vector2,System.Boolean,System.Boolean,UnityEngine.GUIStyle,UnityEngine.GUIStyle,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C"  Vector2_t4282066565  GUILayout_BeginScrollView_m3507871150 (Il2CppObject * __this /* static, unused */, Vector2_t4282066565  ___scrollPosition0, bool ___alwaysShowHorizontal1, bool ___alwaysShowVertical2, GUIStyle_t2990928826 * ___horizontalScrollbar3, GUIStyle_t2990928826 * ___verticalScrollbar4, GUIStyle_t2990928826 * ___background5, GUILayoutOptionU5BU5D_t2977405297* ___options6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::EndScrollView()
extern "C"  void GUILayout_EndScrollView_m2116108639 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::EndScrollView(System.Boolean)
extern "C"  void GUILayout_EndScrollView_m3241059478 (Il2CppObject * __this /* static, unused */, bool ___handleScrollWheel0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::Width(System.Single)
extern "C"  GUILayoutOption_t331591504 * GUILayout_Width_m2259621411 (Il2CppObject * __this /* static, unused */, float ___width0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::MinWidth(System.Single)
extern "C"  GUILayoutOption_t331591504 * GUILayout_MinWidth_m1816706679 (Il2CppObject * __this /* static, unused */, float ___minWidth0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::MaxWidth(System.Single)
extern "C"  GUILayoutOption_t331591504 * GUILayout_MaxWidth_m3054796937 (Il2CppObject * __this /* static, unused */, float ___maxWidth0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::Height(System.Single)
extern "C"  GUILayoutOption_t331591504 * GUILayout_Height_m3774802884 (Il2CppObject * __this /* static, unused */, float ___height0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::MinHeight(System.Single)
extern "C"  GUILayoutOption_t331591504 * GUILayout_MinHeight_m2929348080 (Il2CppObject * __this /* static, unused */, float ___minHeight0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::ExpandWidth(System.Boolean)
extern "C"  GUILayoutOption_t331591504 * GUILayout_ExpandWidth_m1724891333 (Il2CppObject * __this /* static, unused */, bool ___expand0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::ExpandHeight(System.Boolean)
extern "C"  GUILayoutOption_t331591504 * GUILayout_ExpandHeight_m2691143288 (Il2CppObject * __this /* static, unused */, bool ___expand0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
