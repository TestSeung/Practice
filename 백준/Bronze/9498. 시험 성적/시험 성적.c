#include<stdio.h>

int main(void)
{
    int S;
    scanf("%d",&S);
    if(90<=S)
        printf("A");
    else if(80<=S && 90>S)
        printf("B");
    else if(70<=S && 80>S)
        printf("C");
    else if(60<=S && 70>S)
        printf("D");
    else
        printf("F");
    return 0;
}