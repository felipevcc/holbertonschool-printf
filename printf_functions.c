#include "main.h"
/*
void func_d(char *buff, int count, va_list value)
{
	*buff[index] = itoa(va_arg(value, int));
}

void func_i(char *buff, int count, va_list value)
{
	asdf
}

void func_u(char *buff, int count, va_list value)
{
	asdf
}

void func_o(char *buff, int count, va_list value)
{
	asdf
}

void func_x(char *buff, int count, va_list value)
{
	asdf
}

void func_X(char *buff, int count, va_list value)
{
	asdf
}
*/

int func_c(char *buff, int count, va_list value)
{
	buff[0] = va_arg(value, int);
	return (count + 1);
}

int func_s(char *buff, int count, va_list value)
{
	return (_assign(buff, count, va_arg(value, char *)));
}
/*
void func_p(char *buff, int count, va_list value)
{
	asdf
}

void func_ptg(char *buff, int count, va_list value)
{
	asdf
}

void func_r(char *buff, int count, va_list value)
{
	asdf
}
*/
int func_ptg(char *buff, int count, va_list value)
{
	(void)value;
	buff[0] = '%';
	return (count + 1);
}
