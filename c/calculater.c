#include<stdio.h>
int main()
{
    int a , b ;
    char op;
 printf("Enter the operator:");
    scanf("%c",&op);
    printf("Enter the operands:\n");
    scanf("%d%d",&a,&b);
   
    switch(op)
    {
        case'+':
        printf("Addition:%d",a+b);
        break;

        case'-':
    printf("Subtraction:%d",a-b);
     break;

       case'*':
       printf("Multiplication:%d",a*b);
       break;

       case'/':
       if(b!=0)
       printf("division:%d",a/b);
       break;

       case'%':
       printf("Modulus:%d",a%b);
       break;

       default:
       printf("invalid operator");
       break;
    }
    return 0;



}