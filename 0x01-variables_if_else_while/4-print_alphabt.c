#include <stdio.h>

/**
  * main - Prints lowercase letters.
  *
  * Description: Using continue statement and putchar() function.
  * This will print all lowercase letters,
  * except 'q' and 'e'.
  *
  * Return: 0 (success)
  */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		if (alphabet == 'q' || alphabet == 'e')
			continue;
		else
			putchar(alphabet);
	}
	printf("\n");
	return (0);
}
