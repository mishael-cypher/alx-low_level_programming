#include <stdio.h>

/**
 * main - Prints three digit combinations
 *
 * Description: Using putchar() function
 * print all possible combinations of three digits
 *
 * Return: 0 (success)
 */
int main(void)
{
	int number1, number2, number3;

	number1 = 48;
	while (number1 <= 55)
	{
		number2 = number1 + 1;
		while (number2 <= 56)
		{
			number3 = number2 + 1;
			while (number3 <= 57)
			{
				putchar((char)number1);
				putchar((char)number2);
				putchar((char)number3);
				if (number1 != 55)
				{
					putchar(',');
					putchar(' ');
				}
				number3++;
			}
			number2++;
		}
		number1++;
	}
	putchar('\n');
	return (0);
}
