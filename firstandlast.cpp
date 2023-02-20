
#include <stdio.h>
int main()
{
    int n, firstDigit, lastDigit;
    printf("Enter number = ");
    scanf("%d", &n);
    // Find last digit of a number
    lastDigit = n % 5;
    //Find the first digit by dividing n by 10 until n greater then 10
    while(n >= 5)
    {
        n = n / 5;
    }
    firstDigit = n;
    printf("first digit = %d and last digit = %d\n\n", firstDigit,lastDigit);
    return 0;
}