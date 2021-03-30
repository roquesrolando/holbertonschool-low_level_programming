#include "holberton.h"
/**
 * main - copy file to another file
 * @argc: count
 * @argv: vector
 *
 * Return:..
 */
int main(int argc, char *argv[])
{
	char buff[1024];
	int to, from, scan, written;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	from = open(argv[1], O_RDONLY);
	if (from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	scan = read(from, buff, 1024);
	close(from);
	if (from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", from);
		exit(100);
	}
	to = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read to %s\n", argv[2]);
		exit(98);
	}
	written = write(to, buff, scan);
	if (written == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	close(to);
	if (to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", to);
		exit(100);
	}
	return (0);
}
