#include "types.h"

bool memory_copy(void* destination, void* source, uint32_t length);
bool memory_copy_32(void* destination, void* source, uint32_t length);
uint16_t memory_char_to_uint16_t(uint8_t* data);
uint32_t memory_char_to_uint32_t(uint8_t* data);
void memory_uint16_t_to_char_msb_first(uint8_t* buff, uint16_t value);
void memory_uint32_t_to_char_msb_first(uint8_t* buff, uint32_t value);
