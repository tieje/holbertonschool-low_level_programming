/**
 * palinhelper - checks for palindrome recursively
 * @s: string
 * @b: beginning pointer
 * @e: end pointer
 * Return: 0 or 1
 */
int palinhelper(char *s, int b, int e)
{
	if (*(s + b) == *(s + e))
	{
		if (b >= e)
		{
			return (1);
		}
		return (palinhelper(s, b + 1, e - 1));
	}
	return (0);
}
/**
 * lenhelper - returns length of string
 * @s: string
 * Return: integer
 */
int lenhelper(char *s)
{
	if (*s++)
	{
		return (1 + lenhelper(s));
	}
	return (0);
}

/**
 * is_palindrome - check for palindrome
 * @s: some string
 * Return: some integer
 */
int is_palindrome(char *s)
{
	return (palinhelper(s, 0, lenhelper(s) - 1));
}
