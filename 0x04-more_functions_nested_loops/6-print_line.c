#include "main.h"

/**
 * print_line - Function that draws a straight line.
 * @n : The number of '_' characters to use
 * Return: Void.
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
