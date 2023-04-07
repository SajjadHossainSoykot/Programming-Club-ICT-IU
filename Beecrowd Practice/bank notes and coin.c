#include <stdio.h>
int main ()
{
    float a, b, c, d, M;
    scanf("%f%f%f%f", &a, &b, &c, &d);
    M = (a*2+b*3+c*4+d*1)/10;
    printf("Media: %0.1f\n", M);
    if(M>=7)
        printf("Aluno aprovado.\n");
    else if (M<5.0) printf("Aluno reprovado.\n");
    else if (5.0<=M<=6.9)
        {
        printf("Aluno em exame.\n");
        float E;
        scanf("%f", &E);
        printf("Nota do exame: %.1f\n", E);
        M = (M+E)/2;
        if(M>4.9)
        printf("Aluno aprovado.\n");
        else printf("Aluno reprovado.\n");
        printf("Media final: %0.1f\n", M);
        }
    return 0;

}
