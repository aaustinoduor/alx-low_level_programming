#include "main.h"
/**
* *_strcat - Concatenates 2 strings
* @dest: The target string
* @src: What is being added
* Return: Returns the dest
*/
char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';
	return (dest);
}
