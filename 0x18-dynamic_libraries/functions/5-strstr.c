#include "main.h"
/**
 * _strstr - Locates a substring
 * @haystack: The main string
 * @needle: The substring
 * Return: Where the substring is in the main string or 0
 */
char *_strstr(char *haystack, char *needle)
{
	char *h, *n;

	if (haystack == '\0' || needle == '\0')
		return (0);
	for (; *haystack; haystack++)
	{

	for (h = haystack, n = needle; *h && *n && (*h == *n); h++, n++)
		;
	if (*n == '\0')
		return (haystack);
	}
	return (0);
}
