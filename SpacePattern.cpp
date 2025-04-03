#include <stdio.h>

int main()
{
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= n - 2 - i; j++)
        {
            printf("  ");
        }
        for (int j = n - 1 - i ; j < n; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}