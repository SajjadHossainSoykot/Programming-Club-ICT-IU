#include<stdio.h>
int main()
{
    int c;
    scanf("%d",&c);
    for (int i = 1; i <=c; i++)
    {
        int x, y, gcd, lcm, j;
        scanf("%d%d", &x, &y);
            for(j=1; j <= x && j <= y; ++j)
            {
                if(x%j==0 && y%j==0) gcd = j;
            }

        lcm = (x*y)/gcd;

        printf("%d %d\n", gcd, lcm);
    }
    
    
    
}
