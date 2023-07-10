#include <stdint.h>


struct Data_storage
{

    uint32_t angle;
    uint32_t address;
     
};

uint32_t data_storage_init(Data_storage *self);
void data_storage_save_angle(Data_storage *self, uint32_t angle);
uint32_t data_storage_read_angle(Data_storage *self);
