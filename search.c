/*
** search.c for my_printf in /Users/lauren_d/Documents/printf/printf
** 
** Made by LAURENCEAU Dorian
** Login   <lauren_d@etna-alternance.net>
** 
** Started on  Fri Apr  8 13:42:47 2016 LAURENCEAU Dorian
** Last update Fri Apr  8 14:18:27 2016 LAURENCEAU Dorian
*/
#include "my_printf.h"
 
int     search(char *str, int i)
{
  char  *listOption;
  int   place;
 
  place = 0;
  listOption = "sidcouxXb";
  i = i + 1;
  while (listOption[place] != '\0')
    {
      if (str[i] == listOption[place])
        return (place);
      place++;
    }
  return (-1);
}

void    my_putchar(char c)
{
  write(1, &c, 1);
}

void    my_putstr(char *str)
{
  while (*str != '\0')
    {
      my_putchar(*str);
      str++;
    }
}

int    my_strlen(char *str)
{
  int i;

  i = 0;
  while(str[i]){
    i++;
  }
  return(i);
}

void    my_put_nbr(int n)
{
  int i;
  int size;

  size = 1;
  if (n == -2147483648)
    write(1, "-2147483648", 11);
  else
    {
      if (n < 0)
  {
    write(1, "-", 1);
    n = -n;
  }
      i = n;
      while ((i /= 10) > 0)
  size *= 10;
      i = n;
      while (size)
  {
    my_putchar((i / size) + '0');
    i %= size;
    size /= 10;
  }
    }
}
