#include "main.h"
#include <stdio.h>

/**
 *  print_digit - print any integer using _putchar
 *
 * @n: integer to be displayed
 */

int main(void)
{
	int n;

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
				printf("%d,  ", n);
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
	
	return 0;
}
