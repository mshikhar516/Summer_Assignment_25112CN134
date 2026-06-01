#include<stdio.h>
int main()
{
    int n, i=1 , r=0;
    printf("Enter the number:");
    scanf("%d",&n);
    while(i<=n)
    {
      r = r+i;
      i=i+1;
    }
    printf("Sum of all no. upto the given no.:%d",r);
    return 0;
}