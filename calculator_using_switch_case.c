#include<stdio.h>
int main(){
    int a,b;
    char operator;

    printf("enter first number: ");
    scanf("%d", &a);

    printf("enter second number: ");
    scanf("%d", &b);

    printf("enter operator(+,-,*,/): ");
    scanf(" %c", &operator);

    switch(operator){
        case '+':
        printf("sum = %d", a+b);
        break;

        case '-':
        printf("subtraction = %d", a-b);
        break;
    
        case '*':
        printf("multiplication = %d", a*b);
        break;
   
        case '/':
        if(b != 0){
            printf("divison %.2f", (float)a/b);
        }
        else{
            printf("cannot divided by 0");
        }
        break;
        default:
            printf("invalid operator");
            break;
    }
    return 0;
}