#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int arr1[5];
    int arr2[5];
    int n;
    printf("%d \n", arr[1]);
    for (int i = 0; i < 6; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    arr1[2] = 65;
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr1[i]);
    }

    printf("\n");

    // how to assign values in array....
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the values..\n");
        scanf("%d", &n);
        arr2[i] = n;
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr2[i]);
    }
    printf("\n");
}
