#include "main.h"
/**
 *puts_half - prints half characters from a string
 *@str: the string to print
 *
 */
void puts_half(char *str)
{
int index, l, n;
while (str[index])
{
index++;
l++;
}
if (l % 2 == 0)
{
n = l / 2;
}
else
{
n = (l + 1) / 2;
}
for (index = n; index < l; index++)
{
_putchar(str[index]);
}
_putchar('\n');
}
