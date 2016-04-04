#include "proto.h"
#include <stdio.h>

void    *my_c(va_list list)
{
    char c;
    
    c = va_arg(list, int);
    my_putchar(c);
}

void   *my_s(va_list list)
{
    char *ptr;
    
    ptr = va_arg(list, char*);
    my_putstr(ptr);
}

void   *my_i(va_list list)
{
    int i;
    
    i = va_arg(list, int);
    my_put_nbr(i);
}

void   *my_d(va_list list)
{
    int d; //pas bon !!
    
    d = va_arg(list, int);
    my_put_nbr(d);
}

t_fonction tab[] =
  {
    {'s', &my_s},
    {'c', &my_c},
    {'i', &my_i},
    {'d', &my_d},
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
        return(-1);
    }
    return(-2);
}

void    my_printf(char *str, ...)
{
    va_list list;
    int option_max;
    int position;
    int j;
    
    position = 0;
    option_max = 4;
    j = 0;
    va_start(list, str);
    
    while (str[position])
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
        position++;
    }
    
    va_end(list);
}