#ifndef _VARIADIC_FUNCTIONS_H_
#define _VARIADIC_FUNCTIONS_H_
#include <stdarg.h>
void print_numbers(const char *separator, const unsigned int n, ...);
int sum_them_all(const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
/**
 * struct print- struct declaration
 * @t: param 1
 * @f: function pointer
 */
typedef struct print
{
	char *t;
	void (*f)(va_list);
} print_t;
void print_all(const char * const format, ...);
#endif /* _VARIADIC_FUNCTIONS_H_ */
