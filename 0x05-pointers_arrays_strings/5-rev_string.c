#include "holberton.h"
#include <stdio.h>
/**
 * rev_string - reverse string
 * @s: string to reverse
 * Return: None
 */

/**
 * ret_strlen - return strlen
 * @a: string to lenth
 * Return: string length
 */

int ret_strlen(char *a)
{
	int counter = 0;

	while (*(a + counter))
	{
		counter++;
	}
	return (counter-1);
}


void rev_string(char *s)
{
	int x;
	int s_len;
	int temp = 0;

	for (s_len = 0; s[s_len] != 0; s_len++);
	for (x = 0; x < s_len/2; x++)
	{
		temp = s[x];
		/*printf("temp is now %c\n", temp);
		 *printf("s[x] was %c\n", s[x]);*/
		s[x] = s[s_len - 1 - x];
		/*printf("s[x] is now %c\n", s[x]);
		 *printf("s[s_len-1-x] was %c\n", s[s_len]);*/
		s[s_len - 1 - x] = temp;
		/*printf("s[s_len-1-x] is now %c\n", s[s_len]);*/
	}
}
