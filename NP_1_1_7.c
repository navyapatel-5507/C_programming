#include <stdio.h>

int main()
{
    float minutes, hours;

    printf("Enter time in minutes: ");
    scanf("%f", &minutes);
       
    hours = minutes / 60;     
    
    printf("%f minutes = %f hour(s) and %f minute(s)\n", minutes, hours);

    return 0;
}