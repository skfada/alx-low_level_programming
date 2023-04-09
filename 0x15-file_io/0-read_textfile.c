#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: receives char string for filename as parameter.
 * @letters: receives size_t type for numbers of letters printed.
 * as a parameter.
 * Return: numbers of letters printed. It fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_desc;
	ssize_t num_read, num_write;
	char *buffer;

	if (!filename)
		return (0);

	file_desc = open(filename, O_RDONLY);

	if (file_desc == -1)
		return (0);

	buffer = malloc(sizeof(char) * (letters));
	if (!buffer)
		return (0);

	num_read = read(file_desc, buffer, letters);
	num_write = write(STDOUT_FILENO, buffer, num_read);

	close(file_desc);

	free(buffer);

	return (num_write);
}
