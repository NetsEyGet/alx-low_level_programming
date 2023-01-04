#include "main.h"

/**
* _strlen_recursion - Returns Length of String
* @x string
*
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
*/
int _strlen_recursion(char *x)
{
if (*x != '\0')
				{
return (1 + _strlen_recursion(x + 1));
}
return (0);
}
