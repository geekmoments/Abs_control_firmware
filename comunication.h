#include <stdint.h>

struct Comunication
{

    uint32_t message;
    uint16_t topic;
    uint16_t device_id;
    uint32_t antenna;
    uint32_t angle;
     
};

uint32_t comunication_init(Comunication *self);
uint32_t* order_and_group_txrx_data(Comunication *self);
void comunication_send_message(Comunication *self, const char *message);
void comunication_receive_message(Comunication *self, const char *message);
