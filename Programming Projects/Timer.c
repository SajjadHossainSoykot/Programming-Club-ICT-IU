#include<stdio.h>
#include<conio.h>
#include<unistd.h>
#define CYCLE 5
int main()
{
    int hr=0, min=0, sec=0;
    int h, m, s;
    printf("Enter Hour, Minute and Second: ");
    scanf("%d%d%d", &h, &m, &s);
    //clrscr();
    while (1)
    {   
        printf("\n\n############ TIMER ###########\n\n\n");
        printf("        %.2d : %.2d : %.2d\n", hr, min, sec);
        printf("\n\n\n############ TIMER ###########");

        if(hr==h && min==m && sec==s) {break;}
        else {
             //printf("\033[2J\033[1;1H");
             //clrscr();
             }
        sec++;
        sleep(1);
        if (sec==CYCLE)
        {
            min++;
            sec = 0;
        }
        if (min==CYCLE)
        {
            hr++;
            min = 0;
        }
    }   
    
}