/*
** my_printf.c for my_printf in /Users/lauren_d/Documents/printf/printf
** 
** Made by LAURENCEAU Dorian
** Login   <lauren_d@etna-alternance.net>
** 
** Started on  Fri Apr  8 13:42:19 2016 LAURENCEAU Dorian
** Last update Fri Apr  8 15:12:27 2016 LAURENCEAU Dorian
*/
#include "my_printf.h"

int    my_printf(char *str, ...)
{
  va_list       ap;
  typedef void (*func_t)();
  func_t opt[9];

  opt[0] = &opt_s;
  opt[1] = &opt_i;
  opt[2] = &opt_d;
  opt[3] = &opt_c;
  opt[4] = &opt_o;
  opt[5] = &opt_u;
  opt[6] = &opt_x;
  opt[7] = &opt_X;
  opt[8] = &opt_b;
  va_start(ap, str);
  search1(opt, str, ap);
  va_end(ap);
  return (0);
}

int     search1(void (**opt)(), char *str, va_list ap)
{
  int i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] == '%')
        {
          if (search(str, i) != -1)
            {
              opt[search(str, i)](va_arg(ap, char *));
              i++;
              if (str[i + 1] == ' ')
                i++;
              else if (str[i + 1] == '%' && str[i + 2] == '%') {
                my_putchar('%');
              }
              if (str[i + 1] == '\0')
                return (0);
            }
        }
      my_putchar(str[i]);
      i++;
    }
  return (0);
}
