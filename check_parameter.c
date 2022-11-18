#include "main.h"

void (*check_prtr(char format))(char *, va_list)
{
	int j = 0;

	ptr_ch arg_ptr[] = {
		{"%", func_ptg},	
		{NULL, NULL}
	};

	/*
	ptr_ch arg_ptr[] = {
		{"d", func_d},
		{"i", func_i},
		{"u", func_u},
		{"o", func_o},
		{"x", func_x},
		{"X", func_X},
		{"c", func_c},
		{"s", func_s},
		{"p", func_p},
		{"%", func_ptg},
		{"r", func_r},
		{NULL, NULL}
	};
	*/
	
	while (arg_ptr[j].c)
	{
		if (format == *arg_ptr[j].c)
		{
			printf("Entro al condicional\n");
			break;
		}
		j++;
	}

	return (arg_ptr[j].f);
}
