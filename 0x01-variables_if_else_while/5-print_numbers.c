#include <stdio.h>

/**
  * main - Print numbers
  *
  * Description: Using printf() function.
  * This prints numbers from 0-9.
  *
  * Return: 0 (success)
  */
int main(void)
{
	int number;

	for (number = 0; number <= 9; number++)
		printf("%d", number);
	printf("\n");
	return (0);
}
