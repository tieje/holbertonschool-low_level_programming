#include <stdlib.h>
/**
 * string_nconcat - concat two strings
 * @s1: first string
 * @s2: second string
 * @n: memory?
 * Return: one string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0;
	unsigned int k = 0;
	unsigned int s1len;
	unsigned int s2len;
	char *res;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (s1len = 0; s1[s1len]; s1len++)
		continue;
	for (s2len = 0; s2[s2len]; s2len++)
		continue;
	if (n >= s2len)
		n = s2len;
	res = malloc((s1len + n) * sizeof(char));
	if (res == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < s1len; i++)
	{
		res[i] = s1[i];
	}
	for (; i < n + s1len; i++)
	{
		res[i] = s2[k];
		k++;
	}
	return (res);
}
