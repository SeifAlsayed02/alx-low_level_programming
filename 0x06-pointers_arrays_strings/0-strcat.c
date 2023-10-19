#include "main.h"
/**
 * *_strcat - Entry point
 * @src: The poniter of type char
 * @dest: The poniter of type char
 *
 * Return: None.
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
		i++;
	i--;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);

}
