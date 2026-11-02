#include<stdio.h>
int main(){
    int a,b;
    char operator;
   

    printf("Enter first numbers:");
    scanf("%d", &a);

    printf("Enter second numbers: ");
    scanf("%d", &b);

    printf("enter your operator(+,-,*,/): ");
    scanf(" %c", &operator);


    if(operator ==  '+'){
        printf("sum = %d", a+b);
    }
    else if(operator == '-'){
        printf("subtraction = %d", a-b);
    }
    else if(operator == '*'){
        printf("multiplication = %d", a*b);
    }
    else if(operator == '/'){
        if(b != 0){
        printf("division == %d", a/b);
        }
        else{
            printf("cannot divide by zero");
        }
    }
    else{
        printf("invalid operator");
    }
    return 0;
}
