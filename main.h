#ifndef MAIN_H
#define MAIN_H

/* header files */
#include <limits.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <inttypes.h>


/**
 * struct new_op - the type  of struct
 * @op: alias new_op
 * @spc: the pointer
 */
typedef struct new_op
{
	char op;
	int (*spc)(va_list par_list, int *);

} ops;


/* function prototypes */
void print_width(char c, int n, int *counter);
int _isdigit(char c);
int _putchar(char c);
int _printf(const char *format, ...);
int _puts(const char *str);
int print_number(int n);
void _specifiers(va_list par_list, const char *format, int *i, int *count);
int spec(va_list par, const char *fmt, int *i, int *count);
int _revputs(const char *str);

int _binary(unsigned int n);
void print_null(const char *par_str, int *count);
int print_unsignedd(unsigned int n);
int print_octal(unsigned int n);
int print_hex(unsigned int n, int uppercase);
int u_specify(va_list par, int *count);
int r_specify(va_list par, int *count);
int b_specify(va_list par, int *count);
int o_specify(va_list par, int *count);
int x_specify(va_list par, int *count);
int X_specify(va_list par, int *count);
int S_specify(va_list par, int *count);
int print_string(const char *str);
int p_specifieer(va_list par, int *count);
int pnt_ads(void *ptr);
int for_c(va_list par_list, int *count);
int for_s(va_list par_list, int *count);
int for_percent(va_list par_list, int *count);
int for_p(va_list par_list, int *count);
int for_d(va_list par_list, int *count);
int for_i(va_list par_list, int *count);


#endif

