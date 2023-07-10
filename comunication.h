struct comunication
{

    uint32_t message;
    uint16_t topic;
    uint16_t device_id;
     
};

uint32_t comunication_init(Comunication *self);
void comunication_send_message(Comunication *self, const char *message);
void comunication_receive_message(Comunication *self, const char *message);
