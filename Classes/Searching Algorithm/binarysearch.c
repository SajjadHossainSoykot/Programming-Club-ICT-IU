#include<stdio.h>
int main()
{
    int a[10]={0,1,2,3,4,5,6,7,8,9};
    int n;
    scanf("%d",&n);
    int i,start=0,end=9,mid,pos=-1,count = 0;

    while (start<=end)
    {
        mid = (start+end)/2;
        if(a[mid] == n)
        {
            pos =mid;
            break;
        }
        else if (a[mid]<n)
        {
            start = mid + 1;
        }
        else
        {
            end = mid -1;
        }
        count +=1;
    }
    if(pos == -1)
    {
        printf("Not found! step:%d\n",count);

    }
    else
    {
        printf("position : %d step:%d\n",pos,count);
    }
}