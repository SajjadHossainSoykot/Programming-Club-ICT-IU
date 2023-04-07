#include <stdio.h>

int main() {

   float a;
   scanf("%f", &a);
   if(a<0 || a>100) {printf("Fora de intervalo\n");   }
   else {
       if(0<=a && a<=25) {printf("Intervalo [0,25]\n"); }
   else if(25<a && a<=50){printf("Intervalo (25,50]\n");}
   else if(50<a && a<=75){printf("Intervalo (50,75]\n");}
   else {printf("Intervalo (75,100]\n");}

   }

    return 0;
}
