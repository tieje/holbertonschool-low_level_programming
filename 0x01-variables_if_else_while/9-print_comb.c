#include <stdio.h>
/**
 * main - betty don't kill me
 * Return: 0
 */
int main(void)
{
	int x;

	for (x = '0'; x <= '9'; x++)
	{
		putchar(x);
		if (x == 9)
		{
			continue;
		}
		else
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar(10);
	return (0);
}
