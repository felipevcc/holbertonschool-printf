#include <limits.h>
#include <stdio.h>
#include "main.h"

int main(void)
{
	/*void *addr;*/
	/*addr = (void *)0x7ffe637541f0;*/

	/*
	addr = (void *)0x7ffe637541f0;
	 _printf("Address:[%p]\n", addr);
		printf("Address:[%p]\n", addr);*/	
	
	/*_printf("Address:[%p]\n", addr);
	printf("Address:[%p]\n", addr);*/
	
	_printf("%r\n", "hola");	
	_printf("rot13: %R\n", "Holberton School");	

	return (0);
}
