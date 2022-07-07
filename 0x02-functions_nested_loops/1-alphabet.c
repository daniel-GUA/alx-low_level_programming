#include "main.h"
#include <stdio.h>
#include <time.h>
/**
 * main - Entry point
 * Description: print_alphabet - prints the alphabet in lowercase, followed by a new line.
 * Return Always 0
*/
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
	return (0);
}
