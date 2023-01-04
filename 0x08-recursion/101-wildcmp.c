#include "main.h"

/**
 * wildcmp - compares two strings and returns 1 if the strings
 * can be considered identical, otherwise return 0.
 * @s1: string to compare to
 * @s2: string with wild character
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int wildcmp(char *n1, char *n2)
{
if (*n1 == '\0' && *n2 == '\0')
return (1);

if (*n1 == *n2)
return (wildcmp(n1 + 1, n2 + 1));

if (*n2 == '*')
{
if (*n2 == '*' && *(n2 + 1) != '\0' && *n1 == '\0')
return (0);
if (wildcmp(n1, n2 + 1) || wildcmp(n1 + 1, n2))
return (1);
										}
return (0);
}
