#include<stdio.h>
/**
 * main - Prints letters in Smal then caps boy
 *
 * Return: 0 Always(Success)
 */
int main(void)
{
char smallz = 'a';
char biggz = 'A';
while (biggz <= 'Z')
{
putchar(smallz);
putchar(biggz);
smallz++;
biggz++;
}
putchar('\n');

return (0);
}
