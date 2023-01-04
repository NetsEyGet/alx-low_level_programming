#include "main.h"

/**
* factorial - gets factorial of a
* @a: integer
*
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
*/
int factorial(int a)
{
if (a < 0)
return (-1);
if (a == 0)
return (1);
return (a * factorial(a - 1));
}
