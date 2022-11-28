#include "main.h"

/**
 * *check_prtr - parameter checker
 * @specifier: str var
 * Return: int
 */

int (*check_prtr(char specifier))(char *, int, va_list)
{
	int j = 0;

	ptr_ch arg_ptr[] = {
		{"d", func_d},
		{"i", func_i},
		{"u", func_u},
		{"o", func_o},
		{"x", func_x},
		{"X", func_X},
		{"c", func_c},
		{"s", func_s},
		{"%", func_ptg},
		{"b", func_b},
		{"r", func_r},
		{"R", func_R},
		{NULL, NULL}
	};

	while (arg_ptr[j].c)
	{
		if (specifier == *arg_ptr[j].c)
			break;
		j++;
	}

	return (arg_ptr[j].f);
}
