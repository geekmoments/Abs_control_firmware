

struct Graphic_interface
{

  char* ip_address;
  char* device_name;
  uint32_t phase;
  uint32_t antenna;

};

uint32_t display_init(Display *self);
void display_show_data(Display *self);