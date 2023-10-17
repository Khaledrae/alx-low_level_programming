#include "main.h"
/**
 *print_array - main entry point
 *@n: array
 *@a: number of elements
 *
 */
void print_array(int *a, int n)
{
int i, l;
while(*a)
{
l++;
}
for (i = 0; i < n; i++)
{
_putchar("%x", a[i]);
_putchar(',');
}
_putchar('\n');
}
