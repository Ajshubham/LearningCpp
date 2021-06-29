#include<stdio.h>

int main(){
    float l, b, perimetre;
    printf("Enter length and breadth :");
    scanf("%f %f", &l,&b);
    perimetre = 2*(l+b);
    printf("Perimetre of rectangle is %.2f", perimetre);
}