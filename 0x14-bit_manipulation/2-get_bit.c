#include "main.h"

/**
 * get_bit - returns value of bit at index in the decimal number
 * @n: number to be searched
 * @index: The index of  bit
 *
 * Return: The value of bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
