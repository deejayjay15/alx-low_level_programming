#ifndef _MAIN_H_
#define _MAIN_H_

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);

/**
 * print_alphabet Prints the lowercase alphabet
 * @c: The Character to print
 */
void print_alphabet(void);

/**
 * void print_alphabet_x10(void) prints the alphabet 10 times
 */
void print_alphabet_x10(void);

/**
 * _islower(int c); checks if a character is lowercase
 * @c: The character to check
 * Return: 1 if c is lowercase 0 otherwise
 */
int _islower(int c);

/**
 * _isalpha(int c) checks whether a character is alphabetic
 */
int _isalpha(int c);

/**
 * int print_sign(int n) prints the sign of a number
 */
int print_sign(int n);

/**
 * int _abs(int) computes the absolute value of an integer
 */
int _abs(int);

/**
 * int print_last_digit(int i) prints the last digit of the integer i
 */
int print_last_digit(int);

/**
 * jack_bauer(void) prints every minute of Jack Bauer's day
 */
void jack_bauer(void);

/**
 * times_table - prints out the 9 times table
 */
void times_table(void);

/**
 *int add(int, int) adds two integers and returns the result
 */
int add(int, int);

/**
 *void print_to_98(int n) prints natural numbers from n to 98;
 */
void print_to_98(int n);

/**
 * print_times_table
 */
void print_times_table(int n);
#endif
