#include "main.h"

/**
 * _strstr - finds the first occurrence of the substring needle in the string
 * haystack. The terminating null bytes (\0) are not compared
 * @haystack: string to search in
 * @needle: string to match with
 *
 * Return: Returns a pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int len_needle = 0;
	unsigned int index_h = 0;
	unsigned int index_n = 0;
	unsigned int cnt = 0;
	unsigned int i = 0;

	while (*(needle + len_needle) != '\0')
		len_needle++;

	while (*(haystack + i) != '\0')
	{
		unsigned int j = 0;

		while (*(needle + j) != '\0')
		{
			if (*(haystack + i) == *(needle + j))
			{
				cnt++;
				if (cnt == 1)
				{
					index_h = i;
					index_n = j;
				}
			}
			if (*(haystack + index_h + 1) != *(needle + index_n + 1))
			{
				cnt = 0;
			}
			j++;
		}
		if (cnt == len_needle && *(haystack + index_h + cnt - 1)
								== *(needle + index_n + cnt - 1))
		{
			return (haystack + index_h);
		}
		i++;
	}
	return ('\0');
}
