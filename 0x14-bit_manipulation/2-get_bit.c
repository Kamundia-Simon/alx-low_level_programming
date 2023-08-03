#include "main.h"

/**
  *get_bit - returns value of a bitat a given index
  *@n: bit
  *@index: position of value
  *Return: value bit of index/-1
  */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	if ((n & (1 << index)) == 0)
		return (0);
	return (1);
}
