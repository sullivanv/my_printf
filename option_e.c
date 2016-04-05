#include "proto.h"

void    my_other_e(char *str, int position, va_list list)
{
  float nbr;
  int x;
  int j;
  int test;
  
  j = 10;
  nbr = va_arg(list, double);
  x = (int)nbr;
  my_put_nbr(x);
  x = str[position + 2] - 48;
  if (x > 0)
    my_putchar('.');
  while (x > 0)
    {
      test = (int)(nbr * j);
      test %= 10;
      if (test < 0)
	test = -test;
      my_put_nbr(test);
      j = j * 10;
      x--;
    }
}
