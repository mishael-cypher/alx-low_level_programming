#include "main.h"

/**
 * times_table - print the 9 times table, starting from 0
 *
 * Description: This function prints the 9 times table
 * from 0
 *
 * Return: void (nothing)
 */
void times_table(void)
{
	int cunter1, cunter2, product;

	for (cunter1 = 0; cunter1 <= 9; cunter1++)
	{
		for (cunter2 = 0; cunter2 <= 9; ++cunter2)
		{
			product = cunter1 * cunter2;
			if (cunter2 != 0)
			{
				_putchar(',');
				_putchar(' ');
				if (product <= 9)
					_putchar(' ');
			}
			if (product <= 9)
			{
				_putchar('0' + product);
			}
			else
			{
				_putchar('0' + (product / 10));
				_putchar('0' + (product % 10));
			}
		}
		_putchar('\n');
	}
}
