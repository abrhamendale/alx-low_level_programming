#include "main.h"

/**
 * read_textfile - Outputs the contents of a text file
 *
 * @filename: The text file name
 * @letters: Number of letters to read
 *
 * Return: Actual number of letters read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t Rbytes, Wbytes;
	char buff[1024 * 8];

	if (filename == NULL || letters == 0)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	Rbytes = read(fd, &buff[0], letters);
	Wbytes = write(STDOUT_FILENO, &buff[0], Rbytes);
	close(fd);
	return (Wbytes);
}
