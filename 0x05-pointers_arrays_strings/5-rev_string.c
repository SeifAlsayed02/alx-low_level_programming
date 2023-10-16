/**
 * rev_string - Entry point
 * @s: The poniter of type char
 *
 * Return: None.
 */
void rev_string(char *s)
{
	int i = 0;
	int j = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	i--;

	char temp[i];

	while (i >= 0)
	{
		temp[j] = s[i];
		i--;
		j++;
	}

	s = temp;






}
