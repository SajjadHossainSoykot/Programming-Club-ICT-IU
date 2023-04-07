#include<stdio.h>
int main()
{
    int a[5], i, b, f = -1;
    for(i=0; i<5; i++)
    {
        scanf("%d",&a[i]);
    
    }
    printf("Search Value: ");
    scanf("%d",&b);
    for(i=0; i<5; i++)
    {
        if(a[i]==b)
        {
            f = i;
        }
    }
    if(f==-1) {printf("Value not found\n");}
    printf("The value is in a[%d]\n", f);
    
    return 0;
}
