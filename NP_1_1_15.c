#include<stdio.h>

int main()

{
  
    float a,b;

    printf("Enter temp in Farenhite:");
    scanf("%f",&a);

    b=5.0/9*(a-32);

    printf("The temp in Celcius is %f",b);

return 0;
}