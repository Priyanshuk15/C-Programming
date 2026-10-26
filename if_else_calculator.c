#include<stdio.h>
int main(){
    int a,b;
    char operator;

    printf("enter first number: ");
    scanf("%d", &a);

    printf("enter second number: ");
    scanf(" %d", &b);

    printf("enter operator(+,-,*,/): ");
    scanf(" %c", &operator);

    if(operator == '+'){
        printf("sum = %d", a+b);
    }
    else if(operator == '-'){
        printf("subtraction = %d", a-b);
    }
    else if(operator == '*'){
        printf("multipplication = %d", a*b);
    }
    else if(operator == '/'){
        if(b != 0){
            printf("divsion = %d", a/b);
            }
        else{
            printf("cannot divided by 0");
        }
    }
    else{
        printf("invalid operators");
    }
    return 0;
    
}