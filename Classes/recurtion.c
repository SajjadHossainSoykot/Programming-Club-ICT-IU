#include<stdio.h>
int fact(int a);
int main()
{
    int n;
    scanf("%d", n);
    int res;
    res = fact(n);
    printf("%d\n", n);
    
}
int fact(int a) {
    if(a==1)
        return 1;
    return a*fact(a-1);
}