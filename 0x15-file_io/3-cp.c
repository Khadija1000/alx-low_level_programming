#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - function that Allocate 1024 bytes for a buffer.
 * @file: The name of the file
 * Return: A pointer
 */
char *create_buffer(char *file)
{
	char *B;

	B = malloc(sizeof(char) * 1024);

	if (B == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (B);
}

/**
 * close_file - a function that Closes file descriptors.
 * @fd: The file
 */
void close_file(int fd)
{
	int A;

	A = close(fd);

	if (A == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - program that copies the content of a file to another file.
 * @argc: number of arguments
 * @argv: An array of pointers.
 * Return: 0 if success.
 *
 * Description: If the argument count is incorrect - exit code 97.
 * If file_from not exist or can't be read - exit code 98.
 * If file_to can't be created or written to - exit code 99.
 * If file_to or file_from can't be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
	int AF, AT, AR, AW;
	char *AB;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	AB = create_buffer(argv[2]);
	AF = open(argv[1], O_RDONLY);
	AR = read(AF, AB, 1024);
	AT = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (AF == -1 || AR == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(AB);
			exit(98);
		}

		AW = write(AT, AB, AR);
		if (AT == -1 || AW == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(AB);
			exit(99);
		}

		AR = read(AF, AB, 1024);
		AT = open(argv[2], O_WRONLY | O_APPEND);

	} while (AR > 0);

	free(AB);
	close_file(AF);
	close_file(AT);

	return (0);
}

