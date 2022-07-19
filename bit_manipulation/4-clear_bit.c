#include "main.h"

/**
 * clear_bit - Counts the number of bits needed to be
 *             flipped to get from one number to another.
 * @n: The number.
 * @index: The number to flip n to.
 * Return: The necessary number of bits to flip to get from n to m.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
