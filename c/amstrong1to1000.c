#include<stdio.h>
#include<math.h>
int main()
{
   printf( "The amstrong no. between 1 to 1000:\n");
   for( int i =1; i<=1000; i++)
   {

    int num =i, r , count = 0, sum =0, n1 ;
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
    printf("%d\t ", n1);
}
    return 0;
}
