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
return;
for (w = 1; w <= size; w++)
{
/* Sideways */
for (h = 1; h <= size - w; h++)
{
for (h = 1; h <= size; h++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
