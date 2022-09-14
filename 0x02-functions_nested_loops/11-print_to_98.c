#include "main.h"



/**
 *  print_digit - print any integer using _putchar
 *
 * @n: integer to be displayed
 */

void print_digit(int n)
{

		if (n < 0)

		{
			_putchar('-');
			n = n * -1;

		}

		if (n / 10)

		{
			print_digit(n / 10);

		}

		_putchar(n % 10 + '0');

}
/**
 * print_to_98 - print all natural number from n to 98
 * @n: starting natural number
 */



void print_to_98(int n)
{
	while (n != 98)

	{
		print_digit(n);
		_putchar(',');
		_putchar(' ');

		if (n < 9)
			n++;

		else
			n--;

	}
	print_digit(n);
	_putchar('\n');

}
