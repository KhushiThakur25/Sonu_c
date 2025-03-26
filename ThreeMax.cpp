#include <stdio.h>

int main()
{
    int n, m, o;
    printf("Enter your number n..");
    scanf("%d", &n);
    printf("Enter your number m..");
    scanf("%d", &m);
    printf("Enter your number o..");
    scanf("%d", &o);

    if (n > m && n > o)
    {
        printf("Number n is greatest..");
    }
    else if (m > n && m > o)
    {
        printf("Number m is greatest..");
    }
    else
    {
        printf("Number o is greatest..");
    }
}