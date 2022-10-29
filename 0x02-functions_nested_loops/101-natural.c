#include <stdio.h>

/**
 * main - prints the sum of all natural numbers below 1024
 *
 * Description: print the sum of all natural numbers below 1024
 * which are multiples of 3 or 5
 *
 * Return: 0 (success)
 */
int main(void)
{
	int num, sum;

	sum = 0;
	for (num = 1; num < 1024; num++)
	{
		if (num % 3 == 0 || num % 5 == 0)
		{
			sum += num;
		}
	}
	printf("%d\n", sum);
	return (0);
}
