#include<stdio.h>
void swap (int *a, int *b);
int main()

{
    int c, d;
    c=5, d=10;
    printf("C: %d D: %d\n", c, d);
    swap(&c, &d);
    printf("C: %d D: %d\n", c, d);
    swap(&c, &d);
    printf("C: %d D: %d\n", c, d);
}
void swap (int *a, int *b) {
    int k;
    k = *a;
    *a = *b;
    *b = k;
}

// #include<stdio.h>
// int sum (int a, int b);
// int main()

// {
//     int c, d, s;
//     c=5, d=10;
//     s=sum(c,d);
//     printf("%d\n", s);
// }
// int sum (int a, int b) {
//     int s;
//     s=a+b;
//     return s;
// }