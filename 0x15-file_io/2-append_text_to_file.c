#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file.
 * @filename: A pointer
 * @text_content: A string
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int Ao, Aw, Alen = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (Alen = 0; text_content[Alen];)
			Alen++;
	}

	Ao = open(filename, O_WRONLY | O_APPEND);
	Aw = write(Ao, text_content, Alen);

	if (Ao == -1 || Aw == -1)
		return (-1);

	close(Ao);

	return (1);
}

