#include<stdio.h>
int main(){

    float c; //c = celsius
    float f; //f = fahrenheit

    printf(" enter temprature in clesius: ");
    scanf("%f", &c);

    f = c * 9/5 + 32;

    printf("fahrenheit = %f", f);
    return 0;
}