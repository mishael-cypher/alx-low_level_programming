#include "main.h"

/**
  * print_alphabet_x10 - print a-z 10 times
  *
  * Description: This function prints a-z 10 times
  *
  * Return: void (nothing)
  */
void print_alphabet_x10(void)
{
	char ch;
	int cunter;

	for (cunter = 1; cunter <= 10; cunter++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
		_putchar('\n');
	}
}
