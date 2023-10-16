#include "main.h"
/**
 * *_strcpy - Entry point
 * @src: The poniter of type char
 * @dest: The poniter of type char
 *
 * Return: None.
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
