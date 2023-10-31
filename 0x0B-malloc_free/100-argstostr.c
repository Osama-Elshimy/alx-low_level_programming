#include <stdlib.h>
#include <string.h>

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: argument count
 * @av: argument vector
 *
 * Return: a pointer to the concatenated string, or NULL on failure
 * or if ac == 0 or av == NULL
 */

char *argstostr(int ac, char **av)
{
	int i, len = 1;
	char *concat_str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		len += strlen(av[i]) + 1;

	concat_str = malloc(sizeof(char) * (len));
	if (concat_str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		strcat(concat_str, av[i]);
		strcat(concat_str, "\n");
	}

	return (concat_str);
}
