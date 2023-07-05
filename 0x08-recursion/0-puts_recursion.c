#include "main.h"
/**
 * here I will try to solve task NO.0
 * Wish me good luck :D
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
