#ifndef HEADER_FILE
#define HEADER_FILE


/* ======= LIBRARIES ======= */

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>


/* ======= STRUCTURES ====== */

/**
 * struct ptr - parameters and functions struct
 * @c: parameter indicator
 * @f: parameter function
 */
typedef struct ptr
{
	char *c;
	int (*f)(char *, int, va_list);
} ptr_ch;


/* === FUNCTIONS PROTOTYPES === */

/* _printf and parameter checker Functions*/
int _printf(const char *format, ...);
int (*check_prtr(char specifier))(char *, int, va_list);

/* Parameters Functions */
int func_d(char *buff, int count, va_list value);
int func_i(char *buff, int count, va_list value);
int func_u(char *buff, int count, va_list value);
int func_o(char *buff, int count, va_list value);
int func_x(char *buff, int count, va_list value);
int func_X(char *buff, int count, va_list value);
int func_c(char *buff, int count, va_list value);
int func_s(char *buff, int count, va_list value);
int func_ptg(char *buff, int count, va_list value);
int func_b(char *buff, int count, va_list value);
int func_r(char *buff, int count, va_list value);
int func_R(char *buff, int count, va_list value);

/* Assign and Count len to Buff*/
int _assign(char *buff, int count, char *value);
int _rev_assign(char *buff, int count, char *value);

/* Strings Functions */
int _strlen(char *s);
char *_reverse(char *s, int n);
char *_rot13(char *str);
void _strcpy(char *dest, char *src);
void _rev_ptr(char *str);

/* Integers Functions */
int _abs(int n);
char *_itoa(int value, int base);
char *_utoa(unsigned int value, unsigned int base);
char *_lcutoa(unsigned int value, unsigned int base);

#endif
