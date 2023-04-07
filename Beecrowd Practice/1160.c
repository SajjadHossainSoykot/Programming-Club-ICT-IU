#include <stdio.h>

int main()
{
    int T, i, PA, PB, j;
    double GA, GB;
    scanf("%d", &T);
    for (i=1; i<=T; i++){
        j=0;
        scanf("%d %d %lf %lf", &PA, &PB, &GA, &GB);
        while(PA<=PB)
        {
            PA = PA +((GA*PA)/100);
            PB = PB +((GB*PB)/100);
            j++;
            if(j>100){
                printf("Mais de 1 seculo.\n");
                break;
            }

        }

        if(j<=100){printf("%d anos.\n", j);}

    }
    return 0;
}
