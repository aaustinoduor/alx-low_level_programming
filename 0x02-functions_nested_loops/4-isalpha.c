#include "main.h"
/**
 * _isalpha - Alphabetic order
 *
 * @k: check for alpabet
 *
 * Return: 1 if k is a letter, 0 otherwise
 */
int _isalpha(int k)
{
	return ((k >= 'a' && k <= 'z') || (k >= 'A' && k <= 'Z'));

}

