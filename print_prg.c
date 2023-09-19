#include "main.h"
#include <stdio.h>

/**
 * print_prg - cooool
 * @a: input char
 * @buf: buffer pointer
 * @i: index for buffer pointer
 * Return: 1.
 */
int print_prg(va_list a __attribute__((unused)), char *buf, unsigned int i)
{
	han_buff(buf, '%', i);

	return (1);
}
