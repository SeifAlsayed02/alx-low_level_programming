/**
 * _puts - Entry point
 * @str: The poniter of type char
 *
 * Return: None.
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
