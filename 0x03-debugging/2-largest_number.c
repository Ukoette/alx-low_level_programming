#include "main.h" 

/**
 * largest_number - return the largest of 3 numbers 
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largst_number(int a, int b, int c)
{
	int largest;

	if (a > b && a > c)
	{
		largest = a;
	}
	else if ( a > b && c > a)
	{
		largest = c;
	}
	else (b > c)
	{
		largest = b;
	}else
	{
		largest = c;
	}

	return (largest);
}