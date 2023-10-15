#include "main.h"
/**
 *print_square - Prints a square based on given param\
 *@size: size of the square
 */
void print_square(int size)
{
int i, j;
if (size <= 0)
return;
/* height */
for (i = 0; i < size; i++)
{
/* Width */
for (j = 0; j < size; j++)
{
_putchar('#');
if (i == size - 1)
{
continue;
}
}
_putchar('\n');
}
}
