#include<stdio.h>

int main()

{

    float a,b;
    
    printf("Enter gross sales");
    scanf("%f",&a);
    
    b=a-(0.1*a);
    
    printf("The net sales is %f",b);
return 0;

}