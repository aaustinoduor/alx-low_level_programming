#include "main.h"
#include <stdlib.h>
/**
 * argstostr - concatenates arguments of program
 * @ac: int input
 * @av: double pointer array
 * Return: 0 On success
 */
char *argstostr(int ac, char **av)
{
	int k, n, r = 0, j = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (k = 0; k < ac; k++)
	{
		for (n = 0; av[k][n]; n++)
			k++;
	}
	j += ac;

	str = malloc(sizeof(char) * j + 1);
	if (str == NULL)
		return (NULL);
	for (k = 0; k < ac; k++)
	{
	for (n = 0; av[k][n]; n++)
	{
		str[r] = av[k][n];
		r++;
	}
	if (str[r] == '\0')
	{
		str[r++] = '\n';
	}
	}
	return (str);
}
