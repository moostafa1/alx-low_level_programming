#include "main.h"

char *create_array(unsigned int size, char c)
{
	char *s;

	s = malloc(sizeof(*s) * size);
	if (size == 0 || s == '\0')
	{
		return ('\0');
	}
	s = c;
	free(s);
	return (s);
}

