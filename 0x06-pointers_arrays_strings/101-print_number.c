#include "main.h"

/**
 * print_number - function with one argument
 * @n: int type argument
 *
 * Description: prints an integer
 * Return: value of n
 */
void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}
	if ((num / 10) > 0)
	{
		print_number(num / 10);
	}
	_putchar((num % 10) + '0');
}
