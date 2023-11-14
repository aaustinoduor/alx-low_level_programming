#include "main.h"
/**
* *_strncpy - Copies the src to dest
* @dest: The destination
* @src: The source being copied
* @n: The amount of info to copy
* Return: Always dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	int k;

	for (k = 0; k < n && src[k] != '\0'; k++)
		dest[k] = src[k];
	for (; k < n; k++)
		dest[k] = '\0';
	return(dest);

