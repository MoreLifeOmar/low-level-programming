#include "main.h"
/**
 * _puts_recursion - function which print a string
 *@s: char
 *s: char
 * Return: 0
*/
void _puts_recursion(char *s)
{
if (*s == '\0')
{
_putchar('\n');
return;
}
else
{
_putchar(*s);
_puts_recursion(s + 1);
}
}
