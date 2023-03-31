#include "variadic_functions.h"

/**
 * print_all - prints anything (char, int, float, double)
 * @format: input list of variadic values
 *
 * Return: string
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *str;
	char *space;
	va_list args;

	va_start(args, format);
	while (*(format + i) != '\0')
	{
		space = "";
		if (*(format + i + 1))
			space = ", ";
		switch (*(format + i))
		{
		case 's':
			str = va_arg(args, char *);
			if (!str || !*str)
				str = "(nil)";
			printf("%s%s", str, space);

			break;
		case 'c':
			printf("%c%s", (char)va_arg(args, int), space);
			break;
		case 'i':
			printf("%i%s", (int)va_arg(args, int), space);
			break;
		case 'f':
			printf("%f%s", (float)va_arg(args, double), space);
			break;
		}
		i++;
	}
	putchar('\n');
}
