#include "main.h"


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
	if (argc == 3)
	{

		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	printf("Error\n");
	return (1);
}
