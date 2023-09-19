#include "main.h"

/**
 * prinpint - print plus symbol
 * @arguments: input string
 * @buf: buffer pointer
 * @inde_buf: index for buffer pointer
 * Return: number of chars printed
 */
int prinpint(va_list arguments, char *buf, unsigned int inde_buf)
{
	int int_input;
	unsigned int int_number, int_temp, i, div;

	int_input = va_arg(arguments, int);
	if (int_input < 0)
	{
		int_in = int_input * -1;
		inde_buf = han_buff(buf, '-', inde_buf);
	}
	else
	{
		int_in = int_input;
		inde_buf = han_buff(buf, '+', inde_buf);
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
	return (i + 1);
}
