#include <stdio.h>
/**
 * main - prints text
 *
 * Return: Always 1 (Success)
 */

int main(void
{
    char txt[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
    for(int i=0; i<sizeof(txt); i++)
	{
	    putchar(txt[i]);
	}
    return (1);
}
