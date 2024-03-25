#include <stdio.h>
int main()
{
    int arr[2][3][3] = {
        {{1, 2, 3}, {5, 7, 3}, {2, 3, 5}},
        {{1, 5, 4}, {3, 6, 7}, {8, 5, 4}}};

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                printf("%d ", arr[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}