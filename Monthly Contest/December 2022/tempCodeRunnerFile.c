#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a, b, o;
    while(scanf("%d", &a)!=EOF)
    {   
        // scanf("%d", &a);
        scanf("%d", &b);
        o = abs(a-b);
        printf("%d\n",o);
    
    }
}