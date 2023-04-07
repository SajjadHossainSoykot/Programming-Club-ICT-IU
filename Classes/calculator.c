#include <stdio.h>
int main()
{
    int num1, num2, A, B, C;
    float D;

    printf("Please enter a number:");
    scanf("%d", &num1);
    printf("Please enter another number:");
    scanf("%d", &num2);

    A= num1+num2;
    B= num1-num2;
    C= num1*num2;
    D = (float) num1/num2;

    printf("The Summation of %d and %d is  %d\n", num1, num2, A);
    printf("The Difference of %d and %d is %d\n", num1, num2, B);
    printf("The Multiplication of %d and %d is  %d\n", num1, num2, C);
    printf("The Division of %d and %d is  %f\n", num1, num2, D);

    return 0;
}

