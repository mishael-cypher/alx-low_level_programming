#include "main.h"

/**
 * print_last_digit - Print the last digit of an integer
 * @num: the number to be processed
 *
 * Description: This function return the last digit
 * of a number
 *
 * Return: last digit of num
 */
int print_last_digit(int num)
{
	int ldigit;

	ldigit = num % 10;
	if (ldigit < 0)
		ldigit = -ldigit;
	_putchar(ldigit + '0');
	return (ldigit);
}
