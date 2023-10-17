#include "main.h"
/**
 *_puts - prints characters from a string followed by a new line from a pointer
 *@str: the string to print
 *
 */
void puts2(char *str)
{
int index, l;
while (str[index++])
{
l++;
}
for (index = 0; index < l; index += 2)
{
_putchar(str[index]);
}
_putchar('\n');
}
