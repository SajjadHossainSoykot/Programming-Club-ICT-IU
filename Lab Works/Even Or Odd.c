#include<stdio.h>
void main()
{
    int n, t;
    printf("Enter the number :");
    scanf("%d", &n);
    t=n%2;
    if(t==0)
        printf("Even Number");
    else
        printf("Odd Number");
    return 0;
}
