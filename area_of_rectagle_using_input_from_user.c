#include<stdio.h>
int main(){
    int l, b; // no whitespaces is allowed in variable
    int area_of_rectangle;
    // l = length of rectangle, b = breadth of rectangle
    printf("enter length of rectangle: ");
    scanf("%d", &l);

    printf("enter breadth of rectangle: ");
    scanf("%d", &b);

    area_of_rectangle = l*b;

    printf("area of rectangle = %d", area_of_rectangle);
    return 0;
}