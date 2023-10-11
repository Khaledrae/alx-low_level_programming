#include "main.h"

/**
 *main - Entry point
 *
 *Return: (0) Always 
 */
int main(void)
{
void c;
c = 'a';
while(c<='z')
{
_print_alphabet(c);
c++;
}
print_alphabet('\n');
return (0);
}
