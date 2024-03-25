#include <stdio.h>
int main()
{
    int num, temp;
    int n = 5;
    int arr[5] = {5, 6, 4, 8, 7};
    printf("your array before sorting\n");

    for (int k = 0; k < n; k++)
    {
        printf("%d ", arr[k]);
    }
    printf("\n");

    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-1-i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
            // else
            // {
            //     arr[j] = arr[j];
            // }
        }
    }
    printf("your array after sorting\n");
    for (int k = 0; k < 5; k++)
    {
        printf("%d ", arr[k]);
    }

    return 0;
}