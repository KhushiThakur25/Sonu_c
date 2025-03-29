#include <stdio.h>
int main()
{
    int n = 8;
    int first = 0;
    int second = 1;
    int third = 0;
    printf("%d %d ", first, second);
    for (int i = 3; i <= n; i++)
    {
        third = first + second;
        printf("%d ", third);
        first = second;
        second = third;
    }
}