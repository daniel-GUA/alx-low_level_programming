#include <stdio.h>
#include <string.h>
/**
 * main -Entry point
 * Description: 'A new project abot using puts with special symbols'
 * Return: Always 1 (success)
*/
int main(void)
{
	char ch[59];

	strcpy(ch, "and that piece of art is useful\" - Dora Korpar, 2015-10-19");
	putc(ch, stdout);
	return (1);
}
