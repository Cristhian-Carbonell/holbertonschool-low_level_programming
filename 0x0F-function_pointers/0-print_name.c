#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: pointer
 * @f: function pointer
 */
void print_name(char *name, void (*f) (char *))
{
	f = &print_name_as_is;
	f(name);
	f = &print_name_uppercase;
	f(name);
}
