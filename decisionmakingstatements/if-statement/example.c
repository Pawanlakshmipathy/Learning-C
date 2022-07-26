#include<stdio.h>
void main()
{
    int n;
    printf("Enter any non-zero integer: \n");
    scanf("%d",&n);
    if(n>0)
        printf("Number is positive number");
    if(n<0)
        printf("Number is negative number");
}