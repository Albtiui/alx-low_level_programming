#include "main.h"
/**
 * get_endianness - checks if a machine is little or big endian
 * Return: 0 for the big, 1 for the little
 */
int get_endianness(void)
{
unsigned int i = 1;
char *c = (char *) &i;
return (*c);
}