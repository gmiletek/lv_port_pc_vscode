/**
 * @file gmile.c
 *
 */

/*********************
 *      INCLUDES
 *********************/
#include "gmile.h"

/*********************
 *      DEFINES
 *********************/
static void create_hello(lv_obj_t * parent);

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 *  STATIC PROTOTYPES
 **********************/

/**********************
 *  STATIC VARIABLES
 **********************/

/**********************
 *      MACROS
 **********************/

/**********************
 *   GLOBAL FUNCTIONS
 **********************/

void start_gmile(void)
{
    /* Set screen background to black */
    lv_obj_set_style_bg_color(lv_screen_active(), lv_color_black(), 0);
    lv_obj_set_style_bg_opa(lv_screen_active(), LV_OPA_COVER, 0);

    create_hello(lv_screen_active());
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

static void create_hello(lv_obj_t * parent)
{
    /* Create a container with white semi-transparent background */
    lv_obj_t * cont = lv_obj_create(parent);
    lv_obj_set_size(cont, 200, 80);  // Set size of the container
    lv_obj_center(cont);  // Center the container

    /* Style the container */
    lv_obj_set_style_bg_color(cont, lv_color_white(), 0);
    lv_obj_set_style_bg_opa(cont, LV_OPA_50, 0);  // 50% opacity
    lv_obj_set_style_radius(cont, 15, 0);  // Round corners

    /* Create a label inside the container */
    lv_obj_t * label = lv_label_create(cont);
    lv_label_set_text(label, "hello gmile");
    lv_obj_center(label);  // Center the label in the container
}
