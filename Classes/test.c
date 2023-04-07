#include <stdio.h>
int a =10;
int main ()
 {
     int a = 5;
     {
         int a = 9;
         printf("1: %d\n", a);
     }
     printf("2: %d\n", a);
     return 0;
 }
