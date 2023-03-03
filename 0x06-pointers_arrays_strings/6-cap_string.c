#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: pointer to the string
 *
 * Return: pointer to the string
 */
char *cap_string(char *str)
{
	int i = 0;
	char separators[] = {',', ';', '.', '!', '?', '"', '(', ')', '{', '}',
						'\n', ' ', '\t'};

	for (; str[i] != '\0'; i++)
	{
		int j = 0;

		for (; j < sizeof(separators); j++)
		{
			if (str[i] >= 97 && str[i] <= 122)
			{
				if (i == 0 || str[i - 1] == separators[j])
				{
					str[i] -= 32;
				}
			}
		}
	}
	return (str);
}
