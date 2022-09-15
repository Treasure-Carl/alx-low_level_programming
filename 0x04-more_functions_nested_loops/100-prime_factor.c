#include <stdio.h>


/**
 * main - program entry
 *
 * Return: on sucess 0,
 */

int main(void)
{
	long int n = 612852475143;
	int i = 2;

	while (i <= n / 2)
	{
		if (n % i == 0)
		{
			n = n / i;
			i = 2;
			continue;

		}
		i++;
	}
	printf("%ld\n", n);
	return (0);

}
