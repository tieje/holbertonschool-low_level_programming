#ifndef HOLBERTON_H
#define HOLBERTON_H

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
/**
 * struct print_s - struct for printing s
 * @letter: something
 * @f: function pointer
 */
typedef struct print_s
{
	char letter;
	void (*f)();
} print_t;
#endif
