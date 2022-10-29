#include "main.h"

/**
  * _islower - check if character is lowercase
  * @c: the character to be checked
  *
  * Description: check if a character passed is lowercase
  *
  * Return: i if charcater is lower, else 0
  */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
