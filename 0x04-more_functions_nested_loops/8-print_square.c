#include "main.h"
#include <stdio.h>

/**
 * print_square - Function that draws a square.
 * @size : The number of lines using '\' characters to use
 * Return: Void.
 */

void print_square(int size)
{
	int x, y;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (x = 0; x < size; x++)
		{
			for (y = 0; y < size; y++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}