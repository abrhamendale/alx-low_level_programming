#include "main.h"

/**
 * create_file - Outputs the contents of a text file
 *
 * @filename: The text file name
 * @text_content: Content of the file
 *
 * Return: 1 (SUCCESS)
 */
int create_file(const char *filename, char *text_content)
{
	int fd, Wbytes;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREATE | O_TRUNC | O_WRONLY, 0600);
	if (fd == -1)
		return (-1);
	if (*text_content == NULL)
		*text_content = "";
	Wbytes = write(fd, text_content, strlen(text_content));
	if (Wbytes == -1)
		return (-1);
	close(fd);
	return (1);
}
