/**
 * _strlen_recursion - return the length of string
 * @s: string
 * Return: integer
 */
int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
