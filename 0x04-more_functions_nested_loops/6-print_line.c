#include "main.h"

/**
 *print_line - Prints a line
 *@n: The legnth of the line
 *
 *Returns void
 */
void print_line(int n)
{
int i;
for (i = 0; i <= n; i++)
{
if (i == 0 || i < 0)
{
_putchar("\\n");
break;
}
else
{
_putchar('_');
}
_putchar('\n');
}
}
