#include "main.h"
#include <fcntl.h>
#include <sys/stat.h>

#define BUFFER_SIZE 1024
/**
 * error_exit - error func
 * @exit_code: exits
 * @message: message
 * Return: void
 */
void error_exit(int exit_code, const char *message)
{
	dprintf(STDERR_FILENO, "%s\n", message);
	exit(exit_code);
}
/**
 * main - starts here
 * @argc: argumment count
 * @argv: arg vector
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
	const char *file_from = argv[1];
	const char *file_to = argv[2];
	int fd_from = open(file_from, O_RDONLY);
	char buffer[BUFFER_SIZE];
	ssize_t bytes_read, bytes_written;
	int fd_to = open(file_to, O_CREAT | O_WRONLY | O_TRUNC,
S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH)

		if (argc != 3)
			error_exit(97, "Usage: cp file_from file_to");
	if (fd_from == -1)
		error_exit(98, "Error: Can't read from file");
	if (fd_to == -1)
		error_exit(99, "Error: Can't write to file");
	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
		bytes_written = write(fd_to, buffer, bytes_read);
	if (bytes_written == -1)
		error_exit(99, "Error: Can't write to file");
	if (bytes_read == -1)
		error_exit(98, "Error: Can't read from file");
	if (close(fd_from) == -1)
		error_exit(100, "Error: Can't close fd");
	if (close(fd_to) == -1)
		error_exit(100, "Error: Can't close fd");
	return (0);
}

