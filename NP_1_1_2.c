#include <stdio.h>
int main()
{
    int a,b,c;
    
    printf("Enter the value of first number : \n");
    scanf("%d",&a );

    printf("Enter the value of second number : \n");
    scanf("%d",&b );

    c=a-b;

    printf("The difference %d-%d=%d",a,b,c);
    return 0;
}