#include <stdio.h>

/**
 * main - Prints two digits combinations
 *
 * Description: Using putchar() function.
 * print all possible combinations of two digits
 *
 * Return: 0 (success)
 */
int main(void)
{
	int number1, number2;

	for (number1 = 48; number1 <= 56; number1++)
	{
		for (number2 = number1 + 1; number2 <= 57; number2++)
		{
			putchar((char)number1);
			putchar((char)number2);
			if (number1 != 56)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
