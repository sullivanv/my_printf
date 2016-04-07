/*
** option_e.c for My_printf in /Users/vitiel_s/my_printf
** 
** Made by VITIELLO Sullivan
** Login   <vitiel_s@etna-alternance.net>
** 
** Started on  Thu Apr  7 16:31:11 2016 VITIELLO Sullivan
** Last update Thu Apr  7 16:31:14 2016 VITIELLO Sullivan
*/

#include "proto.h"

void	my_e2(double nbr, int issmall, int exp, int f)
{
  while (nbr >= 10 || nbr < 1)
    {
      if (nbr < 1)
        {
          nbr = nbr * 10;
          issmall = 1;
        }
      else
        nbr = nbr / 10;
      exp++;
    }
  my_put_nbr((int)nbr);
  my_putchar('.');
  while (f != 0)
    {
      nbr = nbr * 10;
      my_put_nbr((int)nbr % 10);
      f--;
    }
  if (issmall == 1)
    my_putstr("e-");
  else if (issmall == 0)
    my_putstr("e+");
  my_putchar('0');
  my_put_nbr(exp);
}

void    my_e(va_list list)
{
  double nbr;
  int issmall;
  int exp;
  int f;

  f = 6;
  exp = 0;
  issmall = 0;
  nbr = va_arg(list, double);
  if (nbr < 0)
    {
      my_putchar('-');
      nbr = -nbr;
    }
  my_e2(nbr, issmall, exp, f);
}

void	my_E2(double nbr, int issmall, int exp, int f)
{
  while (nbr >= 10 || nbr < 1)
    {
      if (nbr < 1)
        {
          nbr = nbr * 10;
          issmall = 1;
        }
      else
        nbr = nbr / 10;
      exp++;
    }
  my_put_nbr((int)nbr);
  my_putchar('.');
  while (f != 0)
    {
      nbr = nbr * 10;
      my_put_nbr((int)nbr % 10);
      f--;
    }
  if (issmall == 1)
    my_putstr("E-");
  else if (issmall == 0)
    my_putstr("E+");
  my_putchar('0');
  my_put_nbr(exp);
}

void	my_E(va_list list)
{
  double nbr;
  int issmall;
  int exp;
  int f;

  f = 6;
  exp = 0;
  issmall = 0;
  nbr = va_arg(list, double);
  if (nbr < 0)
    {
      my_putchar('-');
      nbr = -nbr;
    }
  my_E2(nbr, issmall, exp, f);
}

void    my_other_e(char *str, int position, va_list list, int x)
{
  double nbr;
  int issmall;
  int exp;
  int f;

  exp = 0;
  issmall = 0;
  nbr = va_arg(list, double);
  f = str[position + 2] - 48;
  if (nbr < 0)
    my_putchar('-');
  if (nbr < 0)
    nbr = -nbr;
  while (nbr >= 10 || nbr < 1)
    {
      if (nbr < 1)
	nbr = nbr * 10;
      if (nbr < 1)
	issmall = 1;
      else
	nbr = nbr / 10;
      exp++;
    }
  f = my_other_e3(nbr, f);
  my_other_e2(x, issmall, exp, f);
}
