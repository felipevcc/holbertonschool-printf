#include "main.h"

/**
 * *check_prtr - parameter checker
 * @format: str var
 * Return: int
 */

int (*check_prtr(char format))(char *, int, va_list)
{
	int j = 0;

	ptr_ch arg_ptr[] = {
		{"c", func_c},
		{"s", func_s},
		{"%", func_ptg},
		{NULL, NULL}
	};

	while (arg_ptr[j].c)
	{
		if (format == *arg_ptr[j].c)
			break;
		j++;
	}

	return (arg_ptr[j].f);
}
