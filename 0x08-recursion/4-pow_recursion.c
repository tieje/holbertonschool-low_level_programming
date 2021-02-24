/**
 * _pow_recursion - return value of x raised to power of y
 * @x: integer to raise
 * @y: integer to raise by
 * Return: power of integer
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	if (y > 0)
	{
		return ( x * _pow_recursion(x, y - 1));
	}
	return (-1);
}
