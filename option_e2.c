#include "proto.h"


int	my_other_e3(double nbr, int f)
{
  my_put_nbr((int)nbr);
  if (f > 1)
    {
      my_putchar('.');
      while (f != 0)
	{
	  nbr = nbr * 10;
	  my_put_nbr((int)nbr % 10);
	  f--;
	}
    }
  return (f);
}

void	my_other_e2(int x, int issmall, int exp, int f)
{
  if (x == 1 && issmall == 0)
    my_putstr("E+");
  else if (x == 0 && issmall == 0)
    my_putstr("e+");
  else if (x == 1 && issmall == 1)
    my_putstr("E-");
  else if (x == 0 && issmall == 1)
    my_putstr("e-");
  if (f < 10)
    my_putchar('0');
  my_put_nbr(exp);
}
