#include "main.h"




/**
 * convert_coins - compares two values to check specific condition
 * @cents: the number of sents to compress to 25, 10, 5, 2
 *
 * Return: int minimum amount of coins to have
 */
int convert_coins(int cents)
{
	int coins[4] = {25, 10, 5, 2};
	int i = 0;
	int num_of_coins = 0;

	for (; i < 4; i++)
	{
  		if (cents >= coins[i])
		{
			int reminder = 0;

			num_of_coins += cents / coins[i];
			reminder = cents - (cents / coins[i] * coins[i]);
			cents = reminder;
		}
	}
	return (num_of_coins + cents);
}


/**
 * main - prints the minimum number of coins to change for amount of money
 * @argc: num of things that have been entered to the cmd when
 *      running this program on terminal
 * @argv: array that holds the string values of the things
 *      that have been entered on the cmd when running the program
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	if (atoi(argv[1]) < 0)
	{
		printf("0\n");
		return (0);
	}

	printf("%d\n", convert_coins(atoi(argv[1])));
	return (0);
}


