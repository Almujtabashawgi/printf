#include "main.h"
/**
 * print_unt - for an unsigned integers
 * @arguments: numbers
 * @buf: pointer buffer
 * @inde_buf: index for pointer buffer
 * Return: number of printed chars.
 */
int print_unt(va_list arguments, char *buf, unsigned int inde_buf)
{
	unsigned int int_in, int_temp, i, div;

	int_in = va_arg(arguments, unsigned int);
	int_temp = int_in;
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
	return (i);
}
