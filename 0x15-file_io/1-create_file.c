#include "main.h"


/**
 * _strlen - length of string
 * @s: input string
 *
 * Return: length
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s++)
		len++;
	return (len);
}




/**
 * create_file - creates a file
 * @filename: name of the file
 * @text_content: NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fo = 0, fw = 0, len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		len = _strlen(text_content);
	}

	fo = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	fw = write(fo, text_content, len);

	if (fo == -1 || fw == -1)
		return (-1);

	close(fo);
	return (1);
}
