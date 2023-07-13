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
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: text to append
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fo = 0, fw = 0, len = 0;

	if (!filename)
		return (-1);
	if (text_content)
		len = _strlen(text_content);
	fo = open(filename, O_APPEND | O_WRONLY);
	fw = write(fo, text_content, len);

	if (fo == -1 || fw == -1)
		return (-1);
	close(fo);
	return (1);

}
