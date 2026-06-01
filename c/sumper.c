//wrap to find the sum and percentage of 5 subjects obtained by student
#include<stdio.h>
int main()
{
    int n1,n2,n3,n4,n5,sum;
    int per;
    printf("Enter marks of 5 subjects:");
    scanf("%d%d%d%d%d",&n1,&n2,&n3,&n4,&n5);
    sum=n1+n2+n3+n4+n5;
    per =sum/5;
    printf("Sum:%d",sum);
    printf("percentage%d",per);
    return 0;

}