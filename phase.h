#include <stdint.h>

struct phase
{

    uint32_t angle;
    uint32_t antenna;
    uint32_t gpio_port;
    
};

uint16_t phase_init(struct Phase *self);
uint16_t angle_to_bits(struct Phase *self);
void phase_set_angle(struct Phase *self, uint32_t angle);
