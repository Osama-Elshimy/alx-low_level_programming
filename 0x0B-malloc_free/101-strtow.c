#include <ctype.h>
#include <stdlib.h>
#include <string.h>

/**
 * strtow - splits a string into words
 * @str: string to split
 * Description: splits a string into words, each element of the array should
 * contain a single word, null-termintated
 *
 * Return: NULL if str == NULL or str == "", otherwise
 * pointer to array of words
 */

char **strtow(char *str)
{
	char **words;
	int i, j = 0, k, letters, spaces = 0;
	int first_letter;

	if (str == NULL || *str == '\0')
		return (NULL);

	for (i = 0; str[i + 1] != '\0'; i++)
	{
		if (!isspace(str[i]) && isspace(str[i + 1]))
			spaces++;
	}

	words = malloc(sizeof(char *) * (spaces + 1));
	if (words == NULL)
		return (NULL);

	for (i = 0; i < spaces; i++)
	{
		for (; str[j + 1] != '\0'; j++)
		{
			if (isspace(str[j]) && !isspace(str[j + 1]))
			{
				first_letter = j + 1;
				letters = 0;
				while (!isspace(str[j + 1]))
				{
					letters++;
					j++;
				}
				break;
			}
		}

		words[i] = malloc(sizeof(char) * (letters + 1));
		if (words[i] == NULL)
		{
			for (k = 0; k < i; k++)
				free(words[k]);

			free(words);
			return (NULL);
		}

		for (k = first_letter; !isspace(str[k]); k++)
			words[i][k - first_letter] = str[k];

		words[i][k - first_letter] = '\0';
	}

	words[i] = NULL;
	return (words);
}
