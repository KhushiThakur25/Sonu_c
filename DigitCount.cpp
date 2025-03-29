#include <stdio.h>

int main()
{
    int n = 635256;
    int count = 0;
    while (n > 0)
    {
        count++;
        n /= 10;
    }
    printf("Your count is %d", count);
}