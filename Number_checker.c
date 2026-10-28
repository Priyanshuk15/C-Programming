#include<stdio.h>
int main(){
    int a;

    printf("enter number: ");
    scanf("%d", &a);

    if(a >0){
        printf("number is positive");
    }
    else if(a <0){
        printf("number is negative");
    }
    else{
        printf("number is  equal to zero");
    }
    return 0;
}