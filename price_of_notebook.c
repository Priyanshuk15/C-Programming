#include<stdio.h>
int main(){
    const int price = 20;
    int quantity = 5;
    int total_price;

    printf("price of one notebook: %d\n", price);
    printf("number of notebook: %d\n", quantity);
    
    total_price = price*quantity;

    printf("total price = %d\n", total_price);
    return 0;
}