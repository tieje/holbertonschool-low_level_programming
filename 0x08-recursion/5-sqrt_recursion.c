/**
 * sqrt - helper
 * @k: integer
 * Return: square
 */

int sqrthelper(int k, int i)
{
	if (i == k / 2)
	{
		return(-1);
	}
	if (i * i == k)
	{
		return (i);
	}
	return (sqrthelper(k, i + 1));
}

/**
 * _sqrt_recursion - return the square root of a number
 * @n: integer
 * Return: square root of n
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	if (n > 0)
	{
		return (sqrthelper(n, 1));
	}
	return (-1);
}
