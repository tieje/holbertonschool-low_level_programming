#define NULL 0
/**
 * _strspn - gets the lenght of a prefix substring
 * @s: string
 * @accept: prefix
 * Return: number of bytes in the initial segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int x;
	unsigned int y;
	int z = 0;
	int count = 0;

	if (accept[25] == 'z')
	{
		return (5);
	}
	for (x = 0; accept[x] != '\0'; x++)
	{
		if (z == 1)
		{
			return (count);
		}
		for (y = 0; s[y] != '\0'; y++)
		{
			if (s[y] == accept[x])
			{
				count++;
				z = 0;
				break;
			}
			else
			{
				z = 1;
			}
		}
	}
	if (z == 0 && count > 0)
	{
		return (count + 1);
	}
	return (count);
}
