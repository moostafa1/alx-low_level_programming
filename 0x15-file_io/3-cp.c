#include "main.h"



/**
 * _strlen - gets the length of a string
 * @s: input string
 *
 * Return: length of the string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s++)
		len++;
	return (len);
}






/**
 * file_data - gives the string inside of the file
 * @file: input file name
 *
 * Return: string in the file
 */
char *file_data(char *file)
{
	FILE *fp;
	char *buffer;
	char c;
	unsigned int counter = 0, i = 0;

	fp = fopen(file, "r");
	if (!file || !fp)
	{
		fprintf(stderr, "Error: Can't read from file %s\n", file);
		exit(98);
	}
	for (c = getc(fp); c != EOF; c = getc(fp))
		counter++;

	buffer = malloc(counter + 1);
	if (!buffer)
	{
		fclose(fp);
		return (NULL);
	}

	fseek(fp, 0, SEEK_SET); /* Reset file pointer to the file beginning */

	for (c = getc(fp); c != EOF; c = getc(fp))
	{
		*(buffer + i) = c;
		i++;
	}

	buffer[counter] = '\0';
	fclose(fp);
	return (buffer);
}




/**
 * main - copy conternt of first file to the second one
 * @argc: number of given command line arguments
 * @argv: command line arguments
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	char *buf;
	int f2 = 0, w2 = 0;

	if (argc != 3)
	{
		fprintf(stderr, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buf = file_data(argv[1]);

	if (!buf)
	{
		fprintf(stderr, "Error: Memory allocation failed\n");
		exit(99);
	}

	f2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (f2 == -1)
	{
		fprintf(stderr, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	w2 = write(f2, buf, _strlen(buf));
	if (w2 == -1)
	{
		fprintf(stderr, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	close(f2);
	free(buf);
	return (0);
}
