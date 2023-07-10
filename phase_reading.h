struct phase_reading
{

    uint32_t phase_calculated;
    uint32_t ADC_value;
    
};

uint32_t phase_reading_init(PhaseReading *self);
void phase_reading_update(PhaseReading *self);