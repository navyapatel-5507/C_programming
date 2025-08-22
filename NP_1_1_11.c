#include<stdio.h>

int main()
{
    float a,b;
    
    printf("Enter weight in grams:");
    scanf("%f",&a);
    
    b=a/1000.0;
    
    printf("The weight in kilograms is %f kg",b);
   
   return 0;
}