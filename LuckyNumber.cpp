#include <stdio.h>

int main()
{
    
    int n;
    printf("Enter your number..");
    scanf("%d", &n);
    printf("your value of n is : %d \n", n);

    if (n % 5 == 0 && n % 7 == 0)
    {
        printf("Number is Lucky ...");
    }
    else
    {
        printf("Number is Unlucky..");
    }
}