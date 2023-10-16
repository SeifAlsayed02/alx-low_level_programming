/**
 * rev_string - Entry point
 * @s: The poniter of type char
 *
 * Return: None.
 */
void rev_string(char *s)
{
	int i = 0;
	int size ;

	while (s[i] != '\0')
	{
		i++;
	}

	i--;
	size = i;
	i = 0;

	for (i; i < (size / 2); i++)
	{
		s[i] = s[(size - i)];
	
	}

	







}
