#include <stdio.h>

int main(void)
{
    int hour;
    int min;
    scanf("%d",&hour);
    scanf("%d",&min);
        
    if(min-45<0||min==0)
    { 
        hour = hour -1;
        min = min +60;
    }
    min = min-45;
    if(hour <0)
        hour = 23;
    printf("%d %d",hour,min);
    
    return 0;
}