#include <stdio.h>

/**
 * main - entry point
 *
 * Description: Prints the alphabet in lowercase, then in upper casecase.
 *
 * Return: always 0 (success)
 *
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

	c = 'A';

	while (c <= 'Z')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}
