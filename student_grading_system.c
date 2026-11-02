#include <stdio.h>

int main()
{
    char name[50];
    int rollNo, category;
    float marks;

    printf("STUDENT GRADING AND CLASSIFICATION SYSTEM\n");

    /* Input student details */
    printf("Enter student name: ");
    scanf(" %[^\n]", name);

    printf("Enter roll number: ");
    scanf("%d", &rollNo);

    printf("Enter marks (0-100): ");
    scanf("%f", &marks);

    /* Validate marks */
    if (marks < 0 || marks > 100)
    {
        printf("\nInvalid marks! Marks must be between 0 and 100.\n");
        return 0;
    }

    /* Grading using if-else ladder */
    printf("\nGrade Calculation\n");

    if (marks >= 90)
    {
        printf("Grade: A+\n");
    }
    else if (marks >= 80)
    {
        printf("Grade: A\n");
    }
    else if (marks >= 70)
    {
        printf("Grade: B+\n");
    }
    else if (marks >= 60)
    {
        printf("Grade: B\n");
    }
    else if (marks >= 50)
    {
        printf("Grade: C\n");
    }
    else if (marks >= 40)
    {
        printf("Grade: D\n");
    }
    else
    {
        printf("Grade: F\n");
    }

    /* Category input */
    printf("\nCategory Classification\n");

    printf("Enter category code:\n");
    printf("1. SC\n");
    printf("2. ST\n");
    printf("3. OBC\n");
    printf("4. EWS\n");
    printf("5. General\n");

    printf("Enter your category code: ");
    scanf("%d", &category);

    /* Category classification using switch-case */
    switch (category)
    {
        case 1:
            printf("Category: SC\n");
            printf("Fee Waiver Status: Eligible\n");
            break;

        case 2:
            printf("Category: ST\n");
            printf("Fee Waiver Status: Eligible\n");
            break;

        case 3:
            printf("Category: OBC\n");
            printf("Fee Waiver Status: Eligible\n");
            break;

        case 4:
            printf("Category: EWS\n");
            printf("Fee Waiver Status: Eligible\n");
            break;

        case 5:
            printf("Category: General\n");
            printf("Fee Waiver Status: Not Eligible\n");
            break;

        default:
            printf("Invalid category code!\n");
    }

    /* Display student information */
    printf("\n===== STUDENT DETAILS =====\n");
    printf("Name        : %s\n", name);
    printf("Roll Number : %d\n", rollNo);
    printf("Marks       : %.2f\n", marks);

    return 0;
}