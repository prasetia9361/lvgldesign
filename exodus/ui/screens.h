#ifndef EEZ_LVGL_UI_SCREENS_H
#define EEZ_LVGL_UI_SCREENS_H

#include <lvgl.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct _objects_t {
    lv_obj_t *main;
    lv_obj_t *setting;
    lv_obj_t *about;
    lv_obj_t *about_back_1;
    lv_obj_t *about_button;
    lv_obj_t *about_button_1;
    lv_obj_t *binding_button;
    lv_obj_t *binding_button_1;
    lv_obj_t *main_button;
    lv_obj_t *main_button_1;
    lv_obj_t *main_button_2;
    lv_obj_t *main_button_3;
    lv_obj_t *mode1;
    lv_obj_t *mode2;
    lv_obj_t *mode3;
    lv_obj_t *mode4;
    lv_obj_t *mode5;
    lv_obj_t *mode6;
    lv_obj_t *mode7;
    lv_obj_t *mode8;
    lv_obj_t *obj0;
    lv_obj_t *obj1;
    lv_obj_t *obj17;
    lv_obj_t *obj18;
    lv_obj_t *obj19;
    lv_obj_t *obj2;
    lv_obj_t *obj20;
    lv_obj_t *obj21;
    lv_obj_t *obj22;
    lv_obj_t *obj23;
    lv_obj_t *obj23__button_device1_1;
    lv_obj_t *obj23__close_2;
    lv_obj_t *obj23__obj24;
    lv_obj_t *obj23__obj25;
    lv_obj_t *obj23__obj26;
    lv_obj_t *obj23__obj27;
    lv_obj_t *obj23__play_button;
    lv_obj_t *obj23__save_button;
    lv_obj_t *obj28;
    lv_obj_t *obj28__approve;
    lv_obj_t *obj28__button_device1;
    lv_obj_t *obj28__button_piring_1;
    lv_obj_t *obj28__button_piring_2;
    lv_obj_t *obj28__close;
    lv_obj_t *obj28__delete_address;
    lv_obj_t *obj28__obj10;
    lv_obj_t *obj28__obj11;
    lv_obj_t *obj28__obj12;
    lv_obj_t *obj28__obj13;
    lv_obj_t *obj28__obj14;
    lv_obj_t *obj28__obj15;
    lv_obj_t *obj28__obj16;
    lv_obj_t *obj28__obj9;
    lv_obj_t *obj29;
    lv_obj_t *obj3;
    lv_obj_t *obj4;
    lv_obj_t *obj5;
    lv_obj_t *obj6;
    lv_obj_t *obj7;
    lv_obj_t *obj8;
    lv_obj_t *obj8__approve;
    lv_obj_t *obj8__button_device1;
    lv_obj_t *obj8__button_piring_1;
    lv_obj_t *obj8__button_piring_2;
    lv_obj_t *obj8__close;
    lv_obj_t *obj8__delete_address;
    lv_obj_t *obj8__obj10;
    lv_obj_t *obj8__obj11;
    lv_obj_t *obj8__obj12;
    lv_obj_t *obj8__obj13;
    lv_obj_t *obj8__obj14;
    lv_obj_t *obj8__obj15;
    lv_obj_t *obj8__obj16;
    lv_obj_t *obj8__obj9;
    lv_obj_t *setting_button;
    lv_obj_t *setting_button_1;
    lv_obj_t *setting_button_2;
    lv_obj_t *setting_button_3;
} objects_t;

extern objects_t objects;

enum ScreensEnum {
    SCREEN_ID_MAIN = 1,
    SCREEN_ID_SETTING = 2,
    SCREEN_ID_ABOUT = 3,
    SCREEN_ID_BOX_MESSAGE = 4,
    SCREEN_ID_BOX_MESSAGE_SIRINE = 5,
};

void create_screen_main();
void tick_screen_main();

void create_screen_setting();
void tick_screen_setting();

void create_screen_about();
void tick_screen_about();

void create_user_widget_box_message(lv_obj_t *parent_obj, void *flowState, int startWidgetIndex);
void tick_user_widget_box_message(void *flowState, int startWidgetIndex);

void create_user_widget_box_message_sirine(lv_obj_t *parent_obj, void *flowState, int startWidgetIndex);
void tick_user_widget_box_message_sirine(void *flowState, int startWidgetIndex);

void create_screens();
void tick_screen(int screen_index);


#ifdef __cplusplus
}
#endif

#endif /*EEZ_LVGL_UI_SCREENS_H*/