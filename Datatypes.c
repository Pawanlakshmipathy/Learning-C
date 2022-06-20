#include<stdio.h>

int main()
{
    rintf("\n short = %d bytes", (int)sizeof(short));
    printf("\n long = %d bytes", (int)sizeof(long));
    printf("\n int = %d bytes", (int)sizeof(int));
    printf("\n float = %d bytes", (int)sizeof(float));
    printf("\n char = %d bytes", (int)sizeof(char));
    printf("\n double = %d bytes", (int)sizeof(double));
    return 0;
}