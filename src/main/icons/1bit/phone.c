#if defined(LV_LVGL_H_INCLUDE_SIMPLE)
#include "lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif

#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

#ifndef LV_ATTRIBUTE_IMG_PHONE
#define LV_ATTRIBUTE_IMG_PHONE
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_PHONE uint8_t phone_map[] = {
  0x00, 0x00, 0x00, 
  0x0f, 0xff, 0x00, 
  0x0c, 0x03, 0x00, 
  0x0c, 0x03, 0x00, 
  0x0f, 0xff, 0x00, 
  0x08, 0x01, 0x00, 
  0x08, 0x01, 0x00, 
  0x08, 0x01, 0x00, 
  0x08, 0x01, 0x00, 
  0x08, 0x01, 0x00, 
  0x08, 0x01, 0x00, 
  0x08, 0x01, 0x00, 
  0x08, 0x01, 0x00, 
  0x08, 0x01, 0x00, 
  0x08, 0x01, 0x00, 
  0x0f, 0xff, 0x00, 
  0x0c, 0x03, 0x00, 
  0x0c, 0x03, 0x00, 
  0x0f, 0xff, 0x00, 
  0x00, 0x00, 0x00, 
};

const lv_img_dsc_t img_phone = {
    {LV_IMG_CF_ALPHA_1BIT, 0, 0, 20, 20},
    60,
    phone_map,
};