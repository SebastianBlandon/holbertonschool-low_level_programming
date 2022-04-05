#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: const char pointer input
 * @text_content: char pointer input
 * Return: 1 on success, -1 on failure
 *  if the file can not be opened or read, return 0
 *  if filename is NULL return 0
 *  if write fails or does not write the expected amount of bytes, return 0
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, count;
	ssize_t size;

	if (!filename)
		return (-1);

	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (count = 0; text_content[count] != '\0'; count++)
			;
		size = write(fd, text_content, count);
		if (size == -1)
			return (-1);
	}

	close(fd);
	return (1);
}
