/**
 * reverse_array - reverse dat array of integers
 * @a: array
 * @n: length of array
 */

void reverse_array(int *a, int n)
{
	int end = n - 1;
	int temp;
	int x;

	for (x = 0; x < n / 2; x++)
	{
		temp = a[x];
		a[x] = a[end];
		a[end] = temp;
		end--;
	}
}
