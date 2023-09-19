#include "main.h"

/**
 * print_rot - print the string with ROT13 encrypt
 * @arguments: input
 * @buf: buffer pointer
 * @inde_buf: index for buffer pointer
 * Return: chars printed.
 */

int print_rot(va_list arguments, char *buf, unsigned int inde_buf)
{
	char alf[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char *str;
	unsigned int i, j, k;
	char nill[] = "(avyy)";

	str = va_arg(arguments, char *);
	if (str == NULL)
	{
		for (i = 0; nill[i]; i++)
			inde_buf = han_buff(buf, nill[i], inde_buf);
		return (6);
	}
	for (i = 0; str[i]; i++)
	{
		for (k = j = 0; alf[j]; j++)
		{
			if (str[i] == alf[j])
			{
				k = 1;
				inde_buf = han_buff(buf, rot[j], inde_buf);
				break;
			}
		}
		if (k == 0)
			inde_buf = han_buff(buf, str[i], inde_buf);
	}
	return (i);
}
