#include<stdio.h>
#include<math.h>
int main()
{
    int p, r, t;
    float si,ci;
     printf("Enter principal amount:");
     scanf("%d",&p);
     printf("Enter rate of interest:");
     scanf("%d",&r);
     printf("Enter the time period:");
     scanf("%d",&t);
     si=(p*r*t)/100;
     ci=p*pow((1+r/100),t) - p;
     printf("simple interest:%f",si);
     printf("\ncompound interest:%f",ci);
     return 0;

}