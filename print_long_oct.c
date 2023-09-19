#include "main.h"
/**
 * prinloct - long decimal number to octal
 * @arguments: input number
 * @buf: buffer pointer
 * @inde_buf: index for buffer pointer
 * Return: number of chars printed.
 */
int prinloct(va_list arguments, char *buf, unsigned int inde_buf)
{
	long int int_input, i, isnegative, count, first_digit;
	char *octal, *binary;

	int_input = va_arg(arguments, long int);
	isnegative = 0;
	if (int_input == 0)
	{
		inde_buf = han_buff(buf, '0', inde_buf);
		return (1);
	}
	if (int_input < 0)
	{
		int_input = (int_input * -1) - 1;
		isnegative = 1;
	}

	binary = malloc(sizeof(char) * (64 + 1));
	binary = binary_arr(binary, int_input, isnegative, 64);
	octal = malloc(sizeof(char) * (22 + 1));
	octal = long_oct_arr(binary, octal);
	for (first_digit = i = count = 0; octal[i]; i++)
	{
		if (octal[i] != '0' && first_digit == 0)
			first_digit = 1;
		if (first_digit)
		{
			inde_buf = han_buff(buf, octal[i], inde_buf);
			count++;
		}
	}
	free(binary);
	free(octal);
	return (count);
}
