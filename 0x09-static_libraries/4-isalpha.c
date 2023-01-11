#include "main.h"
#include <ctype.h>

/**
 * _isalpha - checks if character is lower or upper
 * @c: takes input to function
 * Return: Always 0 (Success)
 */
int _isalpha(int c)
{
	int value;

	if (isalpha(c))
		value = 1;
	else
		value = 0;
	return (value);
}
