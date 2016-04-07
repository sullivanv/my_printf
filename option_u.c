/*
** option_u.c for My_printf in /Users/vitiel_s/my_printf
** 
** Made by VITIELLO Sullivan
** Login   <vitiel_s@etna-alternance.net>
** 
** Started on  Thu Apr  7 16:31:47 2016 VITIELLO Sullivan
** Last update Thu Apr  7 16:31:48 2016 VITIELLO Sullivan
*/

#include "proto.h"

void    my_put_unsigned(unsigned int nbr)
{
  if (nbr >= 10)
    {
      my_put_nbr(nbr / 10);
      my_put_nbr(nbr % 10);
    }
  else
    my_putchar(nbr + 48);
}

void    my_u(va_list list)
{
  unsigned int nbr;
  
  nbr = va_arg(list, unsigned int);
  my_put_unsigned(nbr);
}
