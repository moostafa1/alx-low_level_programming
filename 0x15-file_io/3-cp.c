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
	if (!file)
	{
		fprintf(stderr, "Error: Can't read from file %s\n", file);
		exit(98);
	}
	for (c = getc(fp); c != EOF; c = getc(fp))
		counter++;

	buffer = malloc(counter + 1);
	buffer[_strlen(buffer)] = '\0';
	if (!buffer)
		return (NULL);

	for (c = getc(fp); c != EOF; c = getc(fp))
	{
		*(buffer + i) = c;
		i++;
	}
	fclose(fp);
	if (!fclose(fp))
	{
		fprintf(stderr, "Error: Can't close fd %d\n", fileno(fp));
		exit(100);
	}
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

	f2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0600);
	w2 = write(f2, buf, _strlen(buf));
	if (f2 == -1 || w2 == -1)
	{
		fprintf(stderr, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	close(f2);
	if (close(f2) == -1)
	{
		fprintf(stderr, "Error: Can't close fd %d\n", f2);
		exit(100);
	}

	return (0);
}
