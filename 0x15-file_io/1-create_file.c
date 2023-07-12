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
	FILE *fptr;
	int flag = 0;

	if (filename == NULL)
		return (-1);

	fptr = fopen(filename, "rw");

	if (!fptr)
		return (-1);

	flag = fwrite(text_content, sizeof(text_content), sizeof(text_content), fptr);
	if (!flag)
		return (-1);
	fclose(fptr);

	return (1);
}
