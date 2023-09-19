#include "main.h"

/**
 * han_buff - handle the buffer
 * @buf: buffer pointer
 * @c: charcter to concatenate
 * @inde_buf: index of buffer pointer
 * Return: inde_bufs.
 */
unsigned int han_buff(char *buf, char c, unsigned int inde_buf)
{
	if (inde_buf == 1024)
	{
		print_buf(buf, inde_buf);
		inde_buf = 0;
	}
	buf[inde_buf] = c;
	inde_buf++;
	return (inde_buf);
}
