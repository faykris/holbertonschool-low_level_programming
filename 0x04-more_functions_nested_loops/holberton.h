#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

/* prints a char to the stdout */
int _putchar(char c);

/*prints 1 if c is uppercase, otherwise prints 0*/
int _isupper(int c);

/*prints 1 if c is a digit, otherwise prints 0*/
int _isdigit(int c);

/* multiplies two integers */
int mul(int a, int b);

/* print numbers from 0 to 9 followed by a new line */
void print_numbers(void);

/* print numbers from 0 to 9 followed by a new line - not 2 and 4 */
void print_most_numbers(void);

/*prints 10 times the numbers from 0 to 14 followed by a new line */
void more_numbers(void);

/* draws a straight line */
void print_line(int n);

/* draws a diagonal line */
void print_diagonal(int n);

/* Prints a square followed by a new line*/
void print_square(int size);

/* Prints a triangle followed by a new line */
void print_triangle(int size);

/* Prints a integer */
void print_number(int n);

#endif /* holberton.h */

