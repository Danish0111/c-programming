#include <stdio.h>
int main()
{
    int arr[5];
    printf("enter elements of array\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("value = %d\naddress = %d\n", arr[i], &arr[i]);
    }

    return 0;
}