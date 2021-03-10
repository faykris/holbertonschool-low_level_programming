#ifndef FUNCTION_POINTER
#define FUNCTION_POINTER

typedef unsigned long size_t; 
/* function that prints a name */
void print_name(char *name, void (*f)(char *));

/* function that executes a function given as a parameter on each element of an array */
void array_iterator(int *array, size_t size, void (*action)(int));

/* function that searches for an integer */
int int_index(int *array, int size, int (*cmp)(int));

#endif