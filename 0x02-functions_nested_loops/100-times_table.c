#include "main.h"
/**
 * print_times_table - function that prints the n times table
 * @n: number of the times table
 */
void print_times_table(int n)
{
	int i, j, k;
	
	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('0');

			for (j = 0; j <= n; j++)
			{
				_putchar(',');
				_putchar(' ');
				
				k = j * i;

				if (k <= 99)
					_putchar(' ');
				if (k <= 9)
					_putchar(' ');

				if (k >= 100)
				{
					_putchar((j / 100) +'0');
					_putchar (((j / 10)) % 10 + '0');
				}
				else if (j <= 99 && j >= 10)
				{
					_putchar((j / 10) + '0');
				}
				_putchar((j % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
