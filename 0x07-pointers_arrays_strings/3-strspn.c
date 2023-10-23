#include "main.h"
/**
 * *_strspn - Entry point
 * @s: The poniter of type char
 * @accept: The poniter of type char
 *
 * Return: None.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int back = 0;
	unsigned int count = 0;
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		back = count;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				++count;
			}
		}
		if (back == count)
			break;
	}

	return (count);
}
