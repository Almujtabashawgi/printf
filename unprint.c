#include "main.h"

/**
 * unprint - for the non printed chars
 * @arguments: input
 * @buf: buffer pointer
 * @inde_buf: index for buffer
 * Return: number of printed chars
 */
int unprint(va_list arguments, char *buf, unsigned int inde_buf)
{
	unsigned char *str;
	char *hexa, *binary;
	unsigned int i, sum, op;

	str = va_arg(arguments, unsigned char *);
	binary = malloc(sizeof(char) * (32 + 1));
	hexa = malloc(sizeof(char) * (8 + 1));
	for (sum = i = 0; str[i]; i++)
	{
		if (str[i] < 32 || str[i] >= 127)
		{
			inde_buf = han_buff(buf, '\\', inde_buf);
			inde_buf = han_buff(buf, 'x', inde_buf);
			op = str[i];
			binary = binary_arr(binary, op, 0, 32);
			hexa = hexa_arrs(binary, hexa, 1, 8);
			inde_buf = han_buff(buf, hexa[6], inde_buf);
			inde_buf = han_buff(buf, hexa[7], inde_buf);
			sum += 3;
		}
		else
			inde_buf = han_buff(buf, str[i], inde_buf);
	}
	free(binary);
	free(hexa);
	return (i + sum);
}
