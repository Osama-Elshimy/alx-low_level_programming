#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @letters: number of letters it should read and print
 * @filename: name of the file
 *
 * Return: the actual number of letters it could read and print
 * if the file can not be opened or read, return 0
 * if filename is NULL return 0
 * if write fails or does not write the expected amount of bytes, return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *file;
	char *buffer;
	ssize_t read_bytes, write_result;

	if (filename == NULL)
		return (0);

	file = fopen(filename, "r");
	if (file == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		fclose(file);
		return (0);
	}

	read_bytes = fread(buffer, 1, letters, file);
	if (read_bytes <= 0)
	{
		free(buffer);
		fclose(file);
		return (0);
	}

	write_result = write(STDOUT_FILENO, buffer, read_bytes);

	free(buffer);
	fclose(file);

	return ((write_result == read_bytes) ? read_bytes : 0);
}
