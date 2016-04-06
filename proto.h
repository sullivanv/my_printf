#ifndef __PROTO_H__
#define __PROTO_H__

#include <stdarg.h>
#include <unistd.h>

void    my_putchar(char c);
int     my_strlen(char *str);
void    my_putstr(char *str);
void    my_printf(char *str, ...);
void    my_put_nbr(int nbr);
void    my_c(va_list list);
void    my_s(va_list list);
void    my_i(va_list list);
void    my_d(va_list list);
void    my_o(va_list list);
void    my_x(va_list list);
void    my_X(va_list list);
void    my_pc(va_list list);
void    my_u(va_list list);
void    my_f(va_list list);
void    my_E(va_list list);
void    my_e(va_list list);
void    my_other(char *str, int position, va_list list);
void    my_other_e(char *str, int position, va_list list, int x);
void    my_other_e2(int x, int issmall, int exp, int f);
int     my_other_e3(double nbr, int f);
void    my_put_nbr_base(int nbr, int base, int x);


typedef struct s_fonction
{
  char opt;
  void (*fonction)(va_list list);
}               t_fonction;

#endif
