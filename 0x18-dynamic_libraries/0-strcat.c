#include "main.h"
/**
 * _strcat - is used to concatinate an string
 *
 * @dest: is an argument
 *
 * @str: is the second argument
 *
 * Return: catarray
*/
char *_strcat(char *dest, char *str)
{
int i, j;

i = 0;
j = 0;

while (dest[i] != '\0')
{
i++;
}

while (str[j] != '\0')
{
dest[i + j] = str[j];
j++;
}
dest[i + j] = '\0';

return (dest);
}
