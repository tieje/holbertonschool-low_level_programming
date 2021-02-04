/**
 * main - somethin
 * Return: 0
 */

#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;
	char lgt[20];
	char zero[20];
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	last_digit = n % 10;
	if (n > 5)
	{
		strcpy(lgt, " and greater than 5");
		strcpy(zero, "");
	}
	else if (n < 6)
	{
		if (n == 0)
		{
			strcpy(zero, " and is 0");
		}
		else
		{
			strcpy(lgt, " and less than 6");
			strcpy(zero, " and not 0");
		}
	}
	printf("Last digit of %d is %d%s%s\n", n, last_digit, lgt, zero);
	return (0);
}
