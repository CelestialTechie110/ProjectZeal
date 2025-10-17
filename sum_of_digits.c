// F1: SUM OF DIGITS
#include <stdio.h>
int main()
{
    int sum=0; // To store sum of digits
    int i; // Control Variable for loop
    int n; // To store Input Number
    printf("Enter the number whose digits you want add:\n");
    scanf("%d", &n);
    for(i=n;i>0;i=i/10)
    {
    sum+=(i%10);
    }
    printf("\n Sum of digits of %d = %d",n , sum);
    return 0;
}
