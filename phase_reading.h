#include <stdint.h>


struct phase_reading
{
    uint32_t antenna;
    uint32_t phase_calculated;
    uint32_t ADC_value;
    
};

uint32_t phase_reading_init(phase_reading *self);
uint32_t phase_calculation(phase_reading *self);
void phase_reading_update(phase_reading *self);