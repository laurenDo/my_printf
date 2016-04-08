#ifndef __MY_PRINTF_H__
#define __MY_PRINTF_H__


#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int    my_strlen(char *str);
void	my_putchar(char c);
void    my_putstr(char *str);
void    my_put_nbr(int n);
int     search(char *str, int i);
int     search1(void (**flag)(), char *str, va_list ap);
void    my_put_nbr_base(int nb, char *base);
void    opt_c(int c);
void    opt_s(char *str);
void    opt_d(int d);
void    opt_i(int d);
void    opt_o(int d);
void    opt_u(unsigned int d);
void    opt_x(int d);
void    opt_X(int d);


#endif
