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
	char *bufferfer;

	if (!filename)
		return (0);

	file_desc = open(filename, O_RDONLY);

	if (file_desc == -1)
		return (0);

	bufferfer = malloc(sizeof(char) * (letters));
	if (!bufferfer)
		return (0);

	num_read = read(file_desc, bufferfer, letters);
	num_write = write(STDOUT_FILENO, bufferfer, num_read);

	close(file_desc);

	free(bufferfer);

	return (num_write);
}
