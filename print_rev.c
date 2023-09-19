#include "main.h"

/**
 * print_rev - reverse the string
 * @arguments: input string
 * @buf: buffer pointer
 * @inde_buf: index for buffer pointer
 * Return: number of chars printed.
 */
int print_rev(va_list arguments, char *buf, unsigned int inde_buf)
{
	char *str;
	unsigned int i;
	int j = 0;
	char nill[] = "(llun)";

	str = va_arg(arguments, char *);
	if (str == NULL)
	{
		for (i = 0; nill[i]; i++)
			inde_buf = han_buff(buf, nill[i], inde_buf);
		return (6);
	}
	for (i = 0; str[i]; i++)
		;
	j = i - 1;
	for (; j >= 0; j--)
	{
		inde_buf = han_buff(buf, str[j], inde_buf);
	}
	return (i);
}
