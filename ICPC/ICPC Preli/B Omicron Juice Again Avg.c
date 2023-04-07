#include <stdio.h>
int main ()
{
    int T, i;
    scanf("%d", &T);
    int A, B, C, K;
    for(i=1; i<=T; i++)
    {

        scanf("%d %d %d %d", &A, &B, &C, &K);
        int AVG;
        AVG = (A+B+C)/3;
        if((A+B+C)%3==0)
        {
                  if((AVG-A)%K==0 && (AVG-B)%K==0 && (AVG-C)%K==0 )
            {
                printf("Case %d: Peaceful\n", i);
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

