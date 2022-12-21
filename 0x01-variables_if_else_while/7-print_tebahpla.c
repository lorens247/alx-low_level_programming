#include <stdio.h>

/**
 * main - entry point
 *
 * Description: A program that prints the lowercase alphabet in reverse.
 *
 * Return: always 0 (success)
 *
 */
int main(void)

{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
	putchar(letter);

	putchar('\n');

	return (0);
}
