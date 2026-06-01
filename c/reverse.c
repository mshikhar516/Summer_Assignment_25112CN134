#include<stdio.h>
int main()
{
    int num , r , rev =0 ;
    printf("Enter the number: ");
    scanf("%d",& num);
    for (int  i = num; i>0; i =i/10)
    {
        r =i%10;
        rev = rev*10 + r;
        
    }
    printf( "Reverse of the no. %d is %d ",num, rev);
    return 0;
}