#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
  * main - Check and prints if lastdigit is positive or negative.
  *
  * Description: Using the srand(), rand() function.
  * This check if the lastdigit is greater than, equal or
  * not equal a given number.
  *
  * Return: 0 (Success)
  */
int main(void)
{
	int n;
	int lastdigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastdigit = n % 10;
	if (lastdigit > 5)
		printf("Last digit of %d is %d and is greater than 5", n, lastdigit);
	else if (lastdigit == 0)
		printf("Last digit of %d is %d and is 0", n, lastdigit);
	else if (lastdigit < 6 && lastdigit != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0", n, lastdigit);
	printf("\n");
	return (0);
}
