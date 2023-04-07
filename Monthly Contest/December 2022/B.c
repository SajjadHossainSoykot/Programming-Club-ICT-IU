#include<stdio.h>
#include<stdlib.h>
int main()
{
    long long int a, b, o;
    while(scanf("%lld", &a)!=EOF)
    {   
        scanf("%lld", &b);
        o = abs(a-b);
        printf("%lld\n",o);
    
    }
}