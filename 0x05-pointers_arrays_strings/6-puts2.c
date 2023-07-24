#include "main.h"
/**
 * puts2 - function should print just one character out of two
 * starting with the first one
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int longj = 0;
	int i = 0;
	char *z = str;
	int p;

	while (*z != '\0')
	{
		z++;
		longj++;
	}
	i = longj - 1;
	for (p = 0 ; p <= i ; p++)
	{
		if (p % 2 == 0)
	{
		_putchar(str[p]);
	}
	}
	_putchar('\n');
}
