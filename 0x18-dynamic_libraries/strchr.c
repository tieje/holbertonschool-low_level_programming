#define NULL 0
/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: character to find
 * Return: a pointer to the first occurrence of the character
 */

char *_strchr(char *s, char c)
{
	int x;

	for (x = 0; s[x] != '\0'; x++)
	{
		if (s[x] == c)
		{
			return (&s[x]);
		}
	}
	if (c == '\0')
	{
		return (&s[x]);
	}
	return (NULL);
}
