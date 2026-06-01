#include<stdio.h>
int main()
{
    int n1,n2,n3,n4,n5,sum;
    float per;
    printf("Enter the marks of five subjects:\n");
    scanf("%d%d%d%d%d",&n1,&n2,&n3,&n4,&n5);
    sum = n1+n2+n3+n4+n5;
    per = (sum/500.0)*100;
    printf("SUM:%d",sum);
    printf("\nPERCENTAGE:%f",per);
    printf("\n");
    
    if(per>=90)
    printf("A grade");
    else if(per<=90 && per>=80)
    printf("B grade");
    else if(per<=80 && per>=60)
    printf("C grade");
    else
    printf("D grade");
    return 0;

}