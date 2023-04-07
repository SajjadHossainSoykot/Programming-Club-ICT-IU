#include<stdio.h>
void main()
{
    int n, t;
    printf("Enter The Year:");
    scanf("%d", &n);
    t=n%4;
    if(t==0)
        printf("The year is a Leap Year");
    else
        printf("The year is not a Leap Year");
    return 0;
}

