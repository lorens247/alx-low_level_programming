#include <stdlib.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * Description: Program that prints the alphabet in lowercase.
 *
 * Return: always 0 (success)
 *
 */
int main(void)

{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}
