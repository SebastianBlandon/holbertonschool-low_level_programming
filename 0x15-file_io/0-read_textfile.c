#include "main.h"

/**
 * read_textfile - reads a text file and prints it
 *  to the POSIX standard output.
 * @filename: const char pointer input
 * @letters: size_t input
 * Return: the actual number of letters it could read and print
 *  if the file can not be opened or read, return 0
 *  if filename is NULL return 0
 *  if write fails or does not write the expected amount of bytes, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t size;
	char buffer[1024];

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	size = read(fd, buffer, letters);
	buffer[letters] = '\0';

	close(fd);
	printf("%s\n", buffer);
	return (size);
}
