#include "main.h"

/**
 * prinhunt - short unsigned integer to print
 * @arguments: number
 * @buf: buffer
 * @inde_buf: index
 * Return: number of chars
 */
int prinhunt(va_list arguments, char *buf, unsigned int inde_buf)
{
	unsigned short int int_number, int_temp, i, div;

	int_in = va_arg(arguments, unsigned int);

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
	return (i);
}
