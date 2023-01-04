#include "main.h"

/**
 * _puts_recursion - Prints a string followed by a new line
 * @n: string
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
*/
void _puts_recursion(char *n)
{
if (*n == 0)
{
_putchar('\n');
return;
										}
_putchar(*n);
_puts_recursion(n + 1);
}
