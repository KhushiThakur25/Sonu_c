#include <stdio.h>

int main()
{
    int n = 1231;
    int rev = 0;
    int org = n;
    while (n > 0)
    {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    printf("Your reverse number is %d \n", rev);
    if (org == rev)
    {
        printf("number is palindrome..");
    }
    else
    {
        printf("Number is not palindrome..");
    }
}