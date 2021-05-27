/**
 * _memcpy - copies a memory area
 * @dest: dest
 * @src: source
 * @n: some integer
 * Return: copy memory
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		dest[x] = src[x];
	}
	return (dest);
}
