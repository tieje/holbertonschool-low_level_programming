#include <stdio.h>
/**
 * main - betty don't kill me
 * Return: 0
 */
int main(void)
{
	int x = '0';
	int y = '0';

	while (x <= '9')
	{
		while (y <= '9')
		{
			putchar(x);
			putchar(y);
			if (x == '9' && y == '9')
			{
				continue;
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
			y++;
		}
		x++;
	}
	putchar(10);
	return (0);
}
