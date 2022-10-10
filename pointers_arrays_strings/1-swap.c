/**
 * swap_int - swaps the value of two integers
 * @a: first integer
 * @b: second integer
 * Return: Sum of both integers
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *b;
	*b = *a;
	*a = temp;
}
