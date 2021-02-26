/**
 * wildhelper - compare string
 * @w: string1
 * @x: string2
 * @y: string length 1
 * @z: string length 2
 * @b1: beginning index of string 1
 * @b2: beginning index of string 2
 * Return: 0 or 1
 */
int wildhelper(char *w, char *x, int y, int z, int b1, int b2)
{
	if (b1 == y)
	{
		return (1);
	}
	if (x[b2] == '*')
	{
		if (x[b2 + 1] == '*' || x[b2 + 1] == w[b1 + 1])
		{
			/* this is not the correct solution */
			/* recurse for * to get correct solution*/
			/* This means you'll need another helper function*/
			return (wildhelper(w, x, y, z, b1 + 1, b2 + 1));
		}
		return (wildhelper(w, x, y, z, b1 + 1, b2));
	}
	if (w[b1] == x[b2])
	{
		return (wildhelper(w, x, y, z, b1 + 1, b2 + 1));
	}
	return (0);
}
/**
 * slen - string length
 * @a: first string
 * Return: length
 */
int slen(char *a)
{
	if (*a++)
	{
		return (1 + slen(a));
	}
	return (0);
}
/**
 * wildcmp - compare two strings
 * @s1: first string
 * @s2: comparable string
 * Return: 0 or 1
 */
int wildcmp(char *s1, char *s2)
{
	return (wildhelper(s1, s2, slen(s1) - 1, slen(s2) - 1, 0, 0));
}
