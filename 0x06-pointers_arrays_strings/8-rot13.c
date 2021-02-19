/**
 * rot13 - translating characters to rot13
 * @s: some string
 * Return: rot string
 */

char *rot13(char *s)
{
	int x;
	int y;
	char alpha[90] = "NMOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZ\
nmopqrstuvwxyzabcdefghijklmnopqrstuvwxyz";

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; alpha[y] != '\0'; y++)
		{
			if (s[x] == alpha[y])
			{
				s[x] = alpha[y + 13];
				break;
			}
		}
	}
	return (s);
}
