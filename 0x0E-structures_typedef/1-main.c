#include <stdio.h>
#include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	struct dog my_dog;

	init_dog(&my_dog, "Poppy", 3.5, "Bob");
	init_dog(NULL, "Ghost", 4.75, "Jon Snow");
	return (0);
}
