/**
 * primacy - checks for prime number
 * @k: integer
 * @i: comparative integer
 * Return: 1 or 0
 */
int primacy(int k, int i)
{
	if (k == i)
	{
		return (1);
	}
	if (k % i == 0)
	{
		return (0);
	}
	return (primacy(k, i + 1));
}

/**
 * is_prime_number - return 1 if input is a prime number
 * @n: integer input
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
	if (n == 1 || n == 0)
	{
		return (0);
	}
	if (n < 0)
	{
		return (0);
	}
	return (primacy(n, 2));
}
