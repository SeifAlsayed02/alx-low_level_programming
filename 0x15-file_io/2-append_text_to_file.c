#include "main.h"
/**
 * append_text_to_file - function that appends text at the end of a file.
 * prints it to the POSIX standard output.
 * @filename: file name
 * @text_content: the NULL terminated string to add at the end of the file
 *
 * Return: 1 on success and -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int flag, file = -1;

	if (filename == NULL)
		return (file);
	file = open(filename, O_WRONLY | O_APPEND);

	if (file == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(file);
		return (1);
	}

	flag = write(file, text_content, strlen(text_content));

	if (flag != -1)
		flag = 1;

	close(file);
	return (flag);
}
