/* printing stuff */
#include <stdio.h>
#include <string.h>

int main(void)
{
char str[50];
int len;
strcpy(str, "Programming is like building a multilingual puzzle");
len = strlen(str);
puts (str);
return (0);
}
