#include<stdio.h>
#pragma warning(disable: 4996)


int main()
{
    double input;
    printf("Please enter kilometers: ");
    scanf("%lf", &input);
    printf("3.5km is equal to %.1lf miles.", input / 1.609);
    return 0;
}
