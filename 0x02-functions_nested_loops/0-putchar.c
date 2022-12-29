#include "main.h"

/**
 * main - Prints _putchar, followed by a new line
 * Return: Always 0 (success)
 */
int main(void)
{
	char a[] = "_putchar";
	int b;

	for (b = 0; b < 8; b++)
	{
		_putchar (a[b]);
	}
	_putchar('\n');
	return (0);
}
