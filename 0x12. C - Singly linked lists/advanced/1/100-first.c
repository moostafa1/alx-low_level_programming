#include <stdio.h>


void before_main(void)__attribute__((constructor));
void after_main(void)__attribute__((destructor));



/**
 * before_main - prints text before main function executes using constructor
 *
 * Return: void
 */
void before_main()
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}



/**
 * before_main - prints text before main function executes using constructor
 *
 * Return: void
 */
void after_main()
{
	printf("\n......DONE.........\n");
}



/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    printf("(A tortoise, having pretty good sense of a hare's nature, challenges one to a race.)\n");
    return (0);
}





#include "lists.h"


/**
 * before_main - prints text before the execution of main function using
 *              constructor.
 *
 * Return: void
 */
void before_main(void)
{
        printf("You're beat! and yet, you must allow,");
        printf("\nI bore my house upon my back!\n");
}
