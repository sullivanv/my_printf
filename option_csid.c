/*
** option_csid.c for My_printf in /Users/vitiel_s/my_printf
** 
** Made by VITIELLO Sullivan
** Login   <vitiel_s@etna-alternance.net>
** 
** Started on  Thu Apr  7 16:32:13 2016 VITIELLO Sullivan
** Last update Thu Apr  7 16:32:15 2016 VITIELLO Sullivan
*/

#include "proto.h"

void    my_c(va_list list)
{
  char c;
  
  c = va_arg(list, int);
  my_putchar(c);
}

void   my_s(va_list list)
{
  char *ptr;
  
  ptr = va_arg(list, char*);
  my_putstr(ptr);
}

void   my_i(va_list list)
{
  int i;
    
  i = va_arg(list, int);
  my_put_nbr(i);
}

void   my_d(va_list list)
{
  int d;
    
  d = va_arg(list, int);
  my_put_nbr(d);
}
