#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int t;
    scanf("%d", &t);
    int ca=1;
    while (t--)
    {
        int a, b, c, k;
        scanf("%d%d%d%d", &a, &b, &c, &k);
        int avg = (a+b+c)/3;
        if((a+b+c)%3!=0)printf("Case %d: Fight\n", ca);
        else 
        {
            if(abs(a-avg)%k==0 &&abs(a-avg)%k==0 && abs(a-avg)%k==0)printf("Case %d: Peaceful\n", ca);
            else printf("Case %d: Fight\n", ca);
        }
        ca++;
    }
}