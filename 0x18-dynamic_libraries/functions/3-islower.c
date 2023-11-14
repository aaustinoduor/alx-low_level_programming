#include <stdio.h>

/**
* _islower  - Returns if the characters are lowercase or not
* 1 for lowercase, 0 for not lowercase
* @c: The letter being tested for case
* Return: 1 if lowercase, 0 if not lowercase
*/
int _islower(int c)
{
	if ('a' <= c && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
