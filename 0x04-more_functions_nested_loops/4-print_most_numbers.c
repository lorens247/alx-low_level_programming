#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers -  Function that prints the numbers
 * from 0 to 9 excluding 2 and 4
 * Return: Void.
 */

void print_most_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
	if (!(c == '2' || c == '4'))
	_putchar(c);
	}
	_putchar('\n');
}