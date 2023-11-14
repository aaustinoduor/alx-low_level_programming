#include "main.h"
/**
 * _strspn - Finds the length of a prefix substring
 * @s: The string
 * @accept: The characters that are being matched
 * Return: The length of a prefix substring
 */
unsigned int _strspn(char *s, char *accept)
{
	char *p = s;
	char *o = accept;
	int len = 0, j, z;

	for (j = 0; p[j] != '\0'; j++)
	{
		if (len != j)
			break;
		for (z = 0; o[z] != '\0'; z++)
		{
			if (p[j] == o[z])
				len++;
		}
	}
	return (len);
}
