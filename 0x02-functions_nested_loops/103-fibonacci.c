#include <stdio.h>

/**
 * main - Finds and prints the sum of the even-valued terms
 * followed by a new line
 * Return: 0
 */

int main(void)
{
	int g;
	unsigned long int x, y, next, sum;

	x = 1;
	y = 2;
	sum = 0;

	for (g = 1; g <= 33; ++g)
	{
		if (x < 4000000 && (x % 2) == 0)
		{
			sum = sum + x;
		}
		next = x + y;
		x = y;
		y = next;
	}

	printf("%lu\n", sum);

	return (0);
}
