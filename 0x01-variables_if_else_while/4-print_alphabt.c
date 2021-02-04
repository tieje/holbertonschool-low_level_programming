/**
 * main - something
 * Return: 0
 */
#include <stdio.h>
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == 'q')
		{
			continue;
		}
		else if (ch == 'e')
		{
			continue;
		}
		else
		{
			putchar(ch);
		}
	}
	putchar(10);
	return (0);
}
