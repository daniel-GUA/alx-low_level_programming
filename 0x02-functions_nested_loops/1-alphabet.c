#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase,
 * followed by a new linne.
 * Always return 0
*/

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
/**
 * Main - Entry point for main.c
 * Description - prints alphabets in owercase
 * Always return 0
*/
