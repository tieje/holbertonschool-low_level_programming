#define NULL 0
/**
 * _strpbrk - finds some strings
 * @s: string
 * @accept: string to search
 * Return: pointer to the byte in s that matches one byte in accept
 */

char *_strpbrk(char *s, char *accept)
{
	int x;
	int y;

	for (x = 0; s[x]; x++)
	{
		for (y = 0; accept[y] != '\0'; y++)
		{
			if (accept[y] == s[x])
			{
				return (&s[x]);
			}
		}
	}
	return (NULL);
}
