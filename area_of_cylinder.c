#include<stdio.h>
int main(){

    float r; // r = radius of cylinder
    float h; // h = height of cylinder
    float volume_of_cylinder;

    printf("enter radius of cylinder: ");
    scanf("%f", &r);

    printf("enter height of cylinder: ");
    scanf("%f", &h);

    volume_of_cylinder = 3.14159*r*r*h;

    printf("volume of cylinder = %f", volume_of_cylinder);
    return 0;
}