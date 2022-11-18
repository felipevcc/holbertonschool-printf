#include "main.h"
/*
void func_d(char **buff, int index, va_list value)
{
	*buff[index] = itoa(va_arg(value, int));
}

void func_i(char **buff, int index, va_list value)
{
	asdf
}

void func_u(char **buff, int index, va_list value)
{
	asdf
}

void func_o(char **buff, int index, va_list value)
{
	asdf
}

void func_x(char **buff, int index, va_list value)
{
	asdf
}

void func_X(char **buff, int index, va_list value)
{
	asdf
}

void func_c(char **buff, int index, va_list value)
{
	asdf
}

void func_s(char **buff, int index, va_list value)
{
	asdf
}

void func_p(char **buff, int index, va_list value)
{
	asdf
}

void func_ptg(char **buff, int index, va_list value)
{
	asdf
}

void func_r(char **buff, int index, va_list value)
{
	asdf
}*/

int func_ptg(char *buff, int count, va_list value)
{	
	return (_assign(buff, count, va_arg(value, char *)));
}
