#ifndef FUNCTION_POINTER_H
#define FUNCTION_POINTER_H

typedef unsigned long size_t;

/* writes the character c to stdout */
int _putchar(char c);

/* function that prints a name */
void print_name(char *name, void (*f)(char *));

/* function that executes a function given as */
/* a parameter on each element of an array */
void array_iterator(int *array, size_t size, void (*action)(int));

/* function that searches for an integer */
int int_index(int *array, int size, int (*cmp)(int));

#endif /* FUNCTION_POINTER_H */