#include "main.h"

/**
 * _printf - print function
 * @format: str
 * Return: integer
 */

int _printf(const char *format, ...)
{
	char *buff;
	int  i = 0, count = 0, buff_len = 0;
	va_list arg_value;
	int (*func)(char *, int, va_list);

	buff = malloc(4000);
	if (!format || !buff)
	exit(1);

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
	buff_len = _strlen(buff);
	write(1, buff, buff_len);
	va_end(arg_value);
	free(buff);
	return (buff_len);
}
