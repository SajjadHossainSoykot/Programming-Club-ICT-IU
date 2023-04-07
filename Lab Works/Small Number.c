#include<stdio.h>
void main ()
{
   int A, B, C;
   printf("Please enter three numbers:");
   scanf("%d%d%d" ,&A, &B, &C);
   if ((A<B)&&(A<C))
   printf("The Smallest value is %d", A);
   else if ((B<A)&&(B<C))
   printf("The Smallest value is %d", B);
   else
    printf("The Smallest value is %d", C);

}

