#include "main.h"

/**
 *print_alphabet_x10 - Entry point
 *
 *Return: void Always 
 */
void print_alphabet_x10(void)
{
for (i = 0; i < 10; i++)
{
char c;
c = 'a';
while (c <= 'z')
{
_putchar(c);
c++;
}
}
_putchar('\n');

}
