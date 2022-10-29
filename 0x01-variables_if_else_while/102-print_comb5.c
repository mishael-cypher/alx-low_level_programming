#include <stdio.h>

/**
 * main - Prints two two-digit number combination
 *
 * Description: Using function
 * print all possible combination of two two-digit numbers
 * Return: 0 (success)
 */
int main(void)
{
	int number1, number2;

	number1 = 0;
	while (number1 <= 98)
	{
		number2 = number1 + 1;
		while (number2 <= 99)
		{
			if (number1 < number2)
			{
				putchar(number1 / 10 + '0');
				putchar(number1 % 10 + '0');
				putchar(' ');
				putchar(number2 / 10 + '0');
				putchar(number2 % 10 + '0');
				if (number1 != 98 || number2 != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
			++number2;
		}
		++number1;
	}
	putchar('\n');
	return (0);
}
