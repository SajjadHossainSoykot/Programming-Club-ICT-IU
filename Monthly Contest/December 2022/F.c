#include<stdio.h>
int main()
{
    int n, sum = 0, a;
    scanf("%d", &n);
    if(n<10 || n%10!=0) printf("-1\n");
    else 
    {
    sum = sum + n/500;
    a = n%500;
    sum = sum + a/200;
    a = a%200;
    sum = sum + a/100;
    a = a%100;
    sum = sum + a/50;
    a = a%50;
    sum = sum + a/20;
    a = a%20;
    sum = sum + a/10;
    printf("%d\n", sum);
    }

    return 0;
}