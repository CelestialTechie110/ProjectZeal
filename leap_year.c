// F2: LEAP YEAR CHECKER
#include <stdio.h>
int main()
{
    int year; // To Take Input for Year
    printf("Enter the Year you want to be checked for Leap Year:\n");
    scanf("%d", &year);
    if ( year%400==0)
    printf("\nThe Year %d is a Leap Year", year);
    else if ((year%100!=0) && (year%4==0))
    printf("\nThe Year %d is a Leap Year", year);
    else
    printf("\nThe Year %d is Not a Leap Year", year);
    return 0;
}
