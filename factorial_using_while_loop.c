#include<stdio.h>
int main(){
    int i = 1;
    int fact = 1;
    int num;

    printf("enter a number: ");
    scanf("%d", &num);

    while(i <= num){
        fact = fact * i;
        i++;
    }
    
    printf("factorial of %d = %d", num, fact);
    return 0;
}