#include "main.h"
/**
 * prinlunt - prints a long unsigned.
 * @arguments: number to print
 * @buf: buffer pointer
 * @inde_buf: index for buffer pointer
 * Return: number of chars printed.
 */
int prinlunt(va_list arguments, char *buf, unsigned int inde_buf)
{
	unsigned long int int_number, int_temp, i, div;

	int_number = va_arg(arguments, unsigned long int);
	int_temp = int_number;
	div = 1;
	while (int_temp > 9)
	{
		div *= 10;
		int_temp /= 10;
	}
	for (i = 0; div > 0; div /= 10, i++)
	{
		inde_buf = han_buff(buf, ((int_number / div) % 10) + '0', inde_buf);
	}
	return (i);
}
