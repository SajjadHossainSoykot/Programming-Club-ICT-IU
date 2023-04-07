#include <stdio.h>
int main ()
{
    int T, i;
    scanf("%d", &T);
    int A, B, C;
    for(i=1; i<=T; i++)
    {

        scanf("%d %d %d", &A, &B, &C);
        if((A+B+C)%3==0)
        {
            printf("Case %d: Peaceful\n", i);
        }
        else {
                printf("Case %d: Fight\n", i);
        }
    }
    return 0;
}

