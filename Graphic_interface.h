#include <stdint.h>


struct Graphic_interface
{

  char* ip_address;
  char* device_name;
  uint32_t phase;
  uint32_t antenna;

};

uint32_t display_init(Graphic_interface *self);
uint32_t* order_and_group_data(Graphic_interface *self);
void display_show_data(Graphic_interface *self);