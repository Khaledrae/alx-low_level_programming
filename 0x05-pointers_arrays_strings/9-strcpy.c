#include "main.h"
/**
 **_strcpy - main point
 *@src: string to copy
 *@dest: destination
 *
 *Return: a pointer
 */
char *_strcpy(char *dest, char *src)
{
int i;
i = 0;
while  (src[i])
{
dest[i] = src[i];
i++;
}
return (dest);
}
