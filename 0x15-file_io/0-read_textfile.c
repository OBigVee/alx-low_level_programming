#include "main.h"

/**
 * read_textfile - functions read a text file and prints it to the POSIX stdout
 * @letters: is the number of letters it should read and print
 * @filename: text content to be read
 * Return: the actual number of letters it could read and print
 * if the file can not be opened or read, return 0
 * if 'filename' is NULL return 0
 * if 'write' fails or does not write the expected amount of bytes, return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{

	int fd;
	char *buf;
	ssize_t byteRead;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		return (0);
	}

	buf = (char *)malloc((letters + 1) * sizeof(char));

	if (buf == NULL)
	{
		close(fd);
		return (0);
	}

	byteRead = read(fd, buf, letters);

	if (byteRead <= 0)
	{
		free(buf);
		close(fd);
		return (0);
	}

	buf[byteRead] = '\0';
	printf("%s", buf);

	free(buf);
	close(fd);

	return (byteRead);
}
