#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: amount of memory to allocate
 *
 *Return: pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	int *mem;

	mem = malloc(b);

	if (mem == NULL || mem == 0)
	{
		free(mem);
		return (NULL);
	}
	else
	{
		return (mem);
	}
}

