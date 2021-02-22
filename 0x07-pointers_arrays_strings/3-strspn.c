/**
 * _strspn - gets the lenght of a prefix substring
 * @s: string
 * @accept: prefix
 * Return: number of bytes in the initial segment of s
 */

unsigned int _strspn( char *s, char *accept)
{
	unsigned int x;
	unsigned int y;

	for (x = 0; accept[x] != '\0'; x++)
	{
		for (y = 0; s[y] != '\0'; y++)
		{
			if (s[y] == accept[x])
			{
				return (y);
			}
		}
	}
	return (NULL);
}
