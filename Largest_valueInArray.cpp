#include <stdio.h>

int main()
{
    int arr[] = {23, 41, 52, 41, 6, 12, 13, 7};
    int max = 0;
    for (int i = 0; i < 8; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    printf("%d", max);
}