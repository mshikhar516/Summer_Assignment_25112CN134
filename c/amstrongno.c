#include<stdio.h>
#include<math.h>
int main()
{
    int num , r , count = 0, sum =0, n1 ;
    printf("Enter the number: ");
    scanf("%d",& num);
    n1= num;

    while ( num >0)
    {
        count = count + 1;
        num = num /10;
    }
    num = n1;
    while ( num >0)
    {
        r =num%10;
        sum = sum + pow(r,count);
        num = num/10;
    }

    if ( sum == n1)
    printf("%d is a amstrong no. ", n1);
    else
    printf( "%d is not an amstrong no.",n1);
     
    return 0;
}
