#include <stdio.h>
int main()
{
    int a , b , c;
    printf("Enter the value of first number: ");
    scanf("%d",&a );

    printf("Enter the value of second number: ");
    scanf("%d",&b );

    c=a/b;

    printf("The result of %d / %d = %d", a , b, c);
    return 0;
}