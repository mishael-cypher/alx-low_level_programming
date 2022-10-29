#include <stdio.h>

/**
  * main - Prints numbers from 0-9
  *
  * Description: Using putchar() function.
  * This prints numbers from 0-9,
  * 48-57 in ASCII is 0-9 in char.
  *
  * Return: 0 (sccuess)
  */
int main(void)
{
	int number;

	for (number = 48; number <= 57; number++)
		putchar((char)number);
	putchar('\n');
	return (0);
}
