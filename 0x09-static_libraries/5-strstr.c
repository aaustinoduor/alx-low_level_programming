#include "main.h"
/**
 * _strstr - Main entry point
 * @haystack: input
 * @needle: input
 * Return: Always 0.
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *j = needle;

		while (*l == *j && *j != '\0')
		{
			l++;
			j++;
		}

		if (*j == '\0')
			return (haystack);
	}

	return (0);
}
