#include "main.h"


/**
 * read_textfile - eads a text file and prints it to the POSIX standard output
 * @filename: name of the file
 * @letters: number of letters to print
 *
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t op = 0, re = 0, wr = 0;

	if (filename == NULL)
		return (0);

	buf = malloc(letters + 1);
	op = open(filename, O_RDONLY);
	re = read(op, buf, letters);
	wr = write(STDOUT_FILENO, buf, re);

	if (buf == NULL || op == -1 || re == -1 || wr == -1)
	{
		free(buf);
		return (0);
	}
	free(buf);
	close(op);
	return (wr);
}
