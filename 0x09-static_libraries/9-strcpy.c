#include "main.h"
#include <string.h>

/**
 * _strcpy - replicates the strcpy function
 * @dest : destination of string
 * @src : source to copy from
 *
 * Return: void.
 */
char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);

	return (dest);
}
