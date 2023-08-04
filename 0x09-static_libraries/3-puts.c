#include "main.h"

/**
 * _puts - Program prints a string to stdout.
 * @str: the string to be otinted.
 * _putchar prints a new line
 */
void _puts(char *str)
{
while (*str)
_putchar(*str++)
_putchar('\n');
}
