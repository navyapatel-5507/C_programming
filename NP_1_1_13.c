#include<stdio.h>

int main()

{
  
float a,b,c,d;
    printf("Enter the number of bytes:");
    scanf("%f",&a);
    
    b=a/1000;
    c=a/1000000;
    d=a/1000000000;
   
   printf("The convertion into KB is %f\n The conversion into MB is %f\n The conversion into GB is %f\n",b,c,d);
return 0;

}