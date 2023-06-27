#include <stdio.h>

int main(void)
{
    int pie[6];
    int i;
    int chess[6]={1,1,2,2,2,8};
    for(i=0;i<6;i++)
        scanf("%d",&pie[i]);
    
    for(i=0;i<6;i++)
        printf("%d ", chess[i]-pie[i]);
 
    return 0;
}