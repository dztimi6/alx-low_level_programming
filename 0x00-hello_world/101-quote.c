#include <stdio.h>
#include <unistd.h>

/**
 * main - Print out the last part of a quote in the standard error.
 *
 * Return 1 if success
 */
int main(void)
{
	write(2, "and that piece of art is useful - Dora Korpar, 2015-10-09\n", 61);
	return (1);
}
