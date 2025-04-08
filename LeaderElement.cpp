#include <stdio.h>

int main()
{
    int arr[] = {5, 6, 4, 3, 2, 1, 6, 4, 0};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; i++)
    {
        bool leader = true;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] > arr[i])
            {
                leader = false;
                break;
            }
        }
        if (leader)
        {
            printf("%d , ", arr[i]);
        }
    }
}