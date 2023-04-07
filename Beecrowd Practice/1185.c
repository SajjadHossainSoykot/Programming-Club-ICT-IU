
#include<stdio.h>
int main ()
{
    int i,j,L;
    float sum=0, avg, M[12][12];
    char O, S;
    scanf("%ch", &O);
    for(i=0; i<12;i++)
        {
            for(j=0;j<12;j++)
            {
                scanf("%f",&M[i][j]);
            }
        }

    for(i=0; i<12;i++)
        {
            for(j=0;j<12;j++)
            {
                if(j+i<11){sum=sum+ M[i][j];}
            }
        }


    if(O=='S'){printf("%.1f\n",sum);}
    else if(O=='M'){printf("%.1f\n",sum/66);}

    return 0;
}
