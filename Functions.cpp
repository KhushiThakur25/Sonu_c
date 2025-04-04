#include <stdio.h>

void calc(int n, int m)
{
    // int i = 2;
    // int n = 5;
    int sum = 0;
    sum = m + n;
    printf("Hello i'm calc.. %d\n", sum);
}

int main()
{
    // calc();
    // printf("%d", calc());
    // printf("%d", calc(5, 6));
    calc(5, 6);
}