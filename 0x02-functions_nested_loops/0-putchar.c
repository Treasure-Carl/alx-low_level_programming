#include "main.h"
#include <stdio.h>



/**
 * main - write a random function using _putchar
 *
 * Return: 0
 */
int main(void)

{

		char *holberton = "_Putcharr";

		while (*holberton)
		{

		_putchar(*holberton);
		holberton++;

		}
		_putchar('\n');

		return (0);

}
