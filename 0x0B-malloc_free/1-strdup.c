#include <stdlib.h>
/**
 * _strdup - return a point to newly allocated space
 * @str: some string
 * Return: return a pointer
 */
char *_strdup(char *str)
{
	int slen;
	int i;
	char *a;

	if (str == NULL)
	{
		return (NULL);
	}
	for (slen = 0; str[slen]; slen++)
	{
		continue;
	}
	a = malloc((slen * sizeof(char)) + 1);
	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= slen; i++)
	{
		a[i] = str[i];
	}
	a[slen] = '\0';
	return (a);
}
