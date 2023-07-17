#include <stdio.h>
/**
 * Main - Entry point
 *
 * Description: Posible combinations of 3 digits a 3 digit number
 *
 * Return: Always 0 (success)
 *
 */
int main(void)
{
	int num1, num2, num3;

	for (num1 = 0; num1 < 7; num1++)
	{
		for (num2 = num1 + 1; num2 < 8; num2++)
		{
			for (num3 = num2 + 1; num3 < 9; num3++)
			{
				putchar((num1 % 10) + '0');
				putchar((num2 % 10) + '0');
				putchar((num3 % 10) + '0');
				if (num1 == 6 && num2 == 7 && num3 == 8)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
