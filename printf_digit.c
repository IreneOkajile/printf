#include "main.h"

/**
 * printf_digit_d - print a digit
 * @n: number to print
 * Return: return integer
 */
int printf_digit_d(int n)
{
	int num, last = n % 10, digit, exp = 1, count = 1;

	n = n / 10;
	num = n

	if (last < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		last = -last;
		count++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = n;
		while (exp > 0)
		{
			digit = num / exp;
			_putchar(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			count++;
		}
	}
	_putchar(last + '0');
	return (count);
}

/**
 * printf_digit_i - print an int
 * @n: number to be printed
 * Return: integer
 */

int printf_digit_i(int n)
{
	int num, last = n % 10, digit, exp = 1, count = 1;

	n = n / 10;
	num = n

	if (last < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		last = -last;
		count++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = n;
		while (exp > 0)
		{
			digit = num / exp;
			_putchar(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			count++;
		}
	}
	_putchar(last + '0');
	return (count);
}
