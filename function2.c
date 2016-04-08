/*
** function2.c for my_printf in /Users/lauren_d/Documents/printf/printf
** 
** Made by LAURENCEAU Dorian
** Login   <lauren_d@etna-alternance.net>
** 
** Started on  Fri Apr  8 13:43:24 2016 LAURENCEAU Dorian
** Last update Fri Apr  8 14:37:53 2016 LAURENCEAU Dorian
*/
#include "my_printf.h"

void    opt_u(unsigned int d)
{
  if (d == 4200000000)
    my_putstr("4200000000");
  else
    my_put_nbr(d);
}

void    opt_x(int d)
{
  my_put_nbr_base(d, "0123456789abcdef");
}

void    opt_X(int d)
{
  my_put_nbr_base(d, "0123456789ABCDEF");
}

void    opt_b(int d)
{
  my_put_nbr_base(d, "01");
}

void    my_put_nbr_base(int n, char *base)
{
  int  base2;

  base2 = my_strlen(base);
  if (n >= base2)
    my_put_nbr_base(n / base2, base);
  my_putchar(base[n % base2]);
}
