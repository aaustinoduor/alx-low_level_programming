#include "main.h"
/**
 * _strchr - Locates a character in a string
 * @s: The string
 * @c: The character
 * Return: s after the character is located, otherwise NULL if not found
 */
char *_strchr(char *s, char c)
{
	char *p = s;

	for (; *p != '\0'; p++)
	{
		if (*p == c)
			return (p);
	}
	if (*p == c)
		return (p);
	return (0);
}
