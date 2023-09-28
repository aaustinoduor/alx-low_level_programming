#include <unistd.h>
#include "main.h"
/**
 * _putchar - writes character c to stdout
 * @c: Character to print
 *
 * Return: 1.
 * On error, -1 is returned, and errno is set accordingly.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
