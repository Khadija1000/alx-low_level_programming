#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - function that reads a text file and prints it
 * to the POSIX standard output. 
 * @filename: text
 * @letters: A number
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *D;
	ssize_t A;
	ssize_t B;
	ssize_t C;

	A = open(filename, O_RDONLY);
	if (A == -1)
		return (0);
	D = malloc(sizeof(char) * letters);
	C = read(A, D, letters);
	B = write(STDOUT_FILENO, D, C);

	free(D);
	close(A);
	return (b);
}
