#include "main.h"



/**
 * _strcpy - copies the string pointed to by src, including the terminating
 * null byte (\0), to the buffer pointed to by dest
 * @dest: the copied list
 * @src: original list
 *
 * Return: none
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (src[i] != '\0')
	{
		i++;
	}

	for (; j <= i; j++)
	{
		dest[j] = src[j];
	}
	return (dest);
}




/**
 * _strlen - gets the length of the string
 * @s: input string
 *
 * Return: length of string
 */
int _strlen(const char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		len++;

	return (len);
}




/**
 * argstostr - concatenates all the arguments of your program
 * @ac: number of arguments (argc)
 * @av: argument vector (**argv)
 *
 * Return: a pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int i = 0;
	char *str;
	int len;
	int str_len = 0;

	for (; i < ac; i++)
		len += _strlen(av[i]);

	str = (char *)malloc(ac + len + 1);

	if (ac == 0 || !av || !*av || !str)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		_strcpy(&str[str_len], av[i]);
		str_len += _strlen(av[i]);
		str[str_len++] = '\n';
	}
	return (str);
}

