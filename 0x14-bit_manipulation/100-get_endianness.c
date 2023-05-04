#include "main.h"

/**
 * get_endianness - Check if the machine is Little or Big endian
 * Return: 0 for Big, 1 for Little
 */
int get_endianness(void)
{
	unsigned int m = 1;
	char *c = (char *) &m;

	return (*c);
}
