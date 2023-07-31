#include "main.h"
/**
 * _strpbrk - Function searches string for any of set of bytes.
 * @s: input
 * @accept: input
 * Return: Always 0.
 */
char *_strpbrk(char *s, char *accept)
{
		int p;

		while (*s)
		{
			for (p = 0; accept[p]; p++)
			{
			if (*s == accept[p])
			return (s);
			}
		s++;
		}

	return ('\0');
}
