#include "main.h"
/**
 * print_last digit - Prints the last digit of a number
 * @n: the int to extract the last digit from
 * Return: Value of the last digit
 */

int print_last_digit(int n)
{

	int l;

	l = n % 10
	if (l < 0)
	{
		_putchar(-l + 48);
		return (-l);
	}
	else
	{
		_purchar(l + 48);
		return (l);
	}
}
