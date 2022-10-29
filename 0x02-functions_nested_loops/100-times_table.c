#include "main.h"

/**
 * print_times_table - print a times table for a given number n
 * @n: the maximum number
 *
 * Description: This function prints a times table for
 * a given argument passed to n parameter
 *
 * Return: void (nothing)
 */
void print_times_table(int n)
{
	int cunter1, cunter2, product;

	if (n >= 0 && n <= 15)
	{
		for (cunter1 = 0; cunter1 <= n; cunter1++)
		{
			for (cunter2 = 0; cunter2 <= n; cunter2++)
			{
				product = cunter1 * cunter2;
				if (cunter2 != 0)
				{
					_putchar(',');
					_putchar(' ');
					if (product < 100)
						_putchar(' ');
					if (product < 10)
						_putchar(' ');
				}
				if (product >= 100)
				{
					_putchar('0' + product / 100);
					_putchar('0' + (product % 100) / 10);
					_putchar('0' + (product % 10));
				}
				else if (product <= 9)
				{
					_putchar('0' + product);
				}
				else
				{
					_putchar('0' + product / 10);
					_putchar('0' + product % 10);
				}
			}
			_putchar('\n');
		}
	}
}
