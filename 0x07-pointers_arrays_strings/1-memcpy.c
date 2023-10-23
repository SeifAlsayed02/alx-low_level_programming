/**
 * *_memcpy - copies memory area.
 * @dest: Pointer of type char
 * @src: Pointer of type char
 * @n: the number 
 *
 * Return: None.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
