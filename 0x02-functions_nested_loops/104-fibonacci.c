#include <stdio.h>


/**
 * numLength -  prints the length of a string
 * @num : the operand number
 * Return: the number of digits
 */

int numLength(int num)
{
	int length = 0;

	if (!num)
	{
		return (1);
	}

	while (num)
	{
		num = num / 10;
		length += 1;
	}

	return (length);
}
/**
 * main - prints the first 98 fibonaci numbers
 * Return: 0 (success)
 */

int main(void)
{
	unsigned long k1 = 1, k2 = 2, tmp, mx = 1000000, k1o = 0, k2o = 0, tmpo = 0;
	short int a = 1, initial0s;

	while (a <= 98)
	{
		if (k1o > 0)
			printf("%lu", k1o);
		initial0s = numLength(mx) - 1 - numLength(k1);
		while (k1o > 0 && initial0s > 0)
		{
			printf("%i", 0);
			initial0s--;
		}
		printf("%lu", k1);

		tmp = (k1 + k2) % mx;
		tmpo = k1o + k2o + (k1 + k2) / mx;
		k1 = k2;
		k1o = k2o;
		k2 = tmp;
		k2o = tmpo;

		if (a != 98)
			printf(", ");
		else
			printf("\n");
		a++;
	}
	return (0);
}
