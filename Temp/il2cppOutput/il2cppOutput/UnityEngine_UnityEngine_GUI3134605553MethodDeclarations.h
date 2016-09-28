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

// UnityEngine.GUISkin
struct GUISkin_t3371348110;
// System.String
struct String_t;
// UnityEngine.GUIContent
struct GUIContent_t2094828418;
// UnityEngine.GUIStyle
struct GUIStyle_t2990928826;
// UnityEngine.TextEditor
struct TextEditor_t319394238;
// UnityEngine.GUIContent[]
struct GUIContentU5BU5D_t3588725815;
// UnityEngine.Rect[]
struct RectU5BU5D_t1023580025;
// UnityEngine.GUI/WindowFunction
struct WindowFunction_t2749288659;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTime4283661327.h"
#include "UnityEngine_UnityEngine_GUISkin3371348110.h"
#include "mscorlib_System_String7231557.h"
#include "UnityEngine_UnityEngine_Rect4241904616.h"
#include "UnityEngine_UnityEngine_GUIContent2094828418.h"
#include "UnityEngine_UnityEngine_GUIStyle2990928826.h"
#include "UnityEngine_UnityEngine_FocusType2235102504.h"
#include "UnityEngine_UnityEngine_TextEditor319394238.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"
#include "UnityEngine_UnityEngine_GUI_WindowFunction2749288659.h"
#include "mscorlib_System_IntPtr4010401971.h"

// System.Void UnityEngine.GUI::.cctor()
extern "C"  void GUI__cctor_m1345698031 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime UnityEngine.GUI::get_nextScrollStepTime()
extern "C"  DateTime_t4283661327  GUI_get_nextScrollStepTime_m719800559 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_nextScrollStepTime(System.DateTime)
extern "C"  void GUI_set_nextScrollStepTime_m3820512796 (Il2CppObject * __this /* static, unused */, DateTime_t4283661327  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUI::get_scrollTroughSide()
extern "C"  int32_t GUI_get_scrollTroughSide_m3369891864 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_scrollTroughSide(System.Int32)
extern "C"  void GUI_set_scrollTroughSide_m1228634973 (Il2CppObject * __this /* static, unused */, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_skin(UnityEngine.GUISkin)
extern "C"  void GUI_set_skin_m1213959601 (Il2CppObject * __this /* static, unused */, GUISkin_t3371348110 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUISkin UnityEngine.GUI::get_skin()
extern "C"  GUISkin_t3371348110 * GUI_get_skin_m4001454842 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::DoSetSkin(UnityEngine.GUISkin)
extern "C"  void GUI_DoSetSkin_m800823745 (Il2CppObject * __this /* static, unused */, GUISkin_t3371348110 * ___newSkin0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_tooltip(System.String)
extern "C"  void GUI_set_tooltip_m2757283616 (Il2CppObject * __this /* static, unused */, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::Label(UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.GUIStyle)
extern "C"  void GUI_Label_m2293702269 (Il2CppObject * __this /* static, unused */, Rect_t4241904616  ___position0, GUIContent_t2094828418 * ___content1, GUIStyle_t2990928826 * ___style2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::Box(UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.GUIStyle)
extern "C"  void GUI_Box_m3007052244 (Il2CppObject * __this /* static, unused */, Rect_t4241904616  ___position0, GUIContent_t2094828418 * ___content1, GUIStyle_t2990928826 * ___style2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::Button(UnityEngine.Rect,UnityEngine.GUIContent)
extern "C"  bool GUI_Button_m2185150522 (Il2CppObject * __this /* static, unused */, Rect_t4241904616  ___position0, GUIContent_t2094828418 * ___content1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::Button(UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.GUIStyle)
extern "C"  bool GUI_Button_m3806860863 (Il2CppObject * __this /* static, unused */, Rect_t4241904616  ___position0, GUIContent_t2094828418 * ___content1, GUIStyle_t2990928826 * ___style2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::DoRepeatButton(UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.FocusType)
extern "C"  bool GUI_DoRepeatButton_m4194170646 (Il2CppObject * __this /* static, unused */, Rect_t4241904616  ___position0, GUIContent_t2094828418 * ___content1, GUIStyle_t2990928826 * ___style2, int32_t ___focusType3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.GUI::PasswordFieldGetStrToShow(System.String,System.Char)
extern "C"  String_t* GUI_PasswordFieldGetStrToShow_m1283548296 (Il2CppObject * __this /* static, unused */, String_t* ___password0, Il2CppChar ___maskChar1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::DoTextField(UnityEngine.Rect,System.Int32,UnityEngine.GUIContent,System.Boolean,System.Int32,UnityEngine.GUIStyle)
extern "C"  void GUI_DoTextField_m1314526082 (Il2CppObject * __this /* static, unused */, Rect_t4241904616  ___position0, int32_t ___id1, GUIContent_t2094828418 * ___content2, bool ___multiline3, int32_t ___maxLength4, GUIStyle_t2990928826 * ___style5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::DoTextField(UnityEngine.Rect,System.Int32,UnityEngine.GUIContent,System.Boolean,System.Int32,UnityEngine.GUIStyle,System.String)
extern "C"  void GUI_DoTextField_m597815358 (Il2CppObject * __this /* static, unused */, Rect_t4241904616  ___position0, int32_t ___id1, GUIContent_t2094828418 * ___content2, bool ___multiline3, int32_t ___maxLength4, GUIStyle_t2990928826 * ___style5, String_t* ___secureText6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::DoTextField(UnityEngine.Rect,System.Int32,UnityEngine.GUIContent,System.Boolean,System.Int32,UnityEngine.GUIStyle,System.String,System.Char)
extern "C"  void GUI_DoTextField_m3194851797 (Il2CppObject * __this /* static, unused */, Rect_t4241904616  ___position0, int32_t ___id1, GUIContent_t2094828418 * ___content2, bool ___multiline3, int32_t ___maxLength4, GUIStyle_t2990928826 * ___style5, String_t* ___secureText6, Il2CppChar ___maskChar7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::HandleTextFieldEventForTouchscreen(UnityEngine.Rect,System.Int32,UnityEngine.GUIContent,System.Boolean,System.Int32,UnityEngine.GUIStyle,System.String,System.Char,UnityEngine.TextEditor)
extern "C"  void GUI_HandleTextFieldEventForTouchscreen_m3727225151 (Il2CppObject * __this /* static, unused */, Rect_t4241904616  ___position0, int32_t ___id1, GUIContent_t2094828418 * ___content2, bool ___multiline3, int32_t ___maxLength4, GUIStyle_t2990928826 * ___style5, String_t* ___secureText6, Il2CppChar ___maskChar7, TextEditor_t319394238 * ___editor8, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::HandleTextFieldEventForDesktop(UnityEngine.Rect,System.Int32,UnityEngine.GUIContent,System.Boolean,System.Int32,UnityEngine.GUIStyle,UnityEngine.TextEditor)
extern "C"  void GUI_HandleTextFieldEventForDesktop_m3098489379 (Il2CppObject * __this /* static, unused */, Rect_t4241904616  ___position0, int32_t ___id1, GUIContent_t2094828418 * ___content2, bool ___multiline3, int32_t ___maxLength4, GUIStyle_t2990928826 * ___style5, TextEditor_t319394238 * ___editor6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUI::Toolbar(UnityEngine.Rect,System.Int32,UnityEngine.GUIContent[],UnityEngine.GUIStyle)
extern "C"  int32_t GUI_Toolbar_m3845961669 (Il2CppObject * __this /* static, unused */, Rect_t4241904616  ___position0, int32_t ___selected1, GUIContentU5BU5D_t3588725815* ___contents2, GUIStyle_t2990928826 * ___style3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::FindStyles(UnityEngine.GUIStyle&,UnityEngine.GUIStyle&,UnityEngine.GUIStyle&,UnityEngine.GUIStyle&,System.String,System.String,System.String)
extern "C"  void GUI_FindStyles_m4203162469 (Il2CppObject * __this /* static, unused */, GUIStyle_t2990928826 ** ___style0, GUIStyle_t2990928826 ** ___firstStyle1, GUIStyle_t2990928826 ** ___midStyle2, GUIStyle_t2990928826 ** ___lastStyle3, String_t* ___first4, String_t* ___mid5, String_t* ___last6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUI::CalcTotalHorizSpacing(System.Int32,UnityEngine.GUIStyle,UnityEngine.GUIStyle,UnityEngine.GUIStyle,UnityEngine.GUIStyle)
extern "C"  int32_t GUI_CalcTotalHorizSpacing_m1193798691 (Il2CppObject * __this /* static, unused */, int32_t ___xCount0, GUIStyle_t2990928826 * ___style1, GUIStyle_t2990928826 * ___firstStyle2, GUIStyle_t2990928826 * ___midStyle3, GUIStyle_t2990928826 * ___lastStyle4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUI::DoButtonGrid(UnityEngine.Rect,System.Int32,UnityEngine.GUIContent[],System.Int32,UnityEngine.GUIStyle,UnityEngine.GUIStyle,UnityEngine.GUIStyle,UnityEngine.GUIStyle)
extern "C"  int32_t GUI_DoButtonGrid_m4269625009 (Il2CppObject * __this /* static, unused */, Rect_t4241904616  ___position0, int32_t ___selected1, GUIContentU5BU5D_t3588725815* ___contents2, int32_t ___xCount3, GUIStyle_t2990928826 * ___style4, GUIStyle_t2990928826 * ___firstStyle5, GUIStyle_t2990928826 * ___midStyle6, GUIStyle_t2990928826 * ___lastStyle7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect[] UnityEngine.GUI::CalcMouseRects(UnityEngine.Rect,System.Int32,System.Int32,System.Single,System.Single,UnityEngine.GUIStyle,UnityEngine.GUIStyle,UnityEngine.GUIStyle,UnityEngine.GUIStyle,System.Boolean)
extern "C"  RectU5BU5D_t1023580025* GUI_CalcMouseRects_m1004387707 (Il2CppObject * __this /* static, unused */, Rect_t4241904616  ___position0, int32_t ___count1, int32_t ___xCount2, float ___elemWidth3, float ___elemHeight4, GUIStyle_t2990928826 * ___style5, GUIStyle_t2990928826 * ___firstStyle6, GUIStyle_t2990928826 * ___midStyle7, GUIStyle_t2990928826 * ___lastStyle8, bool ___addBorders9, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUI::GetButtonGridMouseSelection(UnityEngine.Rect[],UnityEngine.Vector2,System.Boolean)
extern "C"  int32_t GUI_GetButtonGridMouseSelection_m1444198773 (Il2CppObject * __this /* static, unused */, RectU5BU5D_t1023580025* ___buttonRects0, Vector2_t4282066565  ___mousePos1, bool ___findNearest2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUI::Slider(UnityEngine.Rect,System.Single,System.Single,System.Single,System.Single,UnityEngine.GUIStyle,UnityEngine.GUIStyle,System.Boolean,System.Int32)
extern "C"  float GUI_Slider_m2269439694 (Il2CppObject * __this /* static, unused */, Rect_t4241904616  ___position0, float ___value1, float ___size2, float ___start3, float ___end4, GUIStyle_t2990928826 * ___slider5, GUIStyle_t2990928826 * ___thumb6, bool ___horiz7, int32_t ___id8, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUI::HorizontalScrollbar(UnityEngine.Rect,System.Single,System.Single,System.Single,System.Single,UnityEngine.GUIStyle)
extern "C"  float GUI_HorizontalScrollbar_m2127981046 (Il2CppObject * __this /* static, unused */, Rect_t4241904616  ___position0, float ___value1, float ___size2, float ___leftValue3, float ___rightValue4, GUIStyle_t2990928826 * ___style5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::ScrollerRepeatButton(System.Int32,UnityEngine.Rect,UnityEngine.GUIStyle)
extern "C"  bool GUI_ScrollerRepeatButton_m2505011526 (Il2CppObject * __this /* static, unused */, int32_t ___scrollerID0, Rect_t4241904616  ___rect1, GUIStyle_t2990928826 * ___style2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUI::VerticalScrollbar(UnityEngine.Rect,System.Single,System.Single,System.Single,System.Single,UnityEngine.GUIStyle)
extern "C"  float GUI_VerticalScrollbar_m1710564744 (Il2CppObject * __this /* static, unused */, Rect_t4241904616  ___position0, float ___value1, float ___size2, float ___topValue3, float ___bottomValue4, GUIStyle_t2990928826 * ___style5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUI::Scroller(UnityEngine.Rect,System.Single,System.Single,System.Single,System.Single,UnityEngine.GUIStyle,UnityEngine.GUIStyle,UnityEngine.GUIStyle,UnityEngine.GUIStyle,System.Boolean)
extern "C"  float GUI_Scroller_m520117136 (Il2CppObject * __this /* static, unused */, Rect_t4241904616  ___position0, float ___value1, float ___size2, float ___leftValue3, float ___rightValue4, GUIStyle_t2990928826 * ___slider5, GUIStyle_t2990928826 * ___thumb6, GUIStyle_t2990928826 * ___leftButton7, GUIStyle_t2990928826 * ___rightButton8, bool ___horiz9, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.GUI::BeginScrollView(UnityEngine.Rect,UnityEngine.Vector2,UnityEngine.Rect,System.Boolean,System.Boolean,UnityEngine.GUIStyle,UnityEngine.GUIStyle,UnityEngine.GUIStyle)
extern "C"  Vector2_t4282066565  GUI_BeginScrollView_m3702064537 (Il2CppObject * __this /* static, unused */, Rect_t4241904616  ___position0, Vector2_t4282066565  ___scrollPosition1, Rect_t4241904616  ___viewRect2, bool ___alwaysShowHorizontal3, bool ___alwaysShowVertical4, GUIStyle_t2990928826 * ___horizontalScrollbar5, GUIStyle_t2990928826 * ___verticalScrollbar6, GUIStyle_t2990928826 * ___background7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::EndScrollView(System.Boolean)
extern "C"  void GUI_EndScrollView_m3615223136 (Il2CppObject * __this /* static, unused */, bool ___handleScrollWheel0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.GUI::ModalWindow(System.Int32,UnityEngine.Rect,UnityEngine.GUI/WindowFunction,System.String,UnityEngine.GUIStyle)
extern "C"  Rect_t4241904616  GUI_ModalWindow_m3722794679 (Il2CppObject * __this /* static, unused */, int32_t ___id0, Rect_t4241904616  ___clientRect1, WindowFunction_t2749288659 * ___func2, String_t* ___text3, GUIStyle_t2990928826 * ___style4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::CallWindowDelegate(UnityEngine.GUI/WindowFunction,System.Int32,UnityEngine.GUISkin,System.Int32,System.Single,System.Single,UnityEngine.GUIStyle)
extern "C"  void GUI_CallWindowDelegate_m2260338804 (Il2CppObject * __this /* static, unused */, WindowFunction_t2749288659 * ___func0, int32_t ___id1, GUISkin_t3371348110 * ____skin2, int32_t ___forceRect3, float ___width4, float ___height5, GUIStyle_t2990928826 * ___style6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_changed(System.Boolean)
extern "C"  void GUI_set_changed_m727947722 (Il2CppObject * __this /* static, unused */, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::get_enabled()
extern "C"  bool GUI_get_enabled_m3799739706 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_enabled(System.Boolean)
extern "C"  void GUI_set_enabled_m262604887 (Il2CppObject * __this /* static, unused */, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::Internal_SetTooltip(System.String)
extern "C"  void GUI_Internal_SetTooltip_m2127802787 (Il2CppObject * __this /* static, unused */, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::DoLabel(UnityEngine.Rect,UnityEngine.GUIContent,System.IntPtr)
extern "C"  void GUI_DoLabel_m2990009013 (Il2CppObject * __this /* static, unused */, Rect_t4241904616  ___position0, GUIContent_t2094828418 * ___content1, IntPtr_t ___style2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::INTERNAL_CALL_DoLabel(UnityEngine.Rect&,UnityEngine.GUIContent,System.IntPtr)
extern "C"  void GUI_INTERNAL_CALL_DoLabel_m2707679966 (Il2CppObject * __this /* static, unused */, Rect_t4241904616 * ___position0, GUIContent_t2094828418 * ___content1, IntPtr_t ___style2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::DoButton(UnityEngine.Rect,UnityEngine.GUIContent,System.IntPtr)
extern "C"  bool GUI_DoButton_m2194494269 (Il2CppObject * __this /* static, unused */, Rect_t4241904616  ___position0, GUIContent_t2094828418 * ___content1, IntPtr_t ___style2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::INTERNAL_CALL_DoButton(UnityEngine.Rect&,UnityEngine.GUIContent,System.IntPtr)
extern "C"  bool GUI_INTERNAL_CALL_DoButton_m1954108340 (Il2CppObject * __this /* static, unused */, Rect_t4241904616 * ___position0, GUIContent_t2094828418 * ___content1, IntPtr_t ___style2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::get_usePageScrollbars()
extern "C"  bool GUI_get_usePageScrollbars_m944581596 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::InternalRepaintEditorWindow()
extern "C"  void GUI_InternalRepaintEditorWindow_m3223206407 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.GUI::DoModalWindow(System.Int32,UnityEngine.Rect,UnityEngine.GUI/WindowFunction,UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUISkin)
extern "C"  Rect_t4241904616  GUI_DoModalWindow_m1270479406 (Il2CppObject * __this /* static, unused */, int32_t ___id0, Rect_t4241904616  ___clientRect1, WindowFunction_t2749288659 * ___func2, GUIContent_t2094828418 * ___content3, GUIStyle_t2990928826 * ___style4, GUISkin_t3371348110 * ___skin5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::INTERNAL_CALL_DoModalWindow(System.Int32,UnityEngine.Rect&,UnityEngine.GUI/WindowFunction,UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUISkin,UnityEngine.Rect&)
extern "C"  void GUI_INTERNAL_CALL_DoModalWindow_m1785328038 (Il2CppObject * __this /* static, unused */, int32_t ___id0, Rect_t4241904616 * ___clientRect1, WindowFunction_t2749288659 * ___func2, GUIContent_t2094828418 * ___content3, GUIStyle_t2990928826 * ___style4, GUISkin_t3371348110 * ___skin5, Rect_t4241904616 * ___value6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
