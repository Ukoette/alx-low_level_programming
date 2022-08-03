#include <stdio.h>
#include <stdlib.h>


#define ABS(x) ((x) < 0 ? -(x) : (x))

int main(void)
{
	int i;
	int j;

	i = ABS(6);
	j = ABS(-5);

	printf("%d, %d\n", i, j);
	return (0);
}

