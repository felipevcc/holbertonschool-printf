#ifndef HEADER_FILE
#define HEADER_FILE

/* Libraries */
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

/* Structures */
typedef struct ptr
{
	char *c;
	void (*f)(char **, int, va_list);
} ptr_ch;

/* Functions Prototypes */
int _printf(const char * restrict format, ...);
void (*check_prtr(char format))(char **, int, va_list);
/*
void func_d(char **buff, int index, va_list value);
void func_i(char **buff, int index, va_list value);
void func_u(char **buff, int index, va_list value);
void func_o(char **buff, int index, va_list value);
void func_x(char **buff, int index, va_list value);
void func_X(char **buff, int index, va_list value);
void func_c(char **buff, int index, va_list value);
void func_s(char **buff, int index, va_list value);
void func_p(char **buff, int index, va_list value);
*/
void func_ptg(char **buff, int index, va_list value);
/*void func_r(char **buff, int index, va_list value);*/

#endif
