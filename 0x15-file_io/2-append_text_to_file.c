#include "main.h"

/**
 * append_text_to_file - Outputs the contents of a text file
 *
 * @filename: The text file name
 * @text_content: Content to add to the file
 *
 * Return: 1 (SUCCESS)
 */
int append_text_to_file(const char *filename, char *text_content);
{
	int fd, Wbytes;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_APPEND | O_WRONLY, 0600);
	if (fd == -1)
		return (-1);
	Wbytes = write(fd, text_content, strlen(text_content));
	if (Wbytes == -1)
		return (-1);
	close(fd);
	return (1);
}
