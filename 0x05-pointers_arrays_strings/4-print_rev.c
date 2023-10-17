#include "main.h"
/**
 *print_rev - prints a string from a pointer
 *@s: the string to print
 *
 */
void print_rev(char *s)
int l, index;
l= 0;
while (s[index++])
{
l++;
}
for (index = l - 1; index >= 0; index--)
{
_putchar(s);}
}
_putchar('\n');
}
