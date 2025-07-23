#ifndef EEZ_LVGL_UI_VARS_H
#define EEZ_LVGL_UI_VARS_H

#include <stdint.h>
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

// enum declarations

typedef enum {
    mode_mode_0 = 0,
    mode_mode_1 = 1,
    mode_mode_2 = 2,
    mode_mode_3 = 3,
    mode_mode_4 = 4,
    mode_mode_5 = 5,
    mode_mode_6 = 6,
    mode_mode_7 = 7,
    mode_mode_8 = 8
} mode;

// Flow global variables

enum FlowGlobalVariables {
    FLOW_GLOBAL_VARIABLE_DEVICE1 = 0,
    FLOW_GLOBAL_VARIABLE_DEVICE2 = 1,
    FLOW_GLOBAL_VARIABLE_ADDRESS = 2,
    FLOW_GLOBAL_VARIABLE_ADDRESS2 = 3,
    FLOW_GLOBAL_VARIABLE_BINDING_MODAL = 4,
    FLOW_GLOBAL_VARIABLE_VOLUME = 5,
    FLOW_GLOBAL_VARIABLE_SIREN_TONE = 6,
    FLOW_GLOBAL_VARIABLE_SIREN_MODAL = 7,
    FLOW_GLOBAL_VARIABLE_DATA_STRUCTURE = 8,
    FLOW_GLOBAL_VARIABLE_NAME_DEVICE = 9,
    FLOW_GLOBAL_VARIABLE_NOTIF = 10,
    FLOW_GLOBAL_VARIABLE_HIDDEN_MASSAGE = 11,
    FLOW_GLOBAL_VARIABLE_ICON_NOTIF = 12
};

// Native global variables



#ifdef __cplusplus
}
#endif

#endif /*EEZ_LVGL_UI_VARS_H*/