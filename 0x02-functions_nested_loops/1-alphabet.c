#include "main.h"
/**
 * print_alphabet - function that prints the alphabet, in lowercase
 * @c: print alphabets in lowercase
 *
 * Return: 0
 */

void print_alphabet(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		_putchar('a');
		a++;
	}

	_putchar('\n');
}
