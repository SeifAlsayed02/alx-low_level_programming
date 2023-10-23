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
	int i = 0;
	int flag;

	while (*s)
	{
		flag = 0;
		while (*accept)
		{
			if (*s == *accept)
				flag = 1;
			accept++;
		}
		if (flag == 0)
			return (i);
		s++;
		i++;
	}
	return (i);
}
