#include<stdio.h>
int main(){
    int i = 1;
    printf("Even Numbers up to 20\n");
    do{
        printf("%d\n", 2*i);
        i++;
    }while(i<=10);
    return 0;
}