/**
 * _isdigit - checks for digit
 * @digit: gonna be a digit
 * Return: integer
 */

int _isdigit(char digit)
{
	if (digit >= '0' && digit <= '9')
	{
		return (1);
	}
	return (0);
}
