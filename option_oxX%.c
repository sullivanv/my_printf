/*
** option_oxX%.c for My_printf in /Users/vitiel_s/my_printf
** 
** Made by VITIELLO Sullivan
** Login   <vitiel_s@etna-alternance.net>
** 
** Started on  Thu Apr  7 16:32:39 2016 VITIELLO Sullivan
** Last update Thu Apr  7 16:32:42 2016 VITIELLO Sullivan
*/

#include "proto.h"

void    my_o(va_list list)
{
  int o;
  
  o = va_arg(list, int);
  my_put_nbr_base(o, 8, 0);
}

void    my_x(va_list list)
{
  int x;
  
  x = va_arg(list, int);
  my_put_nbr_base(x, 16, 0);
}


void    my_X(va_list list)
{
  int x;
  
  x = va_arg(list, int);
  my_put_nbr_base(x, 16, 1);
}

void    my_pc(va_list list)
{
  char c;
    
  c = va_arg(list, int);
  c = '%';
  my_putchar(c);
}
