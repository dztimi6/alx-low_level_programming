#include <stdio.h>
/**
 * main - prints the alphabet in reverse.
 *
 * Retur: 0 on success
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
		putchar(letter);

	putchar('\n');

	return(0);
}
