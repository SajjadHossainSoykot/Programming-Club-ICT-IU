#include<stdio.h>
int main ()
{
    int i,j,count=0;
    double sum=0, avg=0, M[12][12];
    char O;
    scanf("%c", &O);
    for(i=0; i<12;i++)
        {
            for(j=0;j<12;j++)
            {
                scanf("%lf",&M[i][j]);
            }
        }

    if(O=='S')
        {
            for(i=0; i<12;i++)
                {
                for(j=1;j<12;j++)
                    {
                        if(i > j && i < 12 - j - 1){sum=sum+ M[i][j];}

                    }
                }

            printf("%.1lf\n",sum);
        }


    if(O=='M')
        {
            for(i=0; i<12;i++)
                {
                for(j=1;j<12;j++)
                    {
                        if(i > j && i < 12 - j - 1){avg=avg+ M[i][j]; count++;}

                    }
                }
            printf("%.1lf\n",avg/count);
        }


    return 0;
}


