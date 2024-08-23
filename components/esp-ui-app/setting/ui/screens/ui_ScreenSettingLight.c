// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.3
// LVGL version: 8.3.6
// Project name: UI_Setting

#include "../ui.h"

void ui_ScreenSettingLight_screen_init(void)
{
ui_ScreenSettingLight = lv_obj_create(NULL);
lv_obj_set_style_bg_color(ui_ScreenSettingLight, lv_color_hex(0xE5F3FF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_ScreenSettingLight, 255, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_PanelScreenSettingLightSwitch = lv_obj_create(ui_ScreenSettingLight);
lv_obj_set_height( ui_PanelScreenSettingLightSwitch, 83);
lv_obj_set_width( ui_PanelScreenSettingLightSwitch, lv_pct(90));
lv_obj_set_x( ui_PanelScreenSettingLightSwitch, 43 );
lv_obj_set_y( ui_PanelScreenSettingLightSwitch, 77 );
lv_obj_clear_flag( ui_PanelScreenSettingLightSwitch, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_radius(ui_PanelScreenSettingLightSwitch, 20, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_ImagePanelScreenSettingLightSwitch = lv_img_create(ui_PanelScreenSettingLightSwitch);
lv_img_set_src(ui_ImagePanelScreenSettingLightSwitch, &ui_img_light_png);
lv_obj_set_width( ui_ImagePanelScreenSettingLightSwitch, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_ImagePanelScreenSettingLightSwitch, LV_SIZE_CONTENT);   /// 2
lv_obj_set_y( ui_ImagePanelScreenSettingLightSwitch, 3 );
lv_obj_set_x( ui_ImagePanelScreenSettingLightSwitch, lv_pct(1) );
lv_obj_set_align( ui_ImagePanelScreenSettingLightSwitch, LV_ALIGN_LEFT_MID );
lv_obj_add_flag( ui_ImagePanelScreenSettingLightSwitch, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_ImagePanelScreenSettingLightSwitch, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_LabelPanelScreenSettingLightSwitch = lv_label_create(ui_PanelScreenSettingLightSwitch);
lv_obj_set_width( ui_LabelPanelScreenSettingLightSwitch, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_LabelPanelScreenSettingLightSwitch, LV_SIZE_CONTENT);   /// 1
lv_obj_set_y( ui_LabelPanelScreenSettingLightSwitch, 0 );
lv_obj_set_x( ui_LabelPanelScreenSettingLightSwitch, lv_pct(10) );
lv_obj_set_align( ui_LabelPanelScreenSettingLightSwitch, LV_ALIGN_LEFT_MID );
lv_label_set_text(ui_LabelPanelScreenSettingLightSwitch,"Brightness");
lv_obj_set_style_text_font(ui_LabelPanelScreenSettingLightSwitch, &lv_font_montserrat_32, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_SliderPanelScreenSettingLightSwitch1 = lv_slider_create(ui_PanelScreenSettingLightSwitch);
lv_obj_set_width( ui_SliderPanelScreenSettingLightSwitch1, 331);
lv_obj_set_height( ui_SliderPanelScreenSettingLightSwitch1, 10);
lv_obj_set_x( ui_SliderPanelScreenSettingLightSwitch1, 171 );
lv_obj_set_y( ui_SliderPanelScreenSettingLightSwitch1, 2 );
lv_obj_set_align( ui_SliderPanelScreenSettingLightSwitch1, LV_ALIGN_CENTER );


ui_PanelScreenSettingLightList = lv_obj_create(ui_ScreenSettingLight);
lv_obj_set_width( ui_PanelScreenSettingLightList, lv_pct(88));
lv_obj_set_height( ui_PanelScreenSettingLightList, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_PanelScreenSettingLightList, 25 );
lv_obj_set_y( ui_PanelScreenSettingLightList, 119 );
lv_obj_set_flex_flow(ui_PanelScreenSettingLightList,LV_FLEX_FLOW_COLUMN);
lv_obj_set_flex_align(ui_PanelScreenSettingLightList, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_START);
lv_obj_add_flag( ui_PanelScreenSettingLightList, LV_OBJ_FLAG_HIDDEN );   /// Flags
lv_obj_set_style_radius(ui_PanelScreenSettingLightList, 10, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_SpinnerScreenSettingLight = lv_spinner_create(ui_ScreenSettingLight,1000,90);
lv_obj_set_width( ui_SpinnerScreenSettingLight, lv_pct(16));
lv_obj_set_height( ui_SpinnerScreenSettingLight, lv_pct(16));
lv_obj_set_align( ui_SpinnerScreenSettingLight, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_SpinnerScreenSettingLight, LV_OBJ_FLAG_HIDDEN );   /// Flags
lv_obj_clear_flag( ui_SpinnerScreenSettingLight, LV_OBJ_FLAG_CLICKABLE );    /// Flags
lv_obj_set_style_arc_width(ui_SpinnerScreenSettingLight, 5, LV_PART_MAIN| LV_STATE_DEFAULT);

lv_obj_set_style_arc_color(ui_SpinnerScreenSettingLight, lv_color_hex(0xC2C2C2), LV_PART_INDICATOR | LV_STATE_DEFAULT );
lv_obj_set_style_arc_opa(ui_SpinnerScreenSettingLight, 255, LV_PART_INDICATOR| LV_STATE_DEFAULT);
lv_obj_set_style_arc_width(ui_SpinnerScreenSettingLight, 5, LV_PART_INDICATOR| LV_STATE_DEFAULT);

ui_ButtonScreenSettingLightReturn = lv_btn_create(ui_ScreenSettingLight);
lv_obj_set_width( ui_ButtonScreenSettingLightReturn, 60);
lv_obj_set_height( ui_ButtonScreenSettingLightReturn, 60);
lv_obj_set_x( ui_ButtonScreenSettingLightReturn, -352 );
lv_obj_set_y( ui_ButtonScreenSettingLightReturn, -596 );
lv_obj_set_align( ui_ButtonScreenSettingLightReturn, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_ButtonScreenSettingLightReturn, LV_OBJ_FLAG_SCROLL_ON_FOCUS );   /// Flags
lv_obj_clear_flag( ui_ButtonScreenSettingLightReturn, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_bg_color(ui_ButtonScreenSettingLightReturn, lv_color_hex(0xE5F3FF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_ButtonScreenSettingLightReturn, 255, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_ImageScreenSettingLightReturn = lv_img_create(ui_ButtonScreenSettingLightReturn);
lv_img_set_src(ui_ImageScreenSettingLightReturn, &ui_img_return_png);
lv_obj_set_width( ui_ImageScreenSettingLightReturn, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_ImageScreenSettingLightReturn, LV_SIZE_CONTENT);   /// 1
lv_obj_set_align( ui_ImageScreenSettingLightReturn, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_ImageScreenSettingLightReturn, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_ImageScreenSettingLightReturn, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_img_recolor(ui_ImageScreenSettingLightReturn, lv_color_hex(0x000000), LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_img_recolor_opa(ui_ImageScreenSettingLightReturn, 255, LV_PART_MAIN| LV_STATE_DEFAULT);

lv_obj_add_event_cb(ui_ButtonScreenSettingLightReturn, ui_event_ButtonScreenSettingLightReturn, LV_EVENT_ALL, NULL);

}
