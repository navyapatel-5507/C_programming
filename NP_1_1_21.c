#include<stdio.h>

int main()

{
  
    float N,G;

    printf("Enter the gross salary");
    scanf("%f",&G);

    N=G+(0.1*G)-(0.03*G);

    printf("The net salary is %f",N);
    return 0;

}