// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.3
// LVGL version: 8.3.6
// Project name: UI_Setting

#include "../ui.h"

void ui_ScreenSettingBLE_screen_init(void)
{
ui_ScreenSettingBLE = lv_obj_create(NULL);
lv_obj_set_style_bg_color(ui_ScreenSettingBLE, lv_color_hex(0xE5F3FF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_ScreenSettingBLE, 255, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_PanelScreenSettingBLESwitch = lv_obj_create(ui_ScreenSettingBLE);
lv_obj_set_height( ui_PanelScreenSettingBLESwitch, 83);
lv_obj_set_width( ui_PanelScreenSettingBLESwitch, lv_pct(90));
lv_obj_set_x( ui_PanelScreenSettingBLESwitch, 23 );
lv_obj_set_y( ui_PanelScreenSettingBLESwitch, 157 );
lv_obj_clear_flag( ui_PanelScreenSettingBLESwitch, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_radius(ui_PanelScreenSettingBLESwitch, 20, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_ImagePanelScreenSettingBLESwitch = lv_img_create(ui_PanelScreenSettingBLESwitch);
lv_img_set_src(ui_ImagePanelScreenSettingBLESwitch, &ui_img_bluetooth_png);
lv_obj_set_width( ui_ImagePanelScreenSettingBLESwitch, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_ImagePanelScreenSettingBLESwitch, LV_SIZE_CONTENT);   /// 1
lv_obj_set_y( ui_ImagePanelScreenSettingBLESwitch, 3 );
lv_obj_set_x( ui_ImagePanelScreenSettingBLESwitch, lv_pct(1) );
lv_obj_set_align( ui_ImagePanelScreenSettingBLESwitch, LV_ALIGN_LEFT_MID );
lv_obj_add_flag( ui_ImagePanelScreenSettingBLESwitch, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_ImagePanelScreenSettingBLESwitch, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_LabelPanelScreenSettingBLESwitch = lv_label_create(ui_PanelScreenSettingBLESwitch);
lv_obj_set_width( ui_LabelPanelScreenSettingBLESwitch, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_LabelPanelScreenSettingBLESwitch, LV_SIZE_CONTENT);   /// 1
lv_obj_set_y( ui_LabelPanelScreenSettingBLESwitch, 0 );
lv_obj_set_x( ui_LabelPanelScreenSettingBLESwitch, lv_pct(10) );
lv_obj_set_align( ui_LabelPanelScreenSettingBLESwitch, LV_ALIGN_LEFT_MID );
lv_label_set_text(ui_LabelPanelScreenSettingBLESwitch,"Bluetooth");
lv_obj_set_style_text_font(ui_LabelPanelScreenSettingBLESwitch, &lv_font_montserrat_32, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_SwitchPanelScreenSettingBLESwitch = lv_switch_create(ui_PanelScreenSettingBLESwitch);
lv_obj_set_width( ui_SwitchPanelScreenSettingBLESwitch, 50);
lv_obj_set_height( ui_SwitchPanelScreenSettingBLESwitch, 25);
lv_obj_set_y( ui_SwitchPanelScreenSettingBLESwitch, 1 );
lv_obj_set_x( ui_SwitchPanelScreenSettingBLESwitch, lv_pct(89) );
lv_obj_set_align( ui_SwitchPanelScreenSettingBLESwitch, LV_ALIGN_LEFT_MID );


ui_PanelScreenSettingBLEList = lv_obj_create(ui_ScreenSettingBLE);
lv_obj_set_width( ui_PanelScreenSettingBLEList, lv_pct(88));
lv_obj_set_height( ui_PanelScreenSettingBLEList, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_PanelScreenSettingBLEList, 25 );
lv_obj_set_y( ui_PanelScreenSettingBLEList, 119 );
lv_obj_set_flex_flow(ui_PanelScreenSettingBLEList,LV_FLEX_FLOW_COLUMN);
lv_obj_set_flex_align(ui_PanelScreenSettingBLEList, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_START);
lv_obj_add_flag( ui_PanelScreenSettingBLEList, LV_OBJ_FLAG_HIDDEN );   /// Flags
lv_obj_set_style_radius(ui_PanelScreenSettingBLEList, 10, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_SpinnerScreenSettingBLE = lv_spinner_create(ui_ScreenSettingBLE,1000,90);
lv_obj_set_width( ui_SpinnerScreenSettingBLE, lv_pct(16));
lv_obj_set_height( ui_SpinnerScreenSettingBLE, lv_pct(16));
lv_obj_set_align( ui_SpinnerScreenSettingBLE, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_SpinnerScreenSettingBLE, LV_OBJ_FLAG_HIDDEN );   /// Flags
lv_obj_clear_flag( ui_SpinnerScreenSettingBLE, LV_OBJ_FLAG_CLICKABLE );    /// Flags
lv_obj_set_style_arc_width(ui_SpinnerScreenSettingBLE, 5, LV_PART_MAIN| LV_STATE_DEFAULT);

lv_obj_set_style_arc_color(ui_SpinnerScreenSettingBLE, lv_color_hex(0xC2C2C2), LV_PART_INDICATOR | LV_STATE_DEFAULT );
lv_obj_set_style_arc_opa(ui_SpinnerScreenSettingBLE, 255, LV_PART_INDICATOR| LV_STATE_DEFAULT);
lv_obj_set_style_arc_width(ui_SpinnerScreenSettingBLE, 5, LV_PART_INDICATOR| LV_STATE_DEFAULT);

ui_ButtonScreenSettingBLEReturn = lv_btn_create(ui_ScreenSettingBLE);
lv_obj_set_width( ui_ButtonScreenSettingBLEReturn, 60);
lv_obj_set_height( ui_ButtonScreenSettingBLEReturn, 60);
lv_obj_set_x( ui_ButtonScreenSettingBLEReturn, -352 );
lv_obj_set_y( ui_ButtonScreenSettingBLEReturn, -596 );
lv_obj_set_align( ui_ButtonScreenSettingBLEReturn, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_ButtonScreenSettingBLEReturn, LV_OBJ_FLAG_SCROLL_ON_FOCUS );   /// Flags
lv_obj_clear_flag( ui_ButtonScreenSettingBLEReturn, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_bg_color(ui_ButtonScreenSettingBLEReturn, lv_color_hex(0xE5F3FF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_ButtonScreenSettingBLEReturn, 255, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_ImageScreenSettingBLEReturn = lv_img_create(ui_ButtonScreenSettingBLEReturn);
lv_img_set_src(ui_ImageScreenSettingBLEReturn, &ui_img_return_png);
lv_obj_set_width( ui_ImageScreenSettingBLEReturn, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_ImageScreenSettingBLEReturn, LV_SIZE_CONTENT);   /// 1
lv_obj_set_align( ui_ImageScreenSettingBLEReturn, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_ImageScreenSettingBLEReturn, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_ImageScreenSettingBLEReturn, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_img_recolor(ui_ImageScreenSettingBLEReturn, lv_color_hex(0x000000), LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_img_recolor_opa(ui_ImageScreenSettingBLEReturn, 255, LV_PART_MAIN| LV_STATE_DEFAULT);

lv_obj_add_event_cb(ui_ButtonScreenSettingBLEReturn, ui_event_ButtonScreenSettingBLEReturn, LV_EVENT_ALL, NULL);

}
