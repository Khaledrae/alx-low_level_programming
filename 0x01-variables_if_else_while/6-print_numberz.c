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
int letter = 0;
while (letter < 10)
{
putchar('0' + letter);
letter++;
}
putchar('\n');
return (0);
}
