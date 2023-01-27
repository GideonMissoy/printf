#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

/**
 * typedef struct fmt fmt_t - Struct op
 * @fmt: format
 * @fm_t: function associated
 */
typedef struct fmt fmt_t;
int _printf(const char *format, ...);
int handle_print(const char *fmt, int *i);
va_list list, char buffer[], int flags, int width, int precision, int size;

#endif
