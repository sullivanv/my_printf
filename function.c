/*
** function.c for My_printf in /Users/vitiel_s/my_printf
** 
** Made by VITIELLO Sullivan
** Login   <vitiel_s@etna-alternance.net>
** 
** Started on  Thu Apr  7 16:32:00 2016 VITIELLO Sullivan
** Last update Thu Apr  7 16:32:01 2016 VITIELLO Sullivan
*/


#include "proto.h"

void    my_putchar(char c)
{
  write(1, &c, 1);
}

int     my_strlen(char *str)
{
  int i;
  
  i = 0;
  while (str[i])
    i++;
  return(i);
}

void    my_putstr(char *str)
{
  int i;
  
  i = 0;
  while (str[i])
    {
      my_putchar(str[i]);
      i++;
    }
}

void    my_put_nbr(int nbr)
{
  if (nbr == -2147483648)
    my_putstr("-2147483648");
  else
    {
      if (nbr < 0)
        {
          nbr = nbr * (-1);
          my_putchar('-');
        }
      if (nbr >= 10)
        {
          my_put_nbr(nbr / 10);
          my_put_nbr(nbr % 10);
        }
      else
        my_putchar(nbr + 48);
    }
}

/* x = 1 -> majuscule sur l'hexa */

void    my_put_nbr_base(int nbr, int base, int x)
{
  if (nbr < 0)
    {
      nbr = nbr * (-1);
      my_putchar('-');
    }
  if (nbr >= base)
    {
      my_put_nbr_base(nbr / base, base, x);
      my_put_nbr_base(nbr % base, base, x);
    }
  else
    {
      if (nbr > 9 && x == 0)
	my_putchar(nbr + 87);
      else if (nbr > 9 && x == 1)
	my_putchar(nbr + 55);
      else
	my_putchar(nbr + 48);
    }
}
