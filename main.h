#ifndef HEADER_FILE
#define HEADER_FILE

/* Libraries */
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Structures */
typedef struct ptr
{
	char *c;
	void (*f)();
} ptr_ch;

/* Functions Prototypes */
_printf(const char * restrict format, ...);
//void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);

#endif
