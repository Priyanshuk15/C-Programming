#include<stdio.h>
int main(){
    int i = 1;
    printf("Odd Numbers up to 20\n");
    do{
        printf("%d\n", i);
        i+=2;
    }while(i<=19);
    return 0;
}