#include <stdio.h>
int main ()
{
    int T, i;
    scanf("%d", &T);
    int A, B, C, K;
    for(i=1; i<=T; i++)
    {

        scanf("%d %d %d %d", &A, &B, &C, &K);
        if((A+B+C)%3==0)
        {
          int max, min;
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

          if((max-min)%K==0)
            {printf("Case %d: Peaceful\n", i);
            }

        else {
                printf("Case %d: Fight\n", i);
        }
        }
        else {
                printf("Case %d: Fight\n", i);
        }
    }
    return 0;
}

