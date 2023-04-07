#include <stdio.h>
int main() {
    int x, i;
    while(1){
        scanf("%d", &x);
        if(x==0)break;
        if(x%2==0){
            int sum=0;
            for(i=1; i<=5;i++)
            {
                sum=sum+x;
                x=x+2;

            }
            printf("%d\n",sum);
        }
        if(x%2!=0){

            int sum=0, a;
            a=x+1;
            for(i=1; i<=5;i++)
            {
                sum=sum+a;
                a=a+2;

            }
            printf("%d\n",sum);
        }

    }

    return 0;
}
