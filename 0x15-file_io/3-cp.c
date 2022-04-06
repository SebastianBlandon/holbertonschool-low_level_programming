#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#define MAXSIZE 1024
#define SFERROR STDERR_FILENO
#define MODE (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)

/**
 * main - copies the content of a file to another file.
 * @ac: int amount of arguments to pass
 * @av: char double pointer contains the arguments input
 * Return: differents states
 */
int main(int ac, char **av)
{
	int fd_from, fd_to, from_read_close, to_write_close;
	char buffer[MAXSIZE];

	if (ac != 3)
		dprintf(SFERROR, "Usage: cp file_from file_to\n"), exit(97);
	fd_from = open(av[1], O_RDONLY);
	if (fd_from == -1)
		dprintf(SFERROR, "Error: Can't read from file %s\n", av[1]), exit(98);
	fd_to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, MODE);
	if (fd_to == -1)
		dprintf(SFERROR, "Error: Can't write to %s\n", av[2]), exit(99);
	do {
		from_read_close = read(fd_from, buffer, MAXSIZE);
		if (from_read_close == -1)
		{
			dprintf(SFERROR, "Error: Can't read from file %s\n", av[1]);
			exit(98);
		}
		if (from_read_close > 0)
		{
			to_write_close = write(fd_to, buffer, (ssize_t) from_read_close);
			if (to_write_close == -1)
			{
				dprintf(SFERROR, "Error: Can't write to %s\n", av[2]);
				exit(99);
			}
		}
	} while (from_read_close > 0);
	from_read_close = close(fd_from);
	if (from_read_close == -1)
		dprintf(SFERROR, "Error: Can't close fd %d\n", fd_from), exit(100);
	to_write_close = close(fd_to);
	if (to_write_close == -1)
		dprintf(SFERROR, "Error: Can't close fd %d\n", fd_to), exit(100);
	return (0);
}
