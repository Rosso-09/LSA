#include<stdio.h>
#include<stdlib.h>

float n1;
float n2;
float n3;
float p1;
float p2;
float p3;

int main(){
    printf("N1: ");
    scanf("%f", &n1);
    printf("N2: ");
    scanf("%f", &n2);
    printf("N3: ");
    scanf("%f", &n3);
    printf("P1: ");
    scanf("%f", &p1);
    printf("P2: ");
    scanf("%f", &p2);
    printf("P3: ");
    scanf("%f", &p3);
    float media = ((n1*p1)+(n2*p2)+(n3*p3))/(p1+p2+p3);
    prinft("Media pesata%.2f\n", media);
    return 0;
}