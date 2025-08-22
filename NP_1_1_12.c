#include<stdio.h>

int main()

{
    float a,b;

    printf("Enter weight in kilograms:");
    scanf("%f",&a);

    b=a*1000.0;
 
    printf("The weight in grams is %f g",b);

  return 0;
}