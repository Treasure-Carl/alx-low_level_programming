#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - function print_to_98
 * print_digit - print any integer using _putchar
 * Description: a function on print_to_98
 * @n: integer to be displayed
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		for  (; n <= 98; n++)
		{
			if (n == 98)
			{
				printf("%d", n);
				printf("\n");
				break;
			}
			else
			{
				printf("%d, ", n);
			}
		}
	}
	else
	{
		for (; n >= 98; n--)
		{
			if (n == 98)
			{
				printf("%d", n);
				printf("\n");
				break;
			}
			else
			{
				printf("%d, ", n);
			}
		}
	}

}
