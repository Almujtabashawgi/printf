#include "main.h"
#include <stdio.h>
/**
 * print_add - prints the address
 * @arguments: input address.
 * @buf: buffer pointer.
 * @inde_buf: index for buffer pointer
 *
 * Return: number of chars printed.
 */
int print_add(va_list arguments, char *buf, unsigned int inde_buf)
{
	void *add;
	long int int_input;
	int i, count, first_digit, isnegative;
	char *hexa, *binary;
	char nill[] = "(nil)";

	add = (va_arg(arguments, void *));
	if (add == NULL)
	{
		for (i = 0; nill[i]; i++)
			inde_buf = han_buff(buf, nill[i], inde_buf);
		return (5);
	}
	int_input = (intptr_t)add;
	isnegative = 0;
	if (int_input < 0)
	{
		int_input = (int_input * -1) - 1;
		isnegative = 1;
	}
	binary = malloc(sizeof(char) * (64 + 1));
	binary = binary_arr(binary, int_input, isnegative, 64);
	hexa = malloc(sizeof(char) * (16 + 1));
	hexa = hexa_arr(binary, hexa, 0, 16);
	inde_buf = han_buff(buf, '0', inde_buf);
	inde_buf = han_buff(buf, 'x', inde_buf);
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
	return (count + 2);
}
