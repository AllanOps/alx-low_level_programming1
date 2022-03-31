#include "main.h"

/**
 * _puts_recursion - Prints a string and follows up with a new line
 * @s: String
 * 
 * Return: On success 1.
 * On error, -1 is returned, and err no is set appropriately.
 */

void _puts_recursion(char s*s)
{
	if (*s == 0)
{
			_putchar('\n');
			return;
		}
	_putchar(*s);
	_puts_recursion(s + 1);
}
