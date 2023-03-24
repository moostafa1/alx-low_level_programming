#include "3-calc.h"

/**
 * get_op_func - selects the correct function to perform the operation asked
 * by the user
 * @s: selected operator
 *
 * Return: the selected operation
 */
int (*get_op_func(char *s))(int, int)
{
	int i = 0;

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	while (i < 6)
	{
		if (*(ops[i]).op == *s)
			break;
		i++;
	}
	return (ops[i].f);
}
