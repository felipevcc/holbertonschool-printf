#include "main.h"

/**
 * func_d - add a value to buff
 * @buff: str var
 * @count: index counter
 * @value: value in the index
 * Return: int
 */

int func_d(char *buff, int count, va_list value)
{
	int base = 10;
	char *str = _itoa(va_arg(value, int), base);

	return (_assign(buff, count, str));
}

/**
 * func_i - add a integer to buff
 * @buff: str var
 * @count: index counter
 * @value: value in the index
 * Return: int
 */

int func_i(char *buff, int count, va_list value)
{
	int base = 10;
	char *str = _itoa(va_arg(value, int), base);

	return (_assign(buff, count, str));
}

/**
 * func_u - add a unsigned integer to buff
 * @buff: str var
 * @count: index counter
 * @value: value in the index
 * Return: int
 */

int func_u(char *buff, int count, va_list value)
{
	int base = 10;
	unsigned int integer;
	char *str;

	integer = va_arg(value, unsigned int);
	str = _utoa(integer, base);

	return (_assign(buff, count, str));
}

/**
 * func_o - add a octal to buff
 * @buff: str var
 * @count: index counter
 * @value: value in the index
 * Return: int
 */

int func_o(char *buff, int count, va_list value)
{
	int base = 8;
	unsigned int integer;
	char *str;

	integer = va_arg(value, unsigned int);
	str = _utoa(integer, base);

	return (_assign(buff, count, str));
}

/**
 * func_x - add a unsigned hexadecimal to buff
 * @buff: str var
 * @count: index counter
 * @value: value in the index
 * Return: int
 */

int func_x(char *buff, int count, va_list value)
{
	int base = 16;
	unsigned int integer;
	char *str;

	integer = va_arg(value, unsigned int);
	str = _lcutoa(integer, base);

	return (_assign(buff, count, str));
}

/**
 * func_X - add a unsigned hexadecimal to buff
 * @buff: str var
 * @count: index counter
 * @value: value in the index
 * Return: int
 */

int func_X(char *buff, int count, va_list value)
{
	int base = 16;
	unsigned int integer;
	char *str;

	integer = va_arg(value, unsigned int);
	str = _utoa(integer, base);

	return (_assign(buff, count, str));
}

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
		write(1, "\0\0", 2);
		free(buff);
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
	char *str = va_arg(value, char *);

	if (!str)
		str = "(null)";
	return (_assign(buff, count, str));
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

/**
 * func_b - add a binary to buff
 * @buff: str var
 * @count: index counter
 * @value: value in the index
 * Return: int
 */

int func_b(char *buff, int count, va_list value)
{
	int base = 2;
	unsigned int integer;
	char *str;

	integer = va_arg(value, unsigned int);
	str = _utoa(integer, base);

	return (_assign(buff, count, str));
}

/**
 * func_r - add a reversed string to buff
 * @buff: str var
 * @count: index counter
 * @value: value in the index
 * Return: int
 */

int func_r(char *buff, int count, va_list value)
{
	char *str = va_arg(value, char *);
	char *rev_str = malloc(_strlen(str) + 1);

	_strcpy(rev_str, str);
	_rev_ptr(rev_str);

	count = _assign(buff, count, rev_str);
	free(rev_str);

	return (count);
}

/**
 * func_R -  add a converted string in rot13 to buff
 * @buff: str var
 * @count: index counter
 * @value: value in the index
 * Return: int
 */

int func_R(char *buff, int count, va_list value)
{
	char *str = va_arg(value, char *);
	char *encoded_str = malloc(_strlen(str) + 1);

	_strcpy(encoded_str, str);
	_rot13(encoded_str);

	count = _assign(buff, count, encoded_str);
	free(encoded_str);

	return (count);
}

