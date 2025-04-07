#include <stdio.h>

int main()
{
    int arr[] = {23, 41, 52, 41, 6, 12, 13, 7};
    int min = arr[0];
    for (int i = 0; i < 8; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    printf("%d", min);
}