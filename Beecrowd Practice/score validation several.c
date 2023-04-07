#include <stdio.h>

int main() {
    float a, sum=0,v=0, x=1 ;
    int c=1,i;
    while (c==1){
        while(1){
                scanf("%f", &a);
                if(a>=0 && a<=10){
                    sum=sum+a;
                    v = v+1;
                        if(v==2)break;}
                else {
                printf("nota invalida\n");
                }
        }
        printf("media = %.2f\n", sum/2);

        while(1){
            printf("novo calculo (1-sim 2-nao)\n");
            scanf("%d", &c);
            if(c==2 || c==1)break;
            }
            c=c+0;
    }
    return 0;
}
