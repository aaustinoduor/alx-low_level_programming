#include "main.h"

/**
 * _islower - Checks for alphabet in lowercase
 * @k:Character to be checked
 * Return: lowercase character, otherwise
 */

int _islower(int k)
{
	if (k >= 'a' && k <= 'z')
		return (1);
	else
		return (0);
}
