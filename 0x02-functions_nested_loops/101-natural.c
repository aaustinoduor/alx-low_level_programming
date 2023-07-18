#include <stdio.h>

/**
 * main - computes and prints sum of multiples
 * of 3 or 5 below 1024
 * Return: Always 0.
 */
int main(void)
{
	unsigned long int s3, s5, s;
	int j;

	s3 = 0;
	s5 = 0;
	s = 0;

	for (j = 0; j < 1024; ++j)
	{
		if ((j % 3) == 0)
		{
			s3 = s3 + j;
		} else if ((j % 5) == 0)
		{
			s5 = s5 + j;
		}
	}
	s = s3 + s5;
	printf("%lu\n", s);
	return (0);
}
