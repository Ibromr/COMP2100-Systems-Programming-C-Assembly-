#ifndef __DISPLAY_H
#define __DISPLAY_H
#include <stdint.h>

    void display_init(void);
    void display_power_on(void);
    void display_ower_off(void);
    void display_write_to_screen(int32_t num);

#endif