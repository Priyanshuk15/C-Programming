#include<stdio.h>
int main(){
    int i = 1;
    int sum = 0;

    while(i <= 10){
        sum = sum + i;
        i++;
    }
    printf("sum of numbers fro 1 to 10 = %d", sum);
    return 0;
}