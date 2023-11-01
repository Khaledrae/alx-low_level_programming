#include "main.h"
/**
 *print_to_98 - Prints to 98 from a given number
 *@n: the set limit
 *Return: Void
 */
void print_to_98(int n)
{
int i;
if (n >= 98)
{
for (i = n; i > 98; i--)
{
printf("%d, ", i);
}
printf("%d\n", i);
}
else
{
for (i = n; i <= 98; i++)
{
printf("%d, ", i);
}
printf("%d\n", n);
}
}
