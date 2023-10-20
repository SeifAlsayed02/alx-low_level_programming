#include "main.h"
/**
 * *cap_string - Entry point
 * @c: The poniter of type char
 *
 * Return: None.
 */
char *cap_string(char *c)
{
	int i = 0;

	while (c[i] != '\0')
	{
		if (i == 0 && (c[i] >= 'a' && c[i] <= 'z'))
			c[i] -= 32;

		if (checker(c[i]) && (c[i + 1] >= 'a' && c[i + 1] <= 'z'))
			c[i + 1] -= 32;
		i++;
	}

	return (c);

}
/**
 * checker - Checker
 * @flag: Checker
 *
 * Return: None.
 */
int checker(char flag)
{
	int i;
	char seperators[13] = { ' ', '\t', '\n', ',', ';', '.', '!', '?',
		'"', '(', ')', '{', '}' };
	for (i = 0; i < 13; i++)
	{
		if (flag == seperators[i])
			return (1);
	}
	return (0);
}
