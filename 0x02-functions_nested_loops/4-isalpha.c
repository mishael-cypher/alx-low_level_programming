#include "main.h"

/**
 * _isalpha - check whether an argument is lowercase or uppercase
 * @c: the character to be checked
 *
 * Description: This function checks if c a letter,
 * if passed lowercase or uppercase
 *
 * Return: 1 if c is is a letter, else 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
