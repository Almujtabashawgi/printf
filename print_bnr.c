#include "main.h"

/**
 * print_bnr - decimal to binary
 * @arguments: input string
 * @buf: buffer pointer
 * @inde_buf: index for buffer pointer
 * Return: number of chars printed.
 */
int print_bnr(va_list arguments, char *buf, unsigned int inde_buf)
{
	int int_input, count, i, first_one, isnegative;
	char *binary;

	int_input = va_arg(arguments, int);
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
	binary = malloc(sizeof(char) * (32 + 1));
	binary = binary_arr(binary, int_input, isnegative, 32);
	first_one = 0;
	for (count = i = 0; binary[i]; i++)
	{
		if (first_one == 0 && binary[i] == '1')
			first_one = 1;
		if (first_one == 1)
		{
			inde_buf = han_buff(buf, binary[i], inde_buf);
			count++;
		}
	}
	free(binary);
	return (count);
}
