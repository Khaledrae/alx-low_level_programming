#include "main.h"
/**
 *more_numbers - Prints Numbers from '0-9'
 */
void more_numbers(void)
{
int i, j;
for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 14; j++)
{
if (j > 9)
{
_putchar('0' + (j / 10);
}
_putchar('0' + (j % 10));
}
putchar('\n');
}
}
