#include <stdio.h>

int main()
{
    int sum = 0;
    for (int i = 1; i <= 5; i++)
    {
        sum += i;
        // sum = sum + i;
    }
    printf("%d ", sum);
}