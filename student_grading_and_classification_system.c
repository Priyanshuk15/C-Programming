#include<stdio.h>
int main(){
    int roll_no, category;
    float marks;
    char name[30];

    printf("enter your name: ");
    scanf(" %[^\n]", name); 
    // %[^\n] is a scanset that reads characters until a newline is encountered.
    // It allows us to read a full name containing spaces.

    printf("enter your roll no: ");
    scanf("%d", &roll_no);

    printf("enter your marks(0 to 100): ");
    scanf("%f", &marks);

    if(marks < 0 || marks > 100){ // we use LOGICAL OR operator cuz if any of one criteria match then this would apply 
        printf("invalid marks! plzz fill marks between 0 to 100");
        return 0;
    }

    printf("\nGrade Classification\n");

    if(marks >= 90){
        printf("Grade: A+\n");
    }
    else if(marks >= 80){
        printf("Grade: A\n");
    }
    else if(marks >= 70){
        printf("Grade: B+\n");
    }
    else if(marks >= 60){
        printf("Grade: B\n");
    }
    else if(marks >= 50){
        printf("Grade: C\n");
    }
    else if(marks >= 33){
        printf("Grade: D\n");
    }
    else{
        printf("Grade: fail\n");
    }
    
    printf("\nCategory Classification\n");

    printf("enter category code: \n");
    printf(" 1.sc\n");
    printf(" 2.st\n");
    printf(" 3.obc\n");
    printf(" 4.general\n");

    printf(" enter your catgeory code: ");
    scanf(" %d", &category);

    switch(category){
        case 1:
        printf("category: sc\n");
        printf("fee wavier status: elgibile\n");
        break;

        case 2:
        printf("category: st\n");
        printf("fee wavier status: eligible\n");
        break;

        case  3: 
        printf("category: obc\n");
        printf("fee wavier status: eligible\n");
        break;
        
        case 4:
        printf("cateogory: general\n");
        printf("fee wavier status: not eligible\n");
        break;

        default:
        printf("invalid category code!\n");
    }
        printf("\n>>>>>>STUDENT DETAILS <<<<<<\n");
        printf("Name     : %s\n", name);
        printf("Roll No  : %d\n", roll_no);
        printf("marks    : %.3f\n", marks);
        return 0;
        
}
