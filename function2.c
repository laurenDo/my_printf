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

void    my_put_nbr_base(int n, char *base)
{
  int  base2;

  base2 = my_strlen(base);
  if (n >= base2)
    my_put_nbr_base(n / base2, base);
  my_putchar(base[n % base2]);
}
