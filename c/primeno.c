#include<stdio.h>
int main()
{
    int num, flag = 0;
    printf("Enter the no.:");
    scanf("%d",&num);

    if(num==0 || num== 1)
    printf("not prime");

    for(int i = 2; i<=num/2;i++)
    {
        if(num % 2 == 0)
        {
            flag = 1;
            break;
        }
    }
    if(flag == 0)
       printf(" %d is a prime no.",num);
       else
       printf("%d is not a prime no.",num);
     
       return 0;
}