#include "main.h"


/**
 * print_most_numbers - prints 0 - 9 followed by a new line
 * does not print 2 and 4
 * @c: character to be checked
 * Return: void
*/

void print_most_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		if (!(c == '2' || c == '4'))
			_putchar(c);
	}
	_putchar('\n');
}
