#include "holberton.h"

/**
 * rev_string - reverse string
 * @s: string to reverse
 * Return: None
 */

void rev_string(char *s)
{
	int x;
	int s_len;
	int temp = 0;

	for (s_len = 0; s[s_len] != 0; s_len++)
	{
		continue;
	}

	for (x = 0; x < s_len / 2; x++)
	{
		temp = s[x];
		/*printf("temp is now %c\n", temp);*/
		/*printf("s[x] was %c\n", s[x]);*/
		s[x] = s[s_len - 1 - x];
		/*printf("s[x] is now %c\n", s[x]);*/
		/*printf("s[s_len-1-x] was %c\n", s[s_len]);*/
		s[s_len - 1 - x] = temp;
		/*printf("s[s_len-1-x] is now %c\n", s[s_len]);*/
	}
}
