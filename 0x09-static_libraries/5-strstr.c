#include "main.h"
#include <string.h>

/**
 * _strstr- returns bytes of segment
 * @haystack: destination string
 * @needle: constant byte
 *
 * Return: void.
 */
char *_strstr(char *haystack, char *needle)
{
	char *result = haystack, *fneedle = needle;

	while (*haystack)
	{
		while (*needle)
		{
			if (*haystack++ != *needle++)
			{
				break;
			}
		}
		if (!*needle)
		{
			return (result);
		}
		needle = fneedle;
		result++;
		haystack = result;
	}
	return (0);
}
