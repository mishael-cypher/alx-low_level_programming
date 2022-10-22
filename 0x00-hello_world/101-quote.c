#include <stdio.h>

/**
 * main - prints a string using the fprintf
 *
 * Description:
 * Prints the text in the fprintf to the stdout
 *
 * Return: 1
 */
int main(void)
{
	fprintf(stdout, "%s", "and that piece of art is useful\"");
	fprintf(stdout, "%s", " - Dora Korpar, 2015-10-19\n");
	return (1);
}
