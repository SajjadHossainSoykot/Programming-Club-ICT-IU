#include<stdio.h>
int main()
{
    int a [15];
    a[0]= 0;
    a[1]= 1;
    int i;
    for (i=2; i<15; ++i){
        a[i]= a[i-1] + a[i-2];
    }
    for(i=0; i<15; ++i){
        printf("%d ",a[i]);
    }

}
