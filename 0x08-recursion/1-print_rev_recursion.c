#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse
 * @n: string
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void _print_rev_recursion(char *n)
{
if (*n != '\0')
{
_print_rev_recursion(n + 1);
_putchar(*n);
}
}
