#include "main.h"
#include <unistd.h>
/**
 * _putchar - Writes Character c directly to the stdout
 * @c: Character to be printed
 *
 * Return: On occasion of success 1.
 * On occasion of error, -1 is to be returned, and errno is set as appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
