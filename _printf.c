#include "main.h"

/**
 * _printf - print function
 * @format: str
 * Return: integer
 */

int _printf(const char *format, ...)
{
	char *buff;
	int  i = 0, count = 0;
	va_list arg_value;
	int (*func)(char *, int, va_list);

	buff = malloc(4000);
	if ((!format || !buff) || (format[0] == '%' && format[1] == '\0'))
	{
		free(buff);
		exit(1);
	}

	va_start(arg_value, format);

	while (format[i])
	{
		if (format[i] != '%')
		{
			buff[count] = format[i];
			count++;
		}
		else
		{
			func = check_prtr(format[i + 1]);
			if (!func)
			{
				buff[count] = '%';
				i++;
				count++;
				continue;
			}
			count = func(&buff[count], count, arg_value);
			i++;
		}
		i++;
	}
	write(1, buff, count);
	va_end(arg_value);
	free(buff);
	return (count);
}
