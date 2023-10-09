/* To print all small letters */
#include<stdio.h>
#include <stdlib.h>
/**
 * main - Entry Point
 *
 * Return: 0 Always (Success)
 */
int main(void)
{
char letter = 'a';
while (letter <= 'z' && letter != 'q' && letter != 'e')
{
putchar(letter);
letter++;
}
putchar('\n');

return (0);
}
