#include "main.h"
/**
 * _strlen_recursion - Returns the length of string.
 * @s: The string to be measured.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	int longin = 0;

	if (*s)
	{
		longin++;
		longin += _strlen_recursion(s + 1);
	}

	return (longin);
}
