/**
 * leet - prints leetcode
 * @s: string
 * Return: character array
 */

char *leet(char *s)
{
	int x;
	int y;
	char t[5][3] = {
		{'a', 'A', '4'},
		{'e', 'E', '3'},
		{'o', 'O', '0'},
		{'t', 'T', '7'},
		{'l', 'L', '1'}
	};

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; y < 5; y++)
		{
			if (s[x] == t[y][0] || s[x] == t[y][1])
			{
				s[x] = t[y][2];
			}
		}
	}
	return (s);
}
