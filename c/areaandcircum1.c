#include<stdio.h>
int main()
{
    int r;
    float a , c;
    printf("enter the radius:");
    scanf("%d",&r);
    a = 3.14*r*r;
    c = 2*3.14*r;
    printf("Area:%f",a);
    printf("Circumference:%f",c);
    return 0;
}