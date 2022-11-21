#include "main.h"

/**
 * _assing - assing and count function
 * @buff: str var
 * @count: index counter
 * @value: value in the index
 * Return: int
 */

int _assign(char *buff, int count, char *value)
{
	int i = 0;

	while (value[i])
	{
		buff[i] = value[i];
		count++;
		i++;
	}
	return (count);
}
