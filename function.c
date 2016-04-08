#include "my_printf.h"

void    opt_c(int c)
{
  my_putchar(c);
}
 
void    opt_s(char *str)
{
  my_putstr(str);
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
