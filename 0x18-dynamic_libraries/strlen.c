/**
 * _strlen - return length of string
 * @s: string
 * Return: length of string
 */

int _strlen(char *s)
{
	int counter = 0;

	while (*(s + counter))
	{
		counter++;
	}
	return (counter);
}
