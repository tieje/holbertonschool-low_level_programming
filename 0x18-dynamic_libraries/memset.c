/**
 * _memset - fills first n bytes of memory area
 * @s: string
 * @b: input
 * @n: bytes to replace
 * Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		s[x] = b;
	}
	return (s);
}
