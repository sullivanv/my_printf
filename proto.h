#ifndef __PROTO_H__
#define __PROTO_H__

#include <stdarg.h>
#include <unistd.h>

void    my_putchar(char c);
int     my_strlen(char *str);
void    my_putstr(char *str);
void    my_printf(char *str, ...);
void    my_put_nbr(int nbr);
void    *my_c(va_list list);
void    *my_s(va_list list);
void    *my_i(va_list list);
void    *my_d(va_list list);


typedef struct s_fonction
{
  char opt;
  void* (*fonction)(va_list list);
}               t_fonction;

#endif