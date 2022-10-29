#include <stdio.h>

/**
  * main - Prints lowercase & uppercase alphabets.
  *
  * Description: Using putchar() fucntion.
  * Prints a-zA-Z.
  *
  * Return: 0 (success)
  */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		putchar(alphabet);
	for (alphabet = 'A'; alphabet <= 'Z'; alphabet++)
		putchar(alphabet);
	printf("\n");
	return (0);
}
