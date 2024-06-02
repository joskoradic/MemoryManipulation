#include "types.h"
#include "custommemory.h"


bool memory_copy(void* destination, void* source, uint32_t length)
{
	bool result = false;

	if (destination != NULL && source != NULL)
	{
		uint32_t temp = length;

		uint32_t* dest_4 = (uint32_t*)destination;

		uint32_t* sour_4 = (uint32_t*)source;

		uint16_t* dest_2 = (uint16_t*)destination;

		uint16_t* sour_2 = (uint16_t*)source;

		uint8_t* dest_1;

		uint8_t* sour_1;

		uint32_t counter;

		if ((sizeof(int) == 4))
		{
			while ((temp % 4) != 0)
			{
				temp--;
			}

			length = length - temp;

			for (counter = 0; counter < temp; counter = counter + 4)
			{
				*dest_4 = *sour_4;
				dest_4++;
				sour_4++;
			}

			dest_1 = (uint8_t*)dest_4;
			sour_1 = (uint8_t*)sour_4;


			for (counter = 0; counter < length - temp; counter++)
			{
				*dest_1 = *sour_1;
				dest_1++;
				sour_1++;
			}

			result = true;
		}
		else if (sizeof(int) == 2)
		{

			while ((temp % 2) != 0)
			{
				temp--;
			}

			for (counter = 0; counter < temp; counter = counter + 2)
			{
				*dest_2 = *sour_2;
				dest_2++;
				sour_2++;
			}

			dest_1 = (uint8_t*)dest_2;
			sour_1 = (uint8_t*)sour_2;


			for (counter = 0; counter < length - temp; counter++)
			{
				*dest_1 = *sour_1;
				dest_1++;
				sour_1++;
			}

			result = true;
		}
		else if (sizeof(int) == 1)
		{
			for (counter = 0; counter < length; counter++)
			{
				*dest_1 = *sour_1;
				dest_1++;
				sour_1++;
			}

			result = true;
		}
		else
		{
			;
		}
	}
	else
	{
		;/* null pointer */
	}

	return result;
}





bool memory_copy_32(void* destination, void* source, uint32_t length)
{
	bool result = false;

	if ((destination != NULL) && (source != NULL) && (length != 0))
	{
		uint32_t temp = length;

		uint32_t* dest_4 = (uint32_t*)destination;

		uint32_t* sour_4 = (uint32_t*)source;

		uint8_t* dest_1 = 0;

		uint8_t* sour_1 = 0;

		uint32_t counter = 0;

		while ((temp % 4) != 0)
		{
			temp--;
		}

		length = length - temp;

		for (counter = 0; counter < temp; counter = counter + 4)
		{
			*dest_4 = *sour_4;
			dest_4++;
			sour_4++;
		}

		if (length != 0)
		{
			dest_1 = (uint8_t*)dest_4;
			sour_1 = (uint8_t*)sour_4;

			for (counter = 0; counter < length ; counter++)
			{
				*dest_1 = *sour_1;
				dest_1++;
				sour_1++;
			}
		}
		else
		{
			;
		}

	}
	else
	{
		result = false;	 
	}

	return  result;
}






bool memory_set(void* destination, uint32_t value, uint32_t length)
{
	bool result = false;

	uint16_t* dest = (uint16_t*)destination;

	if ((sizeof(uint32_t) == 4))
	{
	}
	else if (sizeof(uint32_t) == 2)
	{
	}
	else if (sizeof(uint32_t) == 1)
	{
	}
	else
	{
		;
	}
	return result;
}

void memory_uint32_t_to_char_msb_first( uint8_t* buff, uint32_t value)
{
	buff[0] = value >> 24 & 0xFF;
	buff[1] = value >> 16 & 0xFF;
	buff[2] = value >> 8 & 0xFF;
	buff[3] = value & 0xff;
}



void memory_uint16_t_to_char_msb_first(uint8_t* buff, uint16_t value)
{
	buff[0] = value >> 8 & 0xFF;
	buff[1] = value & 0xff;
}



uint32_t memory_char_to_uint32_t(uint8_t* data)
{
	uint32_t temp = 0;
	temp = (uint32_t)data[0] << 24;
	temp |= (uint32_t)data[1] << 16;
	temp |= (uint32_t)data[2] << 8;
	temp |= (uint32_t)data[3];
	return temp;
}


uint16_t memory_char_to_uint16_t(uint8_t* data)
{
	uint16_t temp = 0;
	temp = (uint16_t)data[0] << 24;
	temp |= (uint16_t)data[1] << 16;
	temp |= (uint16_t)data[2] << 8;
	temp |= (uint16_t)data[3];
	return temp;
}
