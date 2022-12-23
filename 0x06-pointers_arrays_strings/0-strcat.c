#include "main.h"

/**
 * _strcat - a function that concatenates two strings
 * @dest: copy to
 * @src: copy from
 *
 * Return: two concat strings
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
