/**
 * rot13 - translating characters to rot13
 * @s: some string
 * Return: rot string
 */
#include <stdio.h>
char *rot13(char *s)
{
	int x;
	int y;
	char a[26][4] = {
		{'A', 'a', 'n', 'N'}, {66, 98, 'o', 'O'}, {67, 99, 'p', 'P'},
		{68, 100, 'q', 'Q'}, {69, 101, 'r', 'R'}, {70, 102, 's', 'S'},
		{71, 103, 't', 'T'}, {72, 104, 'u', 'U'}, {73, 105, 'v', 'V'},
		{74, 106, 'w', 'W'}, {75, 107, 'x', 'X'}, {76, 108, 'y', 'Y'},
		{77, 109, 'z', 'Z'}, {78, 110, 'a', 'A'}, {79, 111, 'b', 'B'},
		{80, 112, 'c', 'C'}, {81, 113, 'd', 'D'}, {82, 114, 'e', 'E'},
		{83, 115, 'f', 'F'}, {84, 116, 'g', 'G'}, {85, 117, 'h', 'H'},
		{86, 118, 'i', 'I'}, {87, 119, 'j', 'J'}, {88, 120, 'k', 'K'},
		{89, 121, 'l', 'L'}, {90, 122, 'm', 'M'}
	};
	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; y < 26; y++)
		{
			if (s[x] == a[y][0])
			{
				/*printf("s[x] was %c\n", s[x]);*/
				/*printf("a[y][0] is %c\n", a[y][0]);*/
				s[x] = a[y][3];
				/*printf("s[x] is now %c\n", s[x]);*/
				break;
			}
			else if (s[x] == a[y][1])
			{
				/*printf("s[x] was %c\n", s[x]);*/
				/*printf("a[y][0] is %c\n", a[y][1]);*/
				s[x] = a[y][2];
				/*printf("s[x] is now %c\n", s[x]);*/
				break;
			}
		}
	}
	return (s);
}