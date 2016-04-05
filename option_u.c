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
