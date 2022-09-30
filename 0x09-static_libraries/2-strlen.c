#include "main.h"

/**
  * _strlen - calculates the length of string
  * @s: argument
  *
  * Return: length of string
  */

int _strlen(char *s)
{
	int i, len;

	i = 0;
	len = 0;

	while (s[i])
	{
		len += 1;
		i++;
	}

	return (len);
}

