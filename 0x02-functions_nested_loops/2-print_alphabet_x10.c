#include "main.h"

/**
 * print_alphabe - print alphabet 10 times
 * return: 0
 */

void print_alphabet_x10(void)
{
	int ten;
	char c;

	for (ten = 0; ten <= 9; ten++)
	{
		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);
		_putchar('\n');
	}
}
