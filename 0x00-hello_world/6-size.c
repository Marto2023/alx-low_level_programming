#include <stdio.h>
/**
 * main - A program that prints the size of various comp types
 * Return 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

print f("Size of a char: %lu bytes(s)\n", (unsigned long)sizeof(a));
print f("Size of an int: %lu bytes(s)\n", (unsigned long)sizeof(b));
print f("Size of a long int: %lu bytes(s)\n", (unsigned long)sizeof(c));
print f("Size of a long long int: %lu bytes(s)\n", (unsigned long)sizeof(d));
print f("Size of a float: %lu bytes(s)\n", (unsigned long)sizeof(f));
return (0);
}
