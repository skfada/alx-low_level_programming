#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: accept char string as filename for parameter.
 * @text_content: accept char string to add content.
 *
 * Return: 1 if the file exists. -1 if the fails does not exist
 * or if it fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_desc;
	int num_letters;
	int read_write;

	if (!filename)
		return (-1);

	file_desc = open(filename, O_WRONLY | O_APPEND);

	if (file_desc == -1)
		return (-1);

	if (text_content)
	{
		for (num_letters = 0; text_content[num_letters]; num_letters++)
			;

		read_write = write(file_desc, text_content, num_letters);

		if (read_write == -1)
			return (-1);
	}

	close(file_desc);

	return (1);
}
