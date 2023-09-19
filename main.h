#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * struct print - struct to point the functions
 * @type_arg: identifiers
 * @f: pointer functions
 *
 * Description: struct for all printer functions.
 */
typedef struct print
{
	char *type_arg;
	int (*f)(va_list, char *, unsigned int);
} print_t;

int _printf(const char *format, ...);
int print_prg(va_list __attribute__((unused)), char *, unsigned int);
int prin_ch(va_list arguments, char *buf, unsigned int inde_buf);
int print_str(va_list arguments, char *buf, unsigned int inde_buf);
int print_int(va_list arguments, char *buf, unsigned int inde_buf);
int print_bnr(va_list arguments, char *buf, unsigned int inde_buf);
int print_unt(va_list arguments, char *buf, unsigned int inde_buf);
int print_oct(va_list arguments, char *buf, unsigned int inde_buf);
int print_hex(va_list arguments, char *buf, unsigned int inde_buf);
int dec_hexa(va_list arguments, char *buf, unsigned int inde_buf);
int unprint(va_list arguments, char *buf, unsigned int inde_buf);
int print_add(va_list arguments, char *buf, unsigned int inde_buf);
int print_rev(va_list arguments, char *buf, unsigned int inde_buf);
int print_rot(va_list arguments, char *buf, unsigned int inde_buf);
int print_long(va_list arguments, char *buf, unsigned int inde_buf);
int prinlunt(va_list arguments, char *buf, unsigned int inde_buf);
int prinloct(va_list arguments, char *buf, unsigned int inde_buf);
int prinlhex(va_list arguments, char *buf, unsigned int inde_buf);
int prinlupx(va_list arguments, char *buf, unsigned int inde_buf);
int prinhint(va_list arguments, char *buf, unsigned int inde_buf);
int prinhunt(va_list arguments, char *buf, unsigned int inde_buf);
int prinhoct(va_list arguments, char *buf, unsigned int inde_buf);
int prinhhex(va_list arguments, char *buf, unsigned int inde_buf);
int prinhupx(va_list arguments, char *buf, unsigned int inde_buf);
int prinpint(va_list arguments, char *buf, unsigned int inde_buf);
int prinnoct(va_list arguments, char *buf, unsigned int inde_buf);
int prinnhex(va_list arguments, char *buf, unsigned int inde_buf);
int prinnupx(va_list arguments, char *buf, unsigned int inde_buf);
int prinsint(va_list arguments, char *buf, unsigned int inde_buf);
int (*get_print_func(const char *s, int index))(va_list, char *, unsigned int);
int identifiers_func(const char *s, int index);
unsigned int han_buff(char *buf, char c, unsigned int inde_buf);
int print_buf(char *buf, unsigned int nbuf);
char *binary_arr(char *binary, long int int_number, int isneg, int limit);
char *oct_arr(char *bnr, char *oct);
char *long_oct_arr(char *bnr, char *oct);
char *fill_short_oct_array(char *bnr, char *oct);
char *hexa_arr(char *bnr, char *hex, int isupp, int limit);

#endif
