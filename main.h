#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stddef.h>
#include <string.h>

/**
 * struct pr - struct for operations
 * @op: operation
 * @f: to be listed
 *
 * Description: Checks if there's an operation
 */
typedef struct pr
{
	char *op;
	int (*f)(va_list);
} pr_f;

/* Prototypes */
int _putchar(char c);
int _printf(const char *format, ...);
int print_c(va_list list);
int print_s(va_list list);


#endif /* MAIN_H */
