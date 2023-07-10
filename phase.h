
struct phase
{

    uint32_t angle;
    uint32_t antenna;
    uint32_t gpio_port;
    
};

int phase_init(struct Phase *self);
void phase_set_angle(struct Phase *self, uint32_t angle);
