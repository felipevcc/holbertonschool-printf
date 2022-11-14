#ifndef HEADER_FILE
#define HEADER_FILE

/* Libraries */
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/* Functions */
_printf(const char * restrict format, ...);
_fprintf(FILE * restrict stream, const char * restrict format, ...);
_sprintf(char * restrict str, const char * restrict format, ...);
_snprintf(char * restrict str, size_t size, const char * restrict format, ...);
_asprintf(char **ret, const char *format, ...);
_dprintf(int fd, const char * restrict format, ...);
_vprintf(const char * restrict format, va_list ap);
_vfprintf(FILE * restrict stream, const char * restrict format, va_list ap);
_vsprintf(char * restrict str, const char * restrict format, va_list ap);
_vsnprintf(char * restrict str, size_t size, const char * restrict format, va_list ap);
_vasprintf(char **ret, const char *format, va_list ap);
_vdprintf(int fd, const char * restrict format, va_list ap);
#endif
