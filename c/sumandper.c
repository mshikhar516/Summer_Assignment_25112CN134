//wrap to find sum of 5 subjects
#include<stdio.h>
int main()
{
    int n1,n2,n3,n4,n5,sum;
    float per;
    printf("Enter marks of 5 subjects:");
    scanf("%d%d%d%d%d",&n1,&n2,&n3,&n4,&n5);
    sum=n1+n2+n3+n4+n5;
     printf("Sum:%d",sum);
    per =(sum/500.0)*100;
    printf("percentage:%f",per);
    return 0;

}
