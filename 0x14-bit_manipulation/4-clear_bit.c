#include "main.h"
/**
 * clear_bit - sets the value of a given bits to 0
 * @n: pointer to the numbers to change
 * @index: index of the bits to clear
 *
 * Return: 1 for success, -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
return (-1);
*n = (~(1UL << index) & *n);
return (1);
}
