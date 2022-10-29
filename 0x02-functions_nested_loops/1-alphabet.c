#include "main.h"

/**
  * print_alphabet - Prints a-z
  *
  * Description: This function prints
  * characters from a-z then newline
  *
  * Return: void (nothing)
  */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}
