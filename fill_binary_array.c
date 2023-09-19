#include "main.h"

/**
 * binary_arr - decimal to binary
 * @binary: binary pointer
 * @int_number: number
 * @isneg: if input number is negative
 * @limit: size of the binary
 * Return: number of chars printed.
 */
char *binary_arr(char *binary, long int int_number, int isneg, int limit)
{
	int i;

	for (i = 0; i < limit; i++)
		binary[i] = '0';
	binary[limit] = '\0';
	for (i = limit - 1; int_number > 1; i--)
	{
		if (int_number == 2)
			binary[i] = '0';
		else
			binary[i] = (int_number % 2) + '0';
		int_number /= 2;
	}
	if (int_number != 0)
		binary[i] = '1';
	if (isneg)
	{
		for (i = 0; binary[i]; i++)
			if (binary[i] == '0')
				binary[i] = '1';
			else
				binary[i] = '0';
	}
	return (binary);
}
