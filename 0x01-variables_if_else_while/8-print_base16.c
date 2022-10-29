#include <stdio.h>

/**
 * main - Prints base 16 numbers in lowercase
 *
 * Description: Using putchar() function
 * Prints all numbers of base 16 '0-9a-f'
 *
 * Return: 0 (success)
 */
int main(void)
{
	int number;
	char alphabet;

	for (number = 48; number <= 57; number++)
		putchar((char)number);
	for (alphabet = 'a'; alphabet <= 'f'; alphabet++)
		putchar(alphabet);
	putchar('\n');
	return (0);
}
