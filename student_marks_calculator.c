#include<stdio.h>
int main(){
    int maths, science, sst;
    int total;
    float percentage;

    printf("enter marks of maths: ");
    scanf("%d", &maths);

    printf("enter marks of science: ");
    scanf("%d", &science);

    printf("enter marks of sst: ");
    scanf("%d", &sst);

    total = maths + science + sst;
    
    printf("total marks = %d\n", total);

    percentage = total*100.00/300;

    printf("percentage = %.2f\n", percentage);

    if(percentage>=90){
        printf("execellent\n");
    }
    else if(percentage>=60 && percentage<90){
        printf("first division\n");
    }
    else if(percentage>=33 && percentage<60){
        printf("pass\n");
    }
    else
    printf("fail\n");
    return 0;
}