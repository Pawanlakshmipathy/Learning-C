#include <stdio.h>
int main()
{
    char grade;
    printf("Enter the grade(A-D):");
    scanf("%c", &grade);
    switch (grade)
    {
    case 'A':
        printf("grade between 90-100 \n");
        break;
    case 'B':
        printf("grade between 80-89 \n");
        break;
    case 'C':
        printf("grade between 70-79 \n");
        break;
    case 'D':
        printf("grade between 60-69 \n");
        break;
    default:
        printf("ERROR..Try Again! \n");
        break;
    }
}