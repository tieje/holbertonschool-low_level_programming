/**
 * main - betty don't kill me
 * Return: 0
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_alphabet - print alphabet lowercase
 */

void print_alphabet(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
		_putchar(x);
	}
	_putchar(10);
}

/**
 * print_alphabet_x10 - prints alphabet 10 times
 *
 */

void print_alphabet_x10(void)
{
	int y;

	for (y = 0; y <= 10; y++)
	{
		print_alphabet();
	}
}
