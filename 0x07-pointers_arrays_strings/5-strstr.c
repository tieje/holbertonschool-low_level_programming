/**
 * _strstr - locates substring
 * @haystack: string
 * @needle: substring
 * Return: point to beginning
 */
char *_strstr(char *haystack, char *needle)
{
	int x;
	int y;
	int d = 0;
	int needlelen;

	for (needlelen = 0; needle[needlelen] != '\0'; needlelen++)
	{
		continue;
	}
	for (x = 0; haystack[x]; x++)
	{
		if (haystack[x] == needle[0])
		{
			y = x;
			while (s[y] == needle[d] && needle[d] != '\0')
			{
				y++;
				d++;
			}
		}
	}
	if (d == needlelen)
	{
		return (needle);
	}
	return (NULL);
}
