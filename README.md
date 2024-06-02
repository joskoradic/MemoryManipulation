Custom functions for copying memory content, 


bool memory_copy(void* destination, void* source, uint32_t length); // for 8 bit, 16 bit and 32 bit 
bool memory_copy_32(void* destination, void* source, uint32_t length); // for 32 bit only
uint16_t memory_char_to_uint16_t(uint8_t* data); //converting 8byte to 16byte
uint32_t memory_char_to_uint32_t(uint8_t* data); //converting 8byte to 16byte
void memory_uint16_t_to_char_msb_first(uint8_t* buff, uint16_t value); // coverting uint16 to 8 byte array with MSB first
void memory_uint32_t_to_char_msb_first(uint8_t* buff, uint32_t value); //converting uint32 to 8 byte array with MSB first
