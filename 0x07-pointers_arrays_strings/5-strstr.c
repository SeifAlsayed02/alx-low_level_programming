/**
 * *_strstr - Entry point
 * @haystack: The poniter of type char
 * @needle: The poniter of type char
 *
 * Return: None.
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, length;
	char *flag = NULL;

	i = 0;

	while (needle[i] != '\0')
		i++;
	length = i;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		k = i;
		for (j = 0; needle[j] != '\0' && haystack[i] == needle[j]; j++)
		{
			if (haystack[i] == needle[j])
				i++;
			else
			{
				i = k;
				break;
			}
	
		}

		if (j == length)
		{
			flag = (haystack + i - length);
			break;
		}
	}

	return (flag);
}
