#include "main.h"

/**
 * print_str - print strings
 * @arguments: input
 * @buf: buffer pointer
 * @inbuf: index for buffer pointer
 * Return: 1 when done.
 */
int print_str(va_list arguments, char *buf, unsigned int inbuf)
{
	char *str;
	unsigned int i;
	char nill[] = "(null)";

	str = va_arg(arguments, char *);
	if (str == NULL)
	{
		for (i = 0; nill[i]; i++)
			inbuf = han_buff(buf, nill[i], inbuf);
		return (6);
	}
	for (i = 0; str[i]; i++)
		inbuf = han_buff(buf, str[i], inbuf);
	return (i);
}
