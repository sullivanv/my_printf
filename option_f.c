#include "proto.h"

void    my_other_f(char *str, int position, va_list list)
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

void    my_other(char *str, int position, va_list list)
{
  int x;

  x = 0;
  if (str[position + 3] == 'f' || str[position + 3] == 'F')
    my_other_f(str, position, list);
  else if (str[position + 3] == 'e' || str[position + 3] == 'E')
    {
      if (str[position + 3] == 'E')
	x = 1;
      my_other_e(str, position, list, x);
    }
}

void    my_f(va_list list)
{
  float nbr;
  int x;
  int j;
  int test;
  
  j = 10;
  nbr = va_arg(list, double);
  x = (int)nbr;
  my_put_nbr(x);
  x = 6;
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
