#include <stdlib.h>
/**
  * malloc_checked - allocates memory using malloc.
  * @a: size of memory to be allocated.
  *
  * Return: pointer to allocated memory.
  */
void *malloc_checked(unsigned int a)
{
	void *p = malloc(a);

	if (p == NULL)
		exit(98);

	return (p);
}
