#include "main.h"
/**
 * _memset - Fills memory with a constant byte
 * @s: Area being looked at
 * @b: Byte filling memory
 * @n: Amount of memory being filled
 * Return: New memory
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n--)
	{
		*p++ = b;
	}
	return (s);
}
