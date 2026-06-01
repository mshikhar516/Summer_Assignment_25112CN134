#include<stdio.h>
int main()
{
    int n , i =1, r=1;
    printf("Enter the number:");
    scanf("%d",&n);
    while(i<=n)
    {
        r=r*i;
        i=i+1;
    }
    printf("Factorial of number:%d",r);
    return 0;
}
