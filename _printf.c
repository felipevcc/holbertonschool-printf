#include "main.h"

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
	void (*func)(char *, va_list);

	if (!format)
		exit(1);
	
	buff = malloc(4000);
	if (!buff)
		exit(1);

	va_start(arg_value, format);

	while (format[i])
	{
		/*printf("%c\n", format[i]);*/
		if (format[i] != '%')
		{
			if (aux > 0)
				buff[i - aux] = format[i];
			else
				buff[i] = format[i];
		}
		else
		{
			printf("Entró\n");
			func = check_prtr(format[i + 1]);
			if (!func)
			{
				printf("exit");
				exit(1);
			}
			func(&buff[i - aux], arg_value);
			printf("%c\n", buff[i - aux]);
			aux++;
			i++;	
		}
		i++;
	}
	write(1, buff, strlen(buff));
	va_end(arg_value);
	free(buff);
	return (strlen(buff));	
}
