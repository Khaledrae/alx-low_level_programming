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
_putchar('0' + j);
}
putchar('\n');
}
}
