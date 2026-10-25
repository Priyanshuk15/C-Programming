#include<stdio.h>
int main(){
    int unit;
    int bill;

    printf("enter your unit of electricity: ");
    scanf("%d", &unit);

    printf("you have entered %d unit of your electricty\n", unit);

    if(unit<1){
        printf("invalid");
    }
    else if(unit<=100){
        bill = unit*5;
        printf("your electricity bill is rupees%d", bill);
    }
    else if(unit>100 && unit<=200){
        bill = unit*7;
        printf("your electricity bill is rupees%d", bill);
    }
    else if(unit>200){
        bill = unit*10;
        printf("your electricity bill is rupees%d", bill);
    }
return 0;
}