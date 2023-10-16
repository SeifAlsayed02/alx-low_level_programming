/**
 * swap_int - Entry point
 * @a: The poniter of type int
 * @b: The poniter of type int
 *
 * Return: None.
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;


}
