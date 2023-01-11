#include "main.h"
#include <string.h>

/**
 * _strncpy - resets value of n to 98
 * @dest: destination string
 * @src: source string
 * @n:number of characters from src to be added to dest
 *
 * Return: void.
 */
char *_strncpy(char *dest, char *src, int n)
{
	/*declare variables*/
	int i = 0;

	/*add characters in source to destination*/
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	/*append terminating null bite to destination*/
	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
