#include "main.h"

/**
 * _strlen - String length
 * @s: Str var
 * Return: Int
 */

int _strlen(char *s)
{
	int count = 0;

	while (s[count] != '\0')
		count++;
	return (count);
}

/**
 * *_reverse - Reverses the content of an array of integers
 * @s: Array
 * @n: Number of elements of the array
 * Return: char *
 */

char *_reverse(char *s, int n)
{
	int i, aux;

	n--;

	for (i = 0; i <= n; i++, n--)
	{
		aux = s[i];
		s[i] = s[n];
		s[n] = aux;
	}

	return (s);
}
