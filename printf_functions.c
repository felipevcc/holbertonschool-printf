#include "main.h"

/**
 * func_c - add a character to buff
 * @buff: str var
 * @count: index counter
 * @value: value in the index
 * Return: int
 */

int func_c(char *buff, int count, va_list value)
{
	int ch = va_arg(value, int);

	if (!ch)
	{
		write(1, "\0\n", 1);
		exit(0);
	}
	buff[0] = ch;
	return (count + 1);
}

/**
 * func_s - add a string to buff
 * @buff: str var
 * @count: index counter
 * @value: value in the index
 * Return: int
 */

int func_s(char *buff, int count, va_list value)
{
	return (_assign(buff, count, va_arg(value, char *)));
}

/**
 * func_ptg - add a '%' to buff
 * @buff: str var
 * @count: index counter
 * @value: value in the index
 * Return: int
 */

int func_ptg(char *buff, int count, va_list value)
{
	(void)value;
	buff[0] = '%';
	return (count + 1);
}
