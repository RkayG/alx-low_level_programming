#ifndef MAIN_H_
#define MAIN_H_

/*
 * _putchar - prints c to the standard output
 * &c - the character to print
 *
 * Return: on success 1
 * On error, -1 is returned , and errnois set appropriately
 */

int _putchar(char c);

/*
 * print_alphabet - prints the alphabets in lowercase
 *
 * Return: null
 */

void print_alphabet(void);

/**
 * print_alphabet_x10 - prints the alphabets in lowercase
 * ten times.
 *
 * Return: null
 */

void print_alphabet_x10(void);

 /**_islower - checks for lower case characters
 *
 * @c: the character to check for
 *
 * Return: on success 1
 * On failure - 0
 */

int _islower(int c);

/**
 * _isalpha - checks for upper case characters
 *
 * @c: the character to check for
 *
 * Return: on success 1
 * On failure - 0
 */

int _isalpha(int c);

/**
 * print_sign - prints the sign of a number
 *
 * @n: the number to check for
 *
 * Return: on success 1 and '+' if number is positive;
 * 0 and prints '0' if zero; -1 and prints '-' if negative
 */

int print_sign(int n);

/**
 * _abs - computes the absolute value of a number
 *
 * @a: the value of integer
 *
 * Return: Always 0
 */

int _abs(int a);

/**
 * print_last_digit - prints the last digit of
 * a number
 *
 * @n: the value of integer
 *
 * Return: Always 0
 */

int print_last_digit(int n);

/**
 * jack_bauer - prints every minute of the day
 *
 * Return: Null
 */
void jack_bauer(void);

/**
 * times_table - prints the 9 times table, starting from 0
 *
 * Return: Always 0
 */

void times_table(void);

/**                                                              * add  - prints the sum of two integers
 *
 * @num1 & @num2: the values of integer
 *
 * Return: Always 0
 */

int add(int num1, int num2);

/**
 * print_to_98 - prints all natural numbers from n to 98         *
 * @n: the value of integer
 *
 * Return: Always 0
 */

void print_to_98(int n);

void print_times_table(int n);

#endif

