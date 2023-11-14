#include "main.h"
/**
* *_strncat - Concatenates 2 strings
* @dest: The target string
* @src: What is being added
* @n: How much of src is being added to dest
* Return: prints the dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0; src[j] != '\0' && j < n; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';
	return (dest);
}
