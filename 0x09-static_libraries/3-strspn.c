#include "main.h"
/**
 * _strspn - Main entry point
 * @s: input
 * @accept: input
 * Return: Always 0.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int k = 0;
	int n;

	while (*s)
	{
		for (n = 0; accept[n]; n++)
		{
			if (*s == accept[n])
			{
				k++;
				break;
			}
			else if (accept[k + 1] == '\0')
				return (k);
		}
		s++;
	}
	return (k);
}
