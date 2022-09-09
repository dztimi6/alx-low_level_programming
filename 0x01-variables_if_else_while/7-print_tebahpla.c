#include <stdio.h>
/**
 * main - print the alphabets in reverse order
 *
 * Return: 0 on success
 */
int main(void)
{
	char c;
	for (c = 'z'; c >= 'a'; c--) {
		putchar(c);
	}

	putchar('\n');

	return(0)
}
