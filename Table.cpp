#include <stdio.h>

int main()
{
    int n = 5;
    for (int i = 1; i <= 10; i++)
    {
        printf("%d X %d = %d \n", n, i, n * i);
    }
}