#include "main.h"

/**
 * print_str - print strings
 * @arguments: input
 * @buf: buffer pointer
 * @inde_buf: index for buffer pointer
 * Return: 1.
 */
int print_str(va_list arguments, char *buf, unsigned int inde_buf)
{
	char *str;
	unsigned int i;
	char nill[] = "(null)";

	str = va_arg(arguments, char *);
	if (str == NULL)
	{
		for (i = 0; nill[i]; i++)
			inde_buf = han_buff(buf, nill[i], inde_buf);
		return (6);
	}
	for (i = 0; str[i]; i++)
		inde_buf = han_buff(buf, str[i], inde_buf);
	return (i);
}
