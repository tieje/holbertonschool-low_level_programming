#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int k = 0;
	int s1len;
	int s2len;
	char *res;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (s1len = 0; s1[s1len]; s1len++)
		continue;
	for (s2len = 0; s2[s2len]; s2len++)
		continue;
	res = malloc((s1len + s2len) * sizeof(char) + 1);
	if (res != NULL)
		while (i <= s1len + s2len)
		{
			if (i < s1len)
				res[i] = s1[i];
			else if (i >= s1len)
			{
				res[i] = s2[k];
				k++;
			}
			i++;
		}
		return (res);
	return (NULL);
}
