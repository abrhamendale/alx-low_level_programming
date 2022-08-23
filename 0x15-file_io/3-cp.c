#include "main.h"

/**
 * main - copies content from one file to another
 *
 * @argc: Number of arguments
 * @argv: Vector of arguments
 *
 * Return: Nothing
 */
int  main(int argc, char *argv[])
{
	int f_fd = 0, t_fd = 0;
	ssize_t rcount;
	char buffer[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n")
			, exit(97);
	f_fd = open(argv[1], O_RDONLY);
	if (f_fd == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n"
				, argv[1]), exit(98);
	t_fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC
			, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (t_fd == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	while ((rcount = read(f_fd, buffer, 1024)) > 0)
	{
		if (write(t_fd, buffer, rcount) != rcount)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n"
					, argv[2]), exit(99);
	}
	if (rcount == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n"
				, argv[1]), exit(98);
	f_fd = close(f_fd);
	t_fd = close(t_fd);
	if (f_fd)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f_fd)
			, exit(100);
	if (t_fd)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f_fd), exit(100);
	return (EXIT_SUCCESS);
}
