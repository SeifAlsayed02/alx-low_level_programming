#include "main.h"
/**
 * *string_nconcat - Entry point
 * @s1: pointer of char
 * @s2:pointer of char
 * @n: size of s2
 *
 * Return: None.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i;
	unsigned int j = 0;
	unsigned int size1 = 0;
	unsigned int size2 = 0;
	unsigned int num;

	num = n;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		size1++;

	for (i = 0; s2[i] != '\0'; i++)
		size2++;


	if (n >= size2)
		num = size2;
	ptr = malloc(size1 + n + 1);

	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < size1; i++)
		ptr[i] = s1[i];

	for (; i < (size1 + num); i++)
	{
		ptr[i] = s2[j];
		j++;
	}
	return (ptr);


}
