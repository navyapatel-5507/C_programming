#include <stdio.h>

int main() 
{
    int a,b,sum,difference,multiplication,division;
    
    printf("Enter the value of first number: ");
    scanf("%d", &a);
    
    printf("Enter the value of second number: ");
    scanf("%d", &b);
    
    sum=a+b;
    difference=a-b;
    multiplication=a*b;
    division=a/b;
    
    printf("The addition is %d\n", sum);
    printf("The difference is %d\n", difference);
    printf("The product is %d\n", multiplication);
    printf("The division is %d\n", division);
      
    if(b!= 0)
    {
        printf("Division: %.2d\n", a / b);
    }
     else 
    {
        printf("Error: Division by zero is not allowed. \n");
    }

    return 0;
}