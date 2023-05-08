#include "main.h"

/**
 * create_file - function that creates a file.
 * @filename: A pointer
 * @text_content: A pointer
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int AF, AW, AL = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (AL = 0; text_content[AL];)
			AL++;
	}

	AF = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	AW = write(AF, text_content, AL);

	if (AF == -1 || AW == -1)
		return (-1);

	close(AF);

	return (1);
}
