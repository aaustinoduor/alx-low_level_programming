#include "main.h"
/**
 * _strspn - Function that gets length of prefix substring.
 * @s: input
 * @accept: input
 * Return: Always 0.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a = 0;
	int p;

	while (*s)
	{
		for (p = 0; accept[p]; p++)
		{
			if (*s == accept[p])
			{
				a++;
				break;
			}
			else if (accept[p + 1] == '\0')
				return (a);
		}
		s++;
	}
	return (a);
}
