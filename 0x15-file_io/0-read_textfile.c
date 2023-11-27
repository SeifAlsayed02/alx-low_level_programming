#include "main.h"
/**
 * read_textfile - unction that reads a text file and
 * prints it to the POSIX standard output.
 * @filename: file name
 * @letters: number of letters to be printed
 *
 * Return: None.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file, flag;
	char buf[1];
	ssize_t count = 0;

	if (filename == NULL)
		return (count);
	file = open(filename, O_RDONLY);
	if (file == -1)
		return (count);

	flag = read(file, buf, 1);
	while (flag > 0 && count < letters)
	{
		count += write(STDOUT_FILENO, buf, 1);
		flag = read(file, buf, 1);
	}
	close(file);
	return (count);

}
