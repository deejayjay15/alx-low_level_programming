#ifndef _MAIN_H_
#define _MAIN_H_
/**
 * _putchar - puts character to standard output
 * @c: character to put to standard output
 */
int _putchar(char c);

/**
 *int _isupper(int c); checks whether a character is capitalized
 */
int _isupper(int c);

/**
 *int _isdigit(int c); - checks for a digit
 */
int _isdigit(int c);

/**
 *int mul(int a, int b); - multiplies two integers a and b
 */
int mul(int a, int b);

/**
 *void print_numbers(void) - print numbers 0-9
 */
void print_numbers(void);

/**
 * print_most_numbers - prints 0-9 skipping 2 and 4
 */
void print_most_numbers(void);

/**
 * more_numbers prints rows of numbers
 */
void more_numbers(void);
/**
 * print_line - prints _ ending with \n
 */
void print_line(int n);

/**
 * print_diagonal - print \ ending with a new line
 */
void print_diagonal(int n);

/**
 *print_square - prints '#' in square
 */
void print_square(int size);

/**
 * print_triangle - prints a triangle with size *size*
 */
void print_triangle(int size);

/**
 * print_number - prints an integer
 */
void print_number(int n);
#endif /* _MAIN_H_ */
