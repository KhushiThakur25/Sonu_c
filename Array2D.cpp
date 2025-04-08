#include <stdio.h>

int main()
{
    int arr[][4] = {
        {1, 2, 3, 1}, {1, 4, 5, 6}, {7, 1, 8, 9}};
    int n = sizeof(arr) / sizeof(arr[0]);
    int m = sizeof(arr[0]) / sizeof(arr[0][0]);
    printf("%d \n", n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}