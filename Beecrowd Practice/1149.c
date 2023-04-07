#include <stdio.h>

int main() {
    int a, n;
    scanf("%d",&a);
    while(1){
        scanf("%d", &n);
        if(n>0)break;
    }
    int i, sum=0;
    for(i=a;i<=(a+n-1);i++){
        sum=sum+i;}
        printf("%d\n", sum);

    return 0;
}


