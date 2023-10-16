/**
 * rev_string - Entry point
 * @s: The poniter of type char
 *
 * Return: None.
 */
void rev_string(char *s)
{
	int i = 0;
	int size;
	char temp;

	while (s[i] != '\0')
	{
		i++;
	}

	i--;
	size = i;
	i = 0;

	for (i = 0; i < (size / 2); i++)
	{
		temp = s[i];
		s[i] = s[size - i];
		s[size - i] = temp;
	}

}
