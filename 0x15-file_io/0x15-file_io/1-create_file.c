#include "main.h"

/**
 * create_file - creates a file
 * @filename: receives char string as filename parameter.
 * @text_content: receives strings of content to be
 * written in the existing file.
 * Return: 1 if it success. -1 if it fails.
 */
int create_file(const char *filename, char *text_content)
{
	int file_desc;
	int num_letters;
	int read_write;

	if (!filename)
		return (-1);

	file_desc = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file_desc == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (num_letters = 0; text_content[num_letters]; num_letters++)
		;

	read_write = write(file_desc, text_content, num_letters);

	if (read_write == -1)
		return (-1);

	close(file_desc);

	return (1);
}
