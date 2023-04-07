#include<stdio.h>
int main(){

    int iw=0, gw=0, draw=0;
    int again;
    do{
        int ig, gg;
        scanf("%d%d", &ig, &gg);
        if(ig>gg){iw=iw+1;}
        else if (ig<gg){gw=gw+1;}
        else if (ig=gg){draw=draw+1;}
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &again);

    } while (again==1);
    int total;
    total= iw+gw+draw;
    printf("%d grenais\n", total);
    printf("Inter:%d\nGremio:%d\nEmpates:%d\n",iw,gw,draw);

    if(iw==gw){printf("Não houve vencedor\n");}
    else if(iw>gw){printf("Inter venceu mais\n");}
    else {printf("Gremio venceu mais\n");}



return 0;
}
