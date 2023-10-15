#include "main.h"
/**
 *print_triangle - entry point
 *@size: The size of the triangle
 *
 *Return: void
 */
void print_triangle(int size)
{
int w, h;
/* Going Down */
if (size <= 0)
{
_putchar('\n');
return;
}
for (w = 1; w <= size; w++)
{
/* Sideways */
for (h = 1; h <= size - w; h++)
{
_putchar(' ');
}
for (h = 1; h <= w; h++)
{
_putchar('#');
}
_putchar('\n');
}
}
