/**
 * _strlen - Entry point
 * @s: The poniter of type char
 *
 * Return: None.
 */
int _strlen(char *s)
{
	int i = 0;

	while  (s[i] != '\0')
	{
		i++;
	}
	return (i);

}
