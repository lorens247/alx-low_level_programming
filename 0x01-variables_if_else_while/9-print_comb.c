#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program that prints all digit numbers of base 10 starting from 0
 *
 * Return: always 0 (success)
 *
 */
int main(void)

{	int c = 0;
	
	while (c < 10)
	{
		putchar(48 + c);
		if (c != 9)
		{
			putchar(',');
			putchar(' ');
		}
		c++
	}
	putchar('\n');
	return (0);
}
