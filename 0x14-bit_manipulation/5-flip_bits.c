#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to
 *  flip to get from one number to another.
 * @n: The number passed by pointer
 * @m: The number to flip n to
 *
 * Return: The necessary number of bits to flip to get from n to n.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m, bits = 0;

	while (xor > 0)
	{
		bits += (xor & 1);
		xor >>= 1;
	}

	return (bits);
}

