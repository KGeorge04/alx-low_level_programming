#include <stdio.h>

/**
 * main - Prints the alphabet lowercase,and then in uppercase.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alpbt[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 52; i++)
	{
	putchar(alpbt[i]);
	}
	putchar('\n');
	return (0);
}
