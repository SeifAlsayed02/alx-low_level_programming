#include "main.h"
/**
 * *_strpbrk - Entry point
 * @s: The poniter of type char
 * @accept: The poniter of type char
 *
 * Return: None.
 */
char *_strpbrk(char *s, char *accept)
{
	char *flag = NULL;

	while (*s)
	{
		while (*accept)
		{
			if (*s == *accept)
			{
				flag = s;
				break;
			}
			accept++;
		}
		s++;
		if (flag != NULL)
			break;
	}
	return (flag);

}
