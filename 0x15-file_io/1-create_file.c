#include "main.h"
/**
 * create_file - function that creates a file.
 * @filename: file name
 * @text_content: a NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int file = -1;

	if (filename == NULL)
		return (file);

	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (file == -1)
		return (-1);

	if (text_content == NULL)
		return (-1);

	write(file, text_content, strlen(text_content));

	return (1);

}
