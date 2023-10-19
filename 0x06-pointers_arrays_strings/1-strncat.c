#include "main.h"
/**
 * *_strncat - Entry point
 * @src: The poniter of type char
 * @dest: The poniter of type char
 * @n: Number
 *
 * Return: None.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		if (j >= n)
			break;
		dest[i] = src[j];
		j++;
		i++;
	}
	return (dest);

}
