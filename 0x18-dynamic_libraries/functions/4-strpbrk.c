#include "main.h"
/**
 * _strpbrk - Searches a string for any of a set of bytes
 * @s: The string
 * @accept: The bytes
 * Return: Where the bytes start to be found, or Null.
 */
char *_strpbrk(char *s, char *accept)
{
	int j, k, pos, Z = 0;

	for (j = 0; s[j] != '\0'; j++)
		;

	pos = j;

	for (j = 0; accept[j] != '\0'; j++)
	{
		for (k = 0; s[k] != '\0'; k++)
		{
			if (accept[j] == s[k])
			{
				if (k <= pos)
				{
					pos = k;
					Z = 1;
				}
			}
		}
	}
	if (Z == 1)
	{
		return (&s[pos]);
	}
	else
	{
		return (0);
	}
}
