#include <stdio.h>

/**
 * main - Prints 0-9 with space and comma
 *
 * Description: Using putchar() function.
 * Prints 0-9 with space and comma.
 * Eg -> 0, 1, 2, 3, .., 9
 *
 * Return: 0 (success)
 */
int main(void)
{
	int number;

	for (number = 48; number <= 57; number++)
	{
		putchar((char)number);
		if (number != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
