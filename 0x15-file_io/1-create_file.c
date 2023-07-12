#include "main.h"


/**
 * create_file - creates a file
 * @filename: name of the file
 * @text_content: NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int file = 0, r = 0, w = 0;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_WRONLY);



}
