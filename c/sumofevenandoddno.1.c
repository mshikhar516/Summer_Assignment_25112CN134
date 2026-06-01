#include<stdio.h>
int main()
{
    int n , i =1 , r =0, x = 0;
    printf("Enter the number:");
    scanf("%d",&n);
    
        while(i<=n)
        {
            if(i%2==0)
            {
            r=r+i;
        }
        else
        {
            x=x+i;
        }
        i=i+1;
    }
     printf("Sum of even no. upto the given number:%d",r);
     printf("\nSum of odd no. upto the given number:%d",x);
     return 0;

}