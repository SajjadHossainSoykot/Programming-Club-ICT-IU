#include <stdio.h>
int main ()
{
    int a = 10;
    int b = 5 ;
    /* a += 10 ;
    printf("a = %d\n", a);
    a -= 10 ;
    printf("a = %d\n", a);
    a *= 10 ;
    printf("a = %d\n", a);
    a /= 10 ;
    printf("a = %d\n", a);
    a %= 10 ;
    printf("a = %d\n", a); */

    printf("%d == %d is %d\n", a, b, a==b);
    printf("%d > %d is %d\n", a, b, a==b);
    printf("%d < %d is %d\n", a, b, a==b);
    printf("%d != %d is %d\n", a, b, a==b);
    printf("%d >= %d is %d\n", a, b, a==b);
    printf("%d <= %d is %d\n", a, b, a==b);
    return 0;
}
