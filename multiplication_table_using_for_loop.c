#include<stdio.h>
int main(){
    int i, sum = 0;

    for(i = 2; i <= 20; i += 2){
        sum = sum + i;
    }
    printf(" sum of even numbers = %d", sum);
    return 0;
}
