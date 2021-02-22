#define NULL 0
/**
 * _strspn - gets the lenght of a prefix substring
 * @s: string
 * @accept: prefix
 * Return: number of bytes in the initial segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int x;
	unsigned int y;
	int acceptlen;
	int m = 0;

	for (acceptlen = 0; accept[acceptlen] != '\0'; acceptlen++)
	{
		continue;
	}
	for (x = 0; accept[x] != '\0'; x++)
	{
		for (y = 0; s[y] != '\0'; y++)
		{
			if (s[y] == accept[x])
			{
				m++;
				break;
			}
		}
	}
	if (m == acceptlen)
	{
		return (m + 1);
	}
	return (NULL);
}
