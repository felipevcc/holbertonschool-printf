#include "main.h"

void (*check_prtr(char format))(char **, int, va_list)
{
	int j = 0;

	ptr_ch arg_ptr[] = {
		{"%", func_ptg},	
		{NULL, NULL}
	};
	
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

/**
 * _printf - print function
 * @format: str
 * Return: integer
 */

int _printf(const char *format, ...)
{
	char *buff;
	int  i = 0, aux = 0;
	va_list arg_value;
	void (*func)(char **, int, va_list);

	if (!format)
		exit(1);
	
	buff = malloc(4000);
	if (!buff)
		exit(1);

	va_start(arg_value, format);

	while (format[i])
	{
		printf("%c\n", format[i]);
		if (format[i] != '%')
			if (aux > 0)
				buff[i - aux] = format[i];
			else
				buff[i] = format[i];
		else
		{
			printf("Entró\n");
			func = check_prtr(format[i + 1]);
			if (!func)
			{
				printf("exit");
				exit(1);
			}
			func(&buff, i, arg_value);
			printf("%c\n", buff[i + 2]);
			aux++;
			i++;	
		}
		i++;
	}
	write(1, buff, strlen(buff));
	va_end(arg_value);
	free(buff);
	return (strlen(buff));

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
}
