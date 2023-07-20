#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * function - print_to_98
 * print_digit - print any integer using _putchar
 * Description: a function print_to_98 that prints positive intergers
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
