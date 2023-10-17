#include "main.h"
/**
 *puts2 - prints characters skipping one from a string pointer
 *@str: the string to print
 *
 */
void puts2(char *str)
{
int index, l;
index = 0;
l = 0;
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
