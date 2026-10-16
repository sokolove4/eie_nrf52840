/**
 * @file main.c
 */

#include <inttypes.h>

#include <zephyr/kernel.h>
#include <zephyr/sys/printk.h>

#include "BTN.h"
#include "LED.h"

#define SLEEP_MS 1

int main(void) {
  // int x = 5;
  // printk("before calculation");
  // int y = x + 7;
  // printk("after calculation: %d", y);

  if (0 > BTN_init()) {
    return 0;
  }
  if (0 > LED_init()) {
    return 0;
  }
  



  while (1) {
    printk("inside while loop");
    
    const char *status = "NULL";

    bool button_pressed = false;

    if (button_pressed) {
        status = "Button pressed";
    }

    printk("Status: %s\n", status);
    k_msleep(SLEEP_MS);
  }
  return 0;
}
