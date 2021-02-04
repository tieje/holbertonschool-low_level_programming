/**
 * main - printing
 * Return: 0
 */
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdio.h>
int main(void)
{
	int n;
	char inttype[9];

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n == 0)
	{
		strcpy(inttype, "zero");
	}
	else if (n > 0)
	{
		strcpy(inttype, "positive");
	}
	else
	{
		strcpy(inttype, "negative");
	}
	printf("%d is %s\n", n, inttype);
	return (0);
}
