#include<stdio.h>

int main()

{
  
    float a,b,c,d,e;
    
    printf("marks in 3 subjects out of 100\n");
    scanf("%f%f%f" ,&a , &b , &c);
    
    d=(a+b+c)/3;
    
    printf("your average in all 3 subjects is %f" ,d);
   
    e=a+b+c;
    
    printf("\nyour total marks out of 300 are %f" ,e);
return 0;

}