#include<stdio.h>

int main()

{
  
    float a,b,A,P;

    printf("Enter the length of the rectangle");
    scanf("%f",&a);

    printf("Enter the breadth of the rectangle");
    scanf("%f",&b);

    A=a*b;
    P=2.0*(a+b);

    printf("The area of rectangle is %f\nThe Perimeter of rectangle is %f",A,P);
return 0;

}