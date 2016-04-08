/*
** main.c for my_printf in /Users/lauren_d/Documents/printf/printf/main
** 
** Made by LAURENCEAU Dorian
** Login   <lauren_d@etna-alternance.net>
** 
** Started on  Fri Apr  8 15:14:28 2016 LAURENCEAU Dorian
** Last update Fri Apr  8 15:21:34 2016 LAURENCEAU Dorian
*/
#include "../my_printf.h"

int     main()
{
  my_printf("1 - une chaine\n");
  my_printf("2 - %s \n", "une autre chaine");
  my_printf("3 - %i \n", 42);
  my_printf("4 - %s %d %s %c", "avec", 4, "parametres", '\n');
  my_printf("1 - %o \n", 42);
  my_printf("2 - %u \n", (unsigned int)4200000000);
  my_printf("3 - %x \n", 42);
  my_printf("4 - %X \n", 42);
  my_printf("5 - %d%% \n", 42);
  my_printf("6 - %b \n", 255);
  return(0);
}
