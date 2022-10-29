#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Checks if a number is positive or negative
 *
 * Description: Using the srand(), rand(), RAND_MAX function.
 * Store the generatted number in n variable and check,
 * if the number is positive or negative.
 *
 * Return: 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("%d ", n);
	if (n == 0)
		printf("is zero");
	else if (n > 0)
		printf("is positive");
	else
		printf("is negative");
	printf("\n");
	return (0);
}
