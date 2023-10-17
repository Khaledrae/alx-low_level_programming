#include "main.h"
/**
 *rev_string - reverses a string from a pointer
 *@s: the string to print
 *
 */
void rev_string(char *s)
{
int index = 0, l = 0;
char a;
while (s[index++])
{
l++;
}
for (index = l - 1; index >= l / 2; index--)
{
a = s[index];
s[index] = s[l - index - 1];
s[l - index - 1] = a;
}
}
