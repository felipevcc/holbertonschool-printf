#include "main.h"

/**
 * _printf - print function
 * @format: str
 * Return: integer
 */

int _printf(const char *format, ...)
{
	char *buff;
	int  i = 0, j = 0;

	ptr_ch arg_ptr[] = {
		{'d', f1},
		{'i', f2},
		{'u', f3},
		{'o', f4},
		{'x', f5},
		{'X', f6},
		{'c', f7},
		{'s', f8},
		{'p', f9},
		{'%', f10},
		{'r', f11}, /*crear funciones*/
	};

	va_list arg_value;

	if (!format)
		exit (1);
	
	buff = malloc(strlen(format) * sizeof(int));
	if (!buff)
		return (NULL);

	va_start(arg_value, format);

	while (format[i])
	{
		if (format[i] != '%')
			buff[i] = format[i];
		else
		{
			j = 0;
			while (arg_ptr[j])
			{
				if (format[i + 1] == arg_ptr[j].c)
				{
					buff[i] = arg_ptr[j].f; /*hacer que la funcion retorne, quitar ultima posicion de los parametros*/
					i++;
					break;
				}
				j++;
			}
		}
		i++;
	}
	write(stdout, buff, strlen(buff));
	va_end(arg_value);
	free(buff);
	return (strlen(buff));
}
