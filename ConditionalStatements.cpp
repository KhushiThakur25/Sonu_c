#include <stdio.h>
int main()
{
    int n;
    printf("Enter your number..");
    scanf("%d", &n);
    printf("your value of n is : %d \n", n);
    if (n % 2 == 0)
    {
        printf("Your number is even..");
    }
    else
    {
        printf("Your number is odd");
    }
}