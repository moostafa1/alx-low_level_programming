#include <stdio.h>
/**
 * main - prints the size of each data type
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char charType;
	int intType;
	long int longInt;
	long long int long2Int;
	float floatType;
	printf("Size of a char: %zu byte(s)", sizeof(charType));
	printf("Size of an int: %zu byte(s)", sizeof(intType));
	printf("Size of a long int: %zu byte(s)", sizeof(longInt));
	printf("Size of a long long int: %zu byte(s)", sizeof(long2Int));
	printf("Size of a float: %zu byte(s)", sizeof(floatType));

