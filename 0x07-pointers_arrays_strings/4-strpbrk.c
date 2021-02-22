/**
 * _strpbrk
 * @s: string
 * @accept: string to search
 * Return: pointer to the byte in s that matches one byte in accept
 */

char *_strpbrk(char *s, char *accept)
{
	int x;
	int y;
	int d;
	int m = 0;
	char *b;

	for (x = 0; accept[x]; x++)
	{
		for (y = 0; s[y]; y++)
		{
			if (accept[x] == s[y])
			{
				d = y;
				while (s[d] != '\0')
				{
					b[m] = s[d];
					m++;
					d++;
				}
				return (d);
			}
		}
	}
	return (NULL);
}
