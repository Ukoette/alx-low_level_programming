#include "main.h"

/**
 * print_binary - prints the binary representation
 * of a number.
 * @n: unsigned long int.
 *
 * Return: no return.
 */
void print_binary(unsigned longint n)
{
	if (n >> 1)
	{
		prin_binary(n >> 1);
	_putchar(n & 1) + '0');
	}
	else
	{
		_putchar('0');
	}
}
