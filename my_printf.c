#include "proto.h"
#include <stdio.h>

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
  };

int    my_parse_str(char *str, int option_max, int position)
{
    int j;
    
    j = 0;
    if (str[position] == '%')
        {
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

void    my_printf(char *str, ...)
{
    va_list list;
    int option_max;
    int position;
    int j;
    
    position = -1;
    option_max = 9;
    j = 0;
    va_start(list, str);
    while (str[++position])
    {
        if (my_parse_str(str, option_max, position) != -1)
        {
            j = my_parse_str(str, option_max, position);
            if (j == -2)
            {
                my_putstr("\n\nUne erreur est survenu, l'option n'est pas reconnu !\n");
                return;
            }
            tab[j].fonction(list);
            position++;
        }
    }
    va_end(list);
}