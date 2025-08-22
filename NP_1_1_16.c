#include<stdio.h>

int main()

{
  
    float a,b,c,d;

    printf("Enter the Pricipal Amount");
    scanf("%f",&a);

    printf("Enter The rate of interest");
    scanf("%f",&b);

    printf("Enter the time period(in years)");
    scanf("%f",&c);

    d=(a*b*c)/100.0;

    printf("The simple interest is %f",d);

  return 0;

}