#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

/* prints a char to the stdout */
int _putchar(char c);

/* takes the pointer to an Int as parameter and update value it point to 898 */
void reset_to_98(int *n);

/* swaps the values of two integers */
void swap_int(int *a, int *b);

/* returns the length of a string */
int _strlen(char *s);

/* prints a string followed by a new line to stdout*/
void _puts(char *str);

/* prints a string, in reverse, followed by a new line */
void print_rev(char *s);

/* reverses a string */
void rev_string(char *s);

/* prints every other character of a string starting with the first character */
void puts2(char *str);

/* prints half of a string followed by a new line */
void puts_half(char *str);

/* prints n elements of an array of integers, followed by a new line */
void print_array(int *a, int n);

/* copies the string pointed to by src, including the terminating null byte (\0)*/
char *_strcpy(char *dest, char *src);

/* convert a string to a integer*/
int _atoi(char *s);

#endif /* holberton.h */
