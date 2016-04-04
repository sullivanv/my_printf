#include "proto.h"

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
    int d;
    
    d = va_arg(list, int);
    my_put_nbr(d);
}