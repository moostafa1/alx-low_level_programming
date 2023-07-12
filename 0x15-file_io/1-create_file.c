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
	int fo = 0, fw = 0;

	if (filename == NULL)
		return (-1);

	fo = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	fw = write(fo, text_content, sizeof(text_content));

	if (fo == -1 || fw == -1)
		return (-1);

	close(fo);

	return (1);
}
