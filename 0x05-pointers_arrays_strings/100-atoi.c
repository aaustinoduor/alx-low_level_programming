#include "main.h"

/**
 * _atoi - converts string to an int
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int j, a, n, len, f, num;

	j = 0;
	a = 0;
	n = 0;
	len = 0;
	f = 0;
	num = 0;

	while (s[len] != '\0')
		len++;

	while (j < len && f == 0)
	{
		if (s[j] == '-')
			++a;

		if (s[j] >= '0' && s[j] <= '9')
		{
			num = s[j] - '0';
			if (a % 2)
				num = -num;
			n = n * 10 + num;
			f = 1;
			if (s[j + 1] < '0' || s[j + 1] > '9')
				break;
			f = 0;
		}
		j++;
	}

	if (f == 0)
		return (0);

	return (n);
}
