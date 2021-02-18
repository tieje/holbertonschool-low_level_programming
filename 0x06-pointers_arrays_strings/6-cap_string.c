int isletter(char t)
{
	if ((t >= 'A' && t <= 'Z') || (t >= 'a' && t <= 'z'))
	{
		return (0);
	}
	return (1);
}

/**
 * cap_string - capitalizes the first letter of each word
 * @s: string
 * Return: capitlized word string
 */

char *cap_string(char *s)
{
	int x;

	for (x = 0; s[x] != '\0'; x++)
	{
		if (isletter(s[x]) == 1 && isletter(s[x + 1]) == 0)
		{
			if (s[x + 1] >= 'a' && s[x + 1] <= 'z')
			{
				s[x + 1] = s[x + 1] - 32;
			}
		}
	}
	return (s);
}
