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
	char buf[READ_BUF_SIZE * 8];

	if (filename == NULL || letters == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	Rbytes = read(fd, &buf[0], letters);
	Wbytes = write(STDOUT_FILENO, &buf[0], Rbytes);
	close(fd);
	return (Wbytes);
}
