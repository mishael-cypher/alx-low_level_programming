#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - print a sequence starting from a give number to 98
 * @n: number test case
 *
 * Description: This function prints netural numbers from
 * the given argument to 98
 *
 * Return: 0 (success)
 */
void print_to_98(int n)
{
	while (n != 98)
	{
		printf("%d", n);
		if (n > 98)
			--n;
		else if (n < 98)
			++n;
		printf(", ");
	}
	printf("%d", 98);
	printf("\n");
}
