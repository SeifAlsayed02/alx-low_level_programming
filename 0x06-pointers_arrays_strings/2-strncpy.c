#include "main.h"
/**
 * *_strncpy - Entry point
 * @src: The poniter of type char
 * @dest: The poniter of type char
 * @n: Number
 *
 * Return: None.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j = 0;

	while (src[j] != '\0')
	{
		if (j >= n)
			break;
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}

	return (dest);

}
