/**
 * main - somethin
 * Return: 0
 */
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;
	char lgt[20];
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	last_digit = n % 10;
	if (last_digit > 5)
	{
		strcpy(lgt, " and is greater than 5");
	}
	else if (last_digit == 0)
	{
		strcpy(lgt, " and is 0");
	}
	else
	{
		strcpy(lgt, " and is less than 6 and not 0");
	}
	printf("Last digit of %d is %d%s\n", n, last_digit, lgt);
	return (0);
}
