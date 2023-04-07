#include <stdio.h>
#include <math.h>
void main()
{
    float r,x,a;
    printf("Enter the radius of Circle :");
    scanf("%f",&r);
    x=pow(r,2);
    a=3.1416*x;
    printf("The Area of circle is %0.4f\n",a);

}
