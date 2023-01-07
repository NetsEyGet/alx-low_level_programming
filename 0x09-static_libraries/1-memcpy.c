#include "main.h"

/**
 * _memcpy - is used to copy char from  src to dest
 *
 * @dest: is a value to be filled by src
 *
 * @src: is used to to fill dest
 *
 * @n: is the size to be filled
 *
 * Return: a pointer to the memory area dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
dest[i] = src[i];
return (dest);
}
