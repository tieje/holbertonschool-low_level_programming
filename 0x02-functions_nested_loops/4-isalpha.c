/**
 * _isalpha(int c) - checks for alphabetic character
 * @variable: c
 * Return: some number
 */
int _isalpha(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
