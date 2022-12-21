#include <stdio.h>

/**
 * main - entry point
 *
 * Description: Prints all single digit numbers using only putchar
 *
 * Return: always 0 (success)
 *
 */
int main(void)

{
	int digit;

	for (digit = 0; digit < 10; digit++)
	putchar(digit + '0');

	putchar('\n');

	return (0);
}
