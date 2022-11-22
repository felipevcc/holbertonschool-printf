#ifndef HEADER_FILE
#define HEADER_FILE

/* Libraries */
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * struct ptr - parameters and functions struct
 * @c: parameter indicator
 * f: parameter function
 */
typedef struct ptr
{
	char *c;
	int (*f)(char *, int, va_list);
} ptr_ch;

/* Functions Prototypes */
int _printf(const char *format, ...);
int (*check_prtr(char format))(char *, int, va_list);

/*void func_d(char *buff, int count, va_list value);*/
/*void func_i(char *buff, int count, va_list value);*/
/*void func_u(char *buff, int count, va_list value);*/
/*void func_o(char *buff, int count, va_list value);*/
/*void func_x(char *buff, int count, va_list value);*/
/*void func_X(char *buff, int count, va_list value);*/

int func_c(char *buff, int count, va_list value);
int func_s(char *buff, int count, va_list value);

/*void func_p(char *buff, int count, va_list value);*/

int func_ptg(char *buff, int count, va_list value);
/*void func_r(char *buff, int count, va_list value);*/
int _assign(char *buff, int count, char *value);
int _strlen(char *s);
int _atoi(char *str);


#endif
