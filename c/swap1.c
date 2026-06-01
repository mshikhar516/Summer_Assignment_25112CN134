#include<stdio.h>
int main()
{
    int a , b, c;
    printf("enter two numbers a & b \n:");
    scanf("%d%d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf ("Swapped values of a:%d",a);
    printf ("\nSwapped values of b:%d",b);
   return 0;
}