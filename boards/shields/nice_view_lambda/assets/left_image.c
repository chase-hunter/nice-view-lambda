#include <lvgl.h>

#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

#ifndef LV_ATTRIBUTE_IMG_LEFT_IMAGE
#define LV_ATTRIBUTE_IMG_LEFT_IMAGE
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_LEFT_IMAGE uint8_t
    left_image_map[] = {
#if CONFIG_NICE_VIEW_WIDGET_INVERTED
        0x00, 0x00, 0x00, 0xff, /*Color of index 0*/
        0xff, 0xff, 0xff, 0xff, /*Color of index 1*/
#else
        0xff, 0xff, 0xff, 0xff, /*Color of index 0*/
        0x00, 0x00, 0x00, 0xff, /*Color of index 1*/
#endif
// '8069blckmesawhite', 80x69px
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xfe, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x01, 0xff, 0xff, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xff, 0xff, 0xff, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x1f, 0xff, 0xff, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xff, 
0xff, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xff, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x00, 
0x00, 0x00, 0xff, 0xfc, 0x01, 0xff, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x01, 0xff, 0xc0, 0x00, 0x1f, 
0xfe, 0x00, 0x00, 0x00, 0x00, 0x07, 0xff, 0x00, 0x00, 0x07, 0xff, 0x00, 0x00, 0x00, 0x00, 0x07, 
0xfc, 0x00, 0x00, 0x01, 0xff, 0x80, 0x00, 0x00, 0x00, 0x0f, 0xf0, 0x00, 0x00, 0x00, 0x7f, 0x80, 
0x00, 0x00, 0x00, 0x1f, 0xe0, 0x00, 0x00, 0x00, 0x3f, 0xc0, 0x00, 0x00, 0x00, 0x3f, 0xe0, 0x00, 
0x00, 0x00, 0x1f, 0xe0, 0x00, 0x00, 0x00, 0x7f, 0xe0, 0x00, 0x00, 0x00, 0x0f, 0xf0, 0x00, 0x00, 
0x00, 0x7f, 0xe0, 0x00, 0x00, 0x00, 0x0f, 0xf0, 0x00, 0x00, 0x00, 0xff, 0xe0, 0x00, 0x00, 0x00, 
0x07, 0xf8, 0x00, 0x00, 0x01, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x03, 0xfc, 0x00, 0x00, 0x01, 0xff, 
0xe0, 0x00, 0x00, 0x00, 0x01, 0xfc, 0x00, 0x00, 0x03, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x00, 0xfe, 
0x00, 0x00, 0x07, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x7f, 0x00, 0x00, 0x07, 0xff, 0xe0, 0x00, 
0x00, 0x00, 0x00, 0x3f, 0x00, 0x00, 0x0f, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x3f, 0x80, 0x00, 
0x0f, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x80, 0x00, 0x0f, 0xff, 0xe0, 0x00, 0x00, 0x00, 
0x00, 0x1f, 0xc0, 0x00, 0x1f, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xc0, 0x00, 0x1f, 0xff, 
0xe0, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xc0, 0x00, 0x1f, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x0f, 
0xc0, 0x00, 0x3f, 0xff, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x0f, 0xe0, 0x00, 0x3f, 0xff, 0xff, 0xff, 
0xf0, 0x00, 0x00, 0x07, 0xe0, 0x00, 0x3f, 0xff, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x07, 0xe0, 0x00, 
0x3f, 0xff, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x07, 0xe0, 0x00, 0x3f, 0xff, 0xff, 0xff, 0xf0, 0x00, 
0x00, 0x07, 0xe0, 0x00, 0x3f, 0xff, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x03, 0xe0, 0x00, 0x3f, 0xff, 
0xff, 0xff, 0xf0, 0x00, 0x00, 0x03, 0xf0, 0x00, 0x7f, 0xff, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x03, 
0xf0, 0x00, 0x7f, 0xff, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x03, 0xf0, 0x00, 0x7f, 0xff, 0xff, 0xff, 
0xf0, 0x00, 0x00, 0x03, 0xf0, 0x00, 0x7f, 0xff, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x03, 0xf0, 0x00, 
0x7f, 0xff, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x03, 0xf0, 0x00, 0x7f, 0xff, 0xff, 0xff, 0xf0, 0x00, 
0x00, 0x03, 0xf0, 0x00, 0x7f, 0xff, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x03, 0xf0, 0x00, 0x7f, 0xff, 
0xff, 0xff, 0xf0, 0x00, 0x00, 0x03, 0xf0, 0x00, 0x3f, 0xff, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x03, 
0xf0, 0x00, 0x3f, 0xff, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x03, 0xe0, 0x00, 0x3f, 0xff, 0xff, 0xff, 
0xf0, 0x00, 0x00, 0x07, 0xe0, 0x00, 0x3f, 0xff, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x07, 0xe0, 0x00, 
0x3f, 0xff, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x07, 0xe0, 0x00, 0x3f, 0xff, 0xff, 0xff, 0xf0, 0x00, 
0x00, 0x07, 0xe0, 0x00, 0x3f, 0xff, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x0f, 0xe0, 0x00, 0x1f, 0xff, 
0xff, 0xff, 0xf0, 0x00, 0x00, 0x0f, 0xc0, 0x00, 0x1f, 0xff, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x0f, 
0xc0, 0x00, 0x1f, 0xff, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x1f, 0xc0, 0x00, 0x0f, 0xff, 0xff, 0xff, 
0xf0, 0x00, 0x00, 0x1f, 0xc0, 0x00, 0x0f, 0xff, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x1f, 0x80, 0x00, 
0x0f, 0xff, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x3f, 0x80, 0x00, 0x07, 0xff, 0xff, 0xff, 0xf0, 0x00, 
0x00, 0x3f, 0x00, 0x00, 0x07, 0xff, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x7f, 0x00, 0x00, 0x03, 0xff, 
0xff, 0xff, 0xf0, 0x00, 0x00, 0xfe, 0x00, 0x00, 0x01, 0xff, 0xff, 0xff, 0xe0, 0x00, 0x01, 0xfc, 
0x00, 0x00, 0x01, 0xff, 0xff, 0xff, 0xc0, 0x00, 0x03, 0xfc, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 
0x80, 0x00, 0x07, 0xf8, 0x00, 0x00, 0x00, 0x7f, 0xff, 0xff, 0x00, 0x00, 0x0f, 0xf0, 0x00, 0x00, 
0x00, 0x7f, 0xff, 0xfe, 0x00, 0x00, 0x0f, 0xf0, 0x00, 0x00, 0x00, 0x3f, 0xff, 0xfc, 0x00, 0x00, 
0x1f, 0xe0, 0x00, 0x00, 0x00, 0x1f, 0xff, 0xf8, 0x00, 0x00, 0x3f, 0xc0, 0x00, 0x00, 0x00, 0x0f, 
0xff, 0xf0, 0x00, 0x00, 0x7f, 0x80, 0x00, 0x00, 0x00, 0x07, 0xff, 0xe0, 0x00, 0x01, 0xff, 0x80, 
0x00, 0x00
};

const lv_img_dsc_t left_image = {
    .header.cf = LV_IMG_CF_INDEXED_1BIT,
    .header.always_zero = 0,
    .header.reserved = 0,
    .header.w = 80,
    .header.h = 69,
    .data_size = 620,
    .data = left_image_map,
};
