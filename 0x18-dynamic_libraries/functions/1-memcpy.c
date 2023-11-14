#include "main.h"
/**
 * _memcpy - Copies from the src to the dest
 * @dest: The dest
 * @src: The src
 * @n: The amount to be copied
 * Return: The altered dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *p = dest;

	while (n--)
	{
		*p++ = *src++;
	}
	return (dest);
}
