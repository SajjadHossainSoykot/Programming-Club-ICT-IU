#include<stdio.h>
void main()
{
    int n, t;
    printf("Enter the number :");
    scanf("%d", &n);
    t=n%1;
    if(t>>0)
        printf("Positive Number");
    else
        printf("Negative Number");
    return 0;
}

