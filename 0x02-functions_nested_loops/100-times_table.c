#include <stdio.h>



/**
 * main - program execution entry point
 * Description - print the sum of all multipliers of 3 or 5 below 1024
 *
 * Return: Always 0 on success
 */



int main(void)
{

		int i;
		int sum = 0;

		for (i = 0; i < 1024; i++)
		{

			if ((i % 3 == 0) || (i % 5 == 0))
				sum += i;

		}
		printf("%d\n", sum);

		return (0);

}
