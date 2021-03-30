#include "holberton.h"

/**
 * create_file - creates a file
 * @filename: the file
 * @text_content: the text
 *
 * Return: 1 if created`
 */
int create_file(const char *filename, char *text_content)
{
	int fd, i = 0, written, count = 0;

	if (filename == NULL)
		return (-1);
	if (!text_content)
		return (-1);

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	while (text_content[i])
	{
		i++;
		count++;
	}
	written = write(fd, text_content, count);
	if (written == -1)
		return (-1);

	close(fd);
	return (1);
}
