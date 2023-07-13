#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
    int res;

    if (ac != 3)
    {
        dprintf(2, "Usage: %s filename text\n", av[0]);
        exit(1);
    }
    res = create_file(av[1], av[2]);
    printf("-> %i)\n", res);
    res = create_file("_file_0", "Best School !");
    printf("-> %i)\n", res);
    res = create_file("_file_0", "Best School !");
    printf("-> %i)\n", res);
    create_file("_file_0", "Hello_World");
    printf("-> %i)\n", res);
    return (0);
}
