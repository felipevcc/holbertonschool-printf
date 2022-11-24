#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned int ui;

	ui = (unsigned int)INT_MAX + 1024;
	
	/*void *addr;

	addr = (void *)0x7ffe637541f0;*/

	/*printf("ui: %d\n", ui);*/
	/*_printf("Unsigned:[%u]\n", ui);
	printf("Unsigned:[%u]\n", ui);*/
	
	/*_printf("Address:[%p]\n", addr);
  printf("Address:[%p]\n", addr);*/
	/*
	_printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	*/

	/*_printf("%r", "hola");*/

	/*_printf("%b\n", 98);*/

	_printf("Unsigned octal:[%o]\n", ui);

	return (0);
}
