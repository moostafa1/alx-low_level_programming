#include "main.h"


/**
 * isnumeric - checks if the string is numeric or not
 * @s: input string
 *
 * Return: 1 if numeric, else 0
 */
int isnumeric(char *s)
{
	int i = 0;

	for (; *(s + i) != '\0'; i++)
	{
		if (*(s + i) < 48 || *(s + i) > 57)
		{
			return (0);
		}
	}
	return (1);
}




/**
 * main - prints the name of the program itself
 * @argc: num of things that have been entered to the cmd when
 *      running this program on terminal
 * @argv: array that holds the string values of the things
 *      that have been entered on the cmd when running the program
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i = 1;
	int sum = 0;

	for (; i < argc; i++)
	{
		if (isnumeric(argv[i]))
		{
			sum += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
