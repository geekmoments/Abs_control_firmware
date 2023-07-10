struct data_storage
{

    uint32_t angle;
    uint32_t address;
     
};

uint32_t data_storage_init(DataStorage *self);
void data_storage_save_angle(DataStorage *self, uint32_t angle);
uint32_t data_storage_read_angle(DataStorage *self);
