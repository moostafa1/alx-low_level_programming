#include "main.h"

/**
 * cond - checks a specific condition
 * @letter: each string letter to check condition on
 * @a: value to compare with
 * @val: value to set if the condition satisfied
 *
 * Return: void
 */
char cond(char letter, char a, int val)
{
	if (letter == a || letter == a - 32)
	{
		printf("letter: %c, %d\n", letter, val);
		letter = val + '0';
	}
	return (letter);
}





/**
 * leet - encodes a string into 1337
 * Letters a and A should be replaced by 4
 * Letters e and E should be replaced by 3
 * Letters o and O should be replaced by 0
 * Letters t and T should be replaced by 7
 * Letters l and L should be replaced by 1
 * @str: pointer to the string
 *
 * Return: pointer to the string
 */
char *leet(char *str)
{
	int i = 0;

	for (; str[i] != '\0'; i++)
	{
		str[i] = cond(str[i], 'a', 4);
		str[i] = cond(str[i], 'e', 3);
		str[i] = cond(str[i], 'o', 0);
		str[i] = cond(str[i], 't', 7);
		str[i] = cond(str[i], 'l', 1);
	}
	return (str);
}
