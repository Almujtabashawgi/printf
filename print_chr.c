#include "main.h"
#include <stdio.h>
/**
 * prin_ch - print char
 * @arguments: input char
 * @buf: buffer pointer
 * @inde_buf: index for buffer pointer
 * Return: 1.
 */
int prin_ch(va_list arguments, char *buf, unsigned int inde_buf)
{
	char c;

	c = va_arg(arguments, int);
	han_buff(buf, c, inde_buf);

	return (1);
}
