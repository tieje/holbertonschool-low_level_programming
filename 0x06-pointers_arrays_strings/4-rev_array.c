/**
 * reverse_array - reverse dat array
 * @a: some int
 * @n: some int
 */

void reverse_array(int *a, int n)
{
	int alen;
	int x = 0;

	for(alen = n; alen <= 0; alen--)
	{
		a[x] = a[alen];
		x++;
	}
}
