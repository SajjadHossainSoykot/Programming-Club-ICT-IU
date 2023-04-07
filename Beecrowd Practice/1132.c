#include <stdio.h>

int main() {
   int x, y, i, sum=0;
   scanf("%d%d",&x, &y);
   if(x>y){
        for(i=y;i<=x;i++){
            if(i%13!=0){sum=sum+i;}
            }
        }
   if(x<y){
        for(i=x;i<=y;i++){
            if(i%13!=0){sum=sum+i;}
            }
   }
   if(x==y){
    if(x%13!=0){sum=x;}
    else sum=0;
   }
   printf("%d\n",sum);
    return 0;
}

