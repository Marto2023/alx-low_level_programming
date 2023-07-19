#include "main.h"

/**
 * print_last digit - Prints the last digi of a number
 * @n: the number to be treated
 * Return: Value of the last digit of number
 */

int print_last_digit(int n)

{

	int a;

	if (n < 0)
	n = -n;
	a = n % 10;
	if (a < 0)
	a = -a;
	_putchar(a + '0');
	return (a);
}
