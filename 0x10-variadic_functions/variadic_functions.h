#ifndef _VAR_FUNC
#define _VAR_FUNC
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);

void print_numbers(const char *separator, const unsigned int n, ...);

void print_strings(const char *separator, const unsigned int n, ...);

void print_all(const char * const format, ...);

/**
 * struct typ - Struct operators
 *
 * @t: The object type
 * @tp: Pointer to a corresponding function
 */
typedef struct typ
{
	char *t;
	void (*tp)(va_list var, char * str);
} typ_t;

#endif /* _VAR_FUNC */
