#include "main.h"

/**
 * set_bit - sets the bit at the  Given Index to 1
 * @n: pointer to number to Changes
 * @index: index of bit to set at 1
 *
 * Return: 1 for when success, -1 for when failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
