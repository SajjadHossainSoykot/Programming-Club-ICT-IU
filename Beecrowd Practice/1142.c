#include <stdio.h>

int main() {
    int a, b, i, j=0;
    scanf("%d%d", &a, &b);
    for(i=1;i<=b;i++)
    {
        j++;
        if(j==a) printf("%d",i);
        else {printf("%d ",i);}
        if(j==a)
        {
            j=0;
            printf("\n");
        }
    }

    return 0;
}

