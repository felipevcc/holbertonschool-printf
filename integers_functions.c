#include "main.h"

/**
* _atoi - Function that modifies the data type from 'char' to 'int'
* @str: String
* Return: Integer
*/

int _atoi(char *str)
{
	int i = 0;
	int result = 0;

	if (*str == '-')
		i = 1;

	for (; str[i] != '\0'; i++)
		result = result * 10 + str[i] - '0';

	if (*str == '-')
    	return (-result);
	return (result);
}
