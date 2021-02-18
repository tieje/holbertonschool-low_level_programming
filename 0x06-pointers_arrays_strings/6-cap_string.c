/**
 * cap_string - capitalizes the first letter of each word
 * @s: string
 * Return: capitlized word string
 */

char *cap_string(char *s)
{
	int x;
	int y;
	char sep[20] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '\"', '(', ')', '{', '}'};

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; sep[y] != '\0'; y++)
		{
			if (s[x] == sep[y])
			{
				if (s[x + 1] >= 'a' && s[x + 1] <= 'z')
				{
					s[x + 1] = s[x + 1] - 32;
				}
			}
		}
	}
	return (s);
}
