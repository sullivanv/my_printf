#include "proto.h"
#include <stdio.h>
#include <math.h>

int main()
{
    printf("0->%g\n", (double)0);
    printf("1->%g\n", (double)1);
    printf("-1->%g\n", (double)-1);
    printf("100->%g\n", (double)100);
    printf("-1996.12->%g\n", (double)-1996.12);
    printf("123.454567->%g\n", (double)123.45456789);
    printf("0.0005->%g\n", (double)0.0005);
    return(0);
}
