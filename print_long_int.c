#include "main.h"
/**
 * print_long - prints a long integer
 * @arguments: input string
 * @buf: buffer pointer
 * @inde_buf: index for buffer pointer
 * Return: number of chars printed.
 */
int print_long(va_list arguments, char *buf, unsigned int inde_buf)
{
	long int int_input;
	unsigned long int int_number, int_temp, i, div, isneg;

	int_input = va_arg(arguments, long int);
	isneg = 0;
	if (int_input < 0)
	{
		int_in = int_input * -1;
		inde_buf = han_buff(buf, '-', inde_buf);
		isneg = 1;
	}
	else
	{
		int_in = int_input;
	}

	int_temp = int_number;
	div = 1;
	while (int_temp > 9)
	{
		div *= 10;
		int_temp /= 10;
	}
	for (i = 0; div > 0; div /= 10, i++)
	{
		inde_buf = han_buff(buf, ((int_in / div) % 10) + '0', inde_buf);
	}
	return (i + isneg);
}
