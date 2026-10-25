#include<stdio.h>
int main(){

    float principle;
    float time;
    float rate;
    float simple_interest;

    printf("enter principle value: ");
    scanf("%f", &principle);

    printf("enter time: ");
    scanf("%f", &time);

    printf("enter rate: ");
    scanf("%f", &rate);

    simple_interest = principle*rate*time/100;

    printf("simple intrest = %f", simple_interest);
    return 0;
}