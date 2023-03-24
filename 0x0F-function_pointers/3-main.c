#include "3-calc.h"

/**
 * main - applies the function selected by the user
 * @argc: number of command line argument
 * @argv: command line argument array
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	printf("%d\n", get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
