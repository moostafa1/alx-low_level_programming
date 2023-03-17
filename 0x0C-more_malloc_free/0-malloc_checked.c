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

	if (b == 0)
		return (NULL);

	mem = malloc(b);

	if (mem == NULL)
	{
		mem = malloc(98);
	}
	return (mem);
}
