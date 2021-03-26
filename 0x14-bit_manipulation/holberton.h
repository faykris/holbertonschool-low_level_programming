#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

#include <stdio.h>
#include <stdlib.h>

/* writes the character c to stdout */
int _putchar(char c);

/* 0. function that converts a binary number to an unsigned int */
unsigned int binary_to_uint(const char *b);

/* 1. function that prints the binary representation of a number */
void print_binary(unsigned long int n);

/* 2. function that returns the value of a bit at a given index */
int get_bit(unsigned long int n, unsigned int index);

/* 3. function that sets the value of a bit to 1 at a given index */
int set_bit(unsigned long int *n, unsigned int index);

/* 4. function that sets the value of a bit to 0 at a given index */
int clear_bit(unsigned long int *n, unsigned int index);

/* 5. function that returns the number of bits you would need to */
/* flip to get from one number to another */
unsigned int flip_bits(unsigned long int n, unsigned long int m);

/* 6. function that checks the endianness */
int get_endianness(void);

#endif
