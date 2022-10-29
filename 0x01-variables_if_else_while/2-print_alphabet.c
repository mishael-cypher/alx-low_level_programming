#include <stdio.h>

/**
  * main - Prints lowercase letters
  *
  * Description: Using putchar() fucntion.
  * Prints a-z in lowercase format.
  *
  * Return: 0 (success)
  */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		putchar(alphabet);
	printf("\n");
	return (0);
}
