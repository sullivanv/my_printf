/*
** my_printf.c for My_printf in /Users/vitiel_s/my_printf
** 
** Made by VITIELLO Sullivan
** Login   <vitiel_s@etna-alternance.net>
** 
** Started on  Thu Apr  7 16:30:56 2016 VITIELLO Sullivan
** Last update Thu Apr  7 16:30:58 2016 VITIELLO Sullivan
*/


#include "proto.h"

t_fonction tab[] =
  {
    {'s', &my_s},
    {'c', &my_c},
    {'i', &my_i},
    {'d', &my_d},
    {'o', &my_o},
    {'x', &my_x},
    {'X', &my_X},
    {'%', &my_pc},
    {'u', &my_u},
    {'f', &my_f},
    {'E', &my_E},
    {'e', &my_e},
  };

int    my_parse_str(char *str, int position)
{
  int j;
  int option_max;
  
  j = 0;
  option_max = 12;
  if (str[position] == '%')
    {
      if (str[position + 1] == '.')
	return (-3);
      while (j < option_max)
	{
	  if (tab[j].opt == str[position + 1])
	    return(j);
	  j++;
	}
    }
  else
    {
      my_putchar(str[position]);
      return (-1);
    }
  return (-2);
}

int	my_print(char *str, int position, int j, va_list list)
{
  if (my_parse_str(str, position) != -1)
    {
      j = my_parse_str(str, position);
      if (j == -3)
	{
	  my_other(str, position, list);
	  position += 3;
	}
      else
	{
	  if (j == -2)
	    {
	      my_putstr("\n\nUne erreur est survenu, l'option n'est pas reconnu !\n\n");
	      return(-2);
	    }
	  tab[j].fonction(list);
	  position++;
	}
    }
  return (position);
}

void    my_printf(char *str, ...)
{
  va_list list;
  int position;
  int j;
  
  position = -1;
  j = 0;
  va_start(list, str);
  while (str[++position])
    position = my_print(str, position, j, list);
  if (position == -2)
    return;
  va_end(list);
}
