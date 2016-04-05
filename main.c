#include "proto.h"
#include <stdio.h>

int main()
{
/*    char *str = "OUI";
    char c = 'N';
    char *atr = "!-";
    int dbtest = 1;
    
    printf("-Test1:\n");
    printf("te%sst1\n", str);
    my_printf("te%sst1\n", str);

    printf("-Test2:\n");
    printf("test%stest%ctest\n", str, c);
    my_printf("test%stest%ctest\n", str, c);
    
    printf("-Test3:\n");
    printf("test%stest%ctest%s\n", str, c, atr);
    my_printf("test%stest%ctest%s\n", str, c, atr);
    
    printf("-Test5:\n");
    printf("testsimple:\n");
    my_printf("testsimple:\n");
    
    printf("-Test6:\n");
    printf("test%stest%ctest%s\n", str, c, str);
    my_printf("test%stest%ctest%s\n", str, c, str);
    
    my_printf("1 - une chaine\n");
    my_printf("2 - %s\n", "une autre chaine");
    my_printf("3 - %i\n", 42);
    my_printf("4 - %s %d %s%c", "avec", 4, "parametres", '\n');
    
    
    printf("-Test6:\n");
    printf("%d\n", dbtest);
    my_printf("%d\n", dbtest);
    my_put_nbr_base(42 ,16, 1);
    my_putchar('\n');
    my_put_nbr_base(42 ,16, 0);
     my_putchar('\n');
    my_put_nbr_base(42 ,2, 1);
     my_putchar('\n');
    my_put_nbr_base(42 ,2, 0);
     my_putchar('\n');*/
     my_printf("1 - %o\n", 42); /* unsigned octal */
    my_printf("2 - %u\n", (unsigned int)4200000000); /* unsigned decimal */
    my_printf("3 - %x\n", 42); /* unsigned hexadecimal */
    my_printf("4 - %X\n", 42); /* unsigned hexadecimal */
    my_printf("5 - %d%%\n", 42);
    return(0);
}