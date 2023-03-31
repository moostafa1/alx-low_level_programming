#include "variadic_functions.h"


/**
 * print_str - prints string, else (nil)
 * @arg: input value of type string
 * @space: separator between values
 *
 * Return: string
 */
void print_str(va_list arg, char *space)
{
	char *str;

	str = va_arg(arg, char *);
	if (str == '\0')
		str = "(nil)";
	printf("%s", str, space);
}



/**
 * print_all - prints anything (char, int, float, double)
 * @format: input list of variadic values
 *
 * Return: string
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	int c = 0;
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
			print_str(args, space);
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

