#include "main.h"

/**
* _pow_recursion - raises a to the power of b
* @a: Number Integer
* @b: Power
*
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
*/
int _pow_recursion(int a, int b)
{
if (b < 0)
return (-1);
if (b == 0)
return (1);
return (a * _pow_recursion(a, b - 1));
}
