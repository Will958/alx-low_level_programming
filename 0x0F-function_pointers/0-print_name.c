#include "function_pointers.h"
/**
 *print_name - prints name
 *@name: string
 *@f: func pointer to char pointer
 *Return: null
 */
void print_name(char *name, void (*f)(char *))
{
(*f) (name);
}
