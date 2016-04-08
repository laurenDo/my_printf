/*
** function.c for my_printf in /Users/lauren_d/Documents/printf/printf
** 
** Made by LAURENCEAU Dorian
** Login   <lauren_d@etna-alternance.net>
** 
** Started on  Fri Apr  8 13:43:04 2016 LAURENCEAU Dorian
** Last update Fri Apr  8 14:37:12 2016 LAURENCEAU Dorian
*/
#include "my_printf.h"

void    opt_c(int c)
{
  my_putchar(c);
}

void    opt_s(char *str)
{
  if (str != NULL)
    my_putstr(str);
  else
    my_putstr("null");
}

void    opt_d(int d)
{
  my_put_nbr(d);
}

void    opt_i(int d)
{
  my_put_nbr(d);
}

void    opt_o(int d)
{
  my_put_nbr_base(d, "01234567");
}
