#include <stdio.h>

int main()
{
    int n = 49;
    bool prime = true;
    int count = 0;
    for (int i = 2; i < n; i++)
    {
        count++;
        if ((n % i) == 0)
        {
            prime = false;
            break;
        }
    }
    if (prime)
    {
        printf("Number is prime..\n");
    }
    else
    {
        printf("Number is not prime..\n");
    }
    printf("Your count is %d", count);
}