 #include <stdio.h>
int main ()
 {
    int max, min;
     int A, B, C, K;
     scanf("%d %d %d %d", &A, &B, &C, &K);
          if (A>B && A>C)
            max = A;
          else if (B>A && B>C)
            max = B;
          else max = C;

          if (A<B && A<C)
            min = A;
          else if (B<A && B<C)
            min = B;
          else min = C;

          if((max-min)%K==0){
            printf("Peace");}
          else {printf("Fight");}

          return 0;
 }
