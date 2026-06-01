#include<stdio.h>
int main()
{
    int n , i=1,a=0,b=1,c;
    printf("Enter the number of terms:");
    scanf("%d",&n);
    printf("The fibonacci series :\n");
    while(i<=n)
    {  
        printf("\n%d",a);
        c=a+b;
        a=b;
        b=c;
        i=i+1;
    }
    return 0;

}