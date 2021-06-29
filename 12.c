#include<stdio.h>

int main(){
    
    float volume, r;
    printf("Enter radius in metre: ");
    scanf("%f",&r);
    volume = (3.0/4 * 3.14) * (r * r * r);
    printf("Volume of sphere of radius %f metre = %.2f metre cube", r,volume);
}
