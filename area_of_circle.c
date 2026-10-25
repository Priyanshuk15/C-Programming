#include<stdio.h>
int main(){

    float r; //r stands for radius of circle
    float area_of_circle;
    float p = 3.14;;

    printf("enter radius of circle: ");
    scanf("%f", &r);

    area_of_circle = p*r*r;

    printf("area of circle = %f", area_of_circle);
    return 0;
}