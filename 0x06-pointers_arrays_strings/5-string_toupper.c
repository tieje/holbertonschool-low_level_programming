/**
 * string_toupper - converts lowercase letters in string to uppercase
 * @s: some kind of string
 * Return: pointer to a char
 */

char *string_toupper(char *s)
{
	int x = 0;

	while (s[x] != '\0')
	{
		if (s[x] >= 'a' && s[x] <= 'z')
		{
			s[x] = s[x] - 32;
		}
		x++;
	}
	return (s);
}
