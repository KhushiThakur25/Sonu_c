#include <stdio.h>

int main()
{
    int n;
    printf("Enter your number..");
    scanf("%d", &n);
    printf("your value of n is : %d \n", n);

    if (n > 0)
    {
        printf("Number is positive..");
    }
    else if (n == 0)
    {
        printf("Number is zero..");
    }
    else
    {
        printf("Number is negative..");
    }
}