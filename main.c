#include <limits.h>
#include <stdio.h>
#include "main.h"

int main(void)
{
	/*unsigned int ui;*/
	/*void *addr;*/

	/*ui = (unsigned int)INT_MAX + 1024;*/
	/*addr = (void *)0x7ffe637541f0;*/

	void *addr;
	char *s = "Holberton School";

	addr = (void *)0x7ffe637541f0;
	 _printf("Address:[%p]\n", addr);
		printf("Address:[%p]\n", addr);

	/*printf("ui: %d\n", ui);*/
	/*_printf("Unsigned:[%u]\n", ui);
	printf("Unsigned:[%u]\n", ui);*/
	
	_printf("Address:[%p]\n", addr);
	printf("Address:[%p]\n", addr);
	
	/*_printf("Unsigned hexadecimal:[%x]\n", ui);
    printf("Unsigned hexadecimal:[%x]\n", ui);*/
	

	/*_printf("%r", "hola");
	printf("%r", "hola");*/

	/*_printf("%b\n", 98);
	printf("%b\n", 98);*/

	/*_printf("Unsigned octal:[%o]\n", ui);
	printf("Unsigned octal:[%o]\n", ui);*/	

	_printf("rot13: %R\n", s);

	return (0);
}
