/*
 * common.h
 *
 *  Created on: Dec 19, 2016
 *      Author: zte
 */

#ifndef UTILS_H_
#define UTILS_H_

#include <stdio.h>
#include "status.h"
#include "val.h"
#include "obj.h"
#include "val_util.h"
#include "agt_util.h"
#include "procdefs.h"

#define NOP
#define MAX_NUMBER_OF_ELEMENTS 100

status_t create_root_element(const char *module_name, const char *revision, const char *element_name, val_value_t** created_element_val);
status_t create_and_init_child_element(const char *modname, const char *objname, val_value_t *parent_val, val_value_t **child_val,
        const char *valuestr, bool is_runtime);
status_t create_and_init_all_leaf_children(val_value_t *parent_val, const char *module_name, const char *element_name, bool is_runtime);
status_t create_and_init_siblings(obj_template_t *curr_obj,	val_value_t *parent_val, const char* module_name, bool is_runtime);
status_t add_virtual_leaf(val_value_t *parentVal, const char *elementName, getcb_fn_t callbackFunction);

#define YUMA_ASSERT(condition, action, fmt, ...) 	\
({													\
	if ((condition))								\
	{												\
		fprintf(stderr, "ERROR: %s at %s line %d: "fmt"\n", __FILE__,__FUNCTION__,__LINE__, ##__VA_ARGS__); \
		action;										\
	} 												\
})


#define Y_TAPI_TOPOLOGY_N_(name) y_tapi_topology_N_##name

#define ATTACH_LEAF_WITH_VALUE(parent_val, child_name, value) \
({ \
    val_value_t  *child_val = NULL; \
    res = create_and_init_child_element(y_tapi_topology_M_tapi_topology, Y_TAPI_TOPOLOGY_N_(child_name), \
        parent_val, &child_val, value, false); \
    YUMA_ASSERT(NULL == child_val, return ERR_INTERNAL_VAL, \
        "create_and_init_child_element failed for element=%s", Y_TAPI_TOPOLOGY_N_(child_name)); \
})

#define ATTACH_LEAF(parent_val, child_name) \
({ \
    val_value_t  *child_val = NULL; \
    res = create_and_init_child_element(y_tapi_topology_M_tapi_topology, Y_TAPI_TOPOLOGY_N_(child_name), \
        parent_val, &child_val, NULL, false); \
    YUMA_ASSERT(NULL == child_val, return ERR_INTERNAL_VAL, \
        "create_and_init_child_element failed for element=%s", Y_TAPI_TOPOLOGY_N_(child_name)); \
})


#define CB_GET_RUNTIME_VALUE(name) cb_get_runtime_##name##_value

#define CB_SET_RUNTIME_VALUE(element_name, element, res) \
({ \
    int need_free = TRUE; \
    YUMA_ASSERT(NULL == (*element), return ERR_INTERNAL_VAL, "NULL element received"); \
\
    char* elementStringValue = CB_GET_RUNTIME_VALUE(element_name)(*element); \
    if (elementStringValue == NULL) \
    { \
        elementStringValue = obj_get_default((*element)->obj); \
        need_free = FALSE; \
    } \
    else \
    { \
        res = val_set_simval_obj(*element, (*element)->obj, elementStringValue); \
        YUMA_ASSERT(res != NO_ERR, return ERR_INTERNAL_VAL, "val_set_simval_obj %s failed!", (*element)->name); \
\
        if (need_free) \
            free(elementStringValue); \
    } \
})

#endif /* COMMON_H_ */
