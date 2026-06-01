#include<stdio.h>
int main()
{
    int y;
    printf("Enter the year:\n");
    scanf("%d",&y);
    if(y%4==0)
    printf("Enter year is leap year");
    else 
    printf("Enter year is not a leap year");
    return 0;
    
}
