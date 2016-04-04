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