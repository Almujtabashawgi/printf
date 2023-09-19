#include "main.h"

/**
 * dec_hexa - decimal to hexa
 * @arguments: To print
 * @buf: pointer buffer
 * @inde_buf: index for pointer buffer
 * Return: number of printed chars
 */
int dec_hexa(va_list arguments, char *buf, unsigned int inde_buf)
{
	int int_input, i, isnegative, count, first_digit;
	char *hexa, *binary;

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
	hexa = malloc(sizeof(char) * (8 + 1));
	hexa = hexa_arr(binary, hexa, 1, 8);
	for (first_digit = i = count = 0; hexa[i]; i++)
	{
		if (hexa[i] != '0' && first_digit == 0)
			first_digit = 1;
		if (first_digit)
		{
			inde_buf = han_buff(buf, hexa[i], inde_buf);
			count++;
		}
	}
	free(binary);
	free(hexa);
	return (count);
}
