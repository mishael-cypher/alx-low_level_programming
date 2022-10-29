#include <stdio.h>

/**
 * main - Prints z-a in lowercase
 *
 * Description: Using the putchar
 * Print the alphabet in reverse order z-a
 *
 * Return: 0 (success)
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'z'; alphabet >= 'a'; alphabet--)
		putchar(alphabet);
	putchar('\n');
	return (0);
}
