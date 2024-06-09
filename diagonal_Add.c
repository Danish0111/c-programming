#include <stdio.h>
int main()
{
    int p_Add = 0;
    int s_Add = 0;
    int arr[3][3];
    printf("enter elememts of matrix\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("enter A[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("matrix is \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
        
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i==j)
            {
                p_Add += arr[i][j];
            }

            if ((i+j) == 2)
            {
                s_Add += arr[i][j];
            }
            
            
        }
    }

    printf("\nsum of diagonals primary is : %d", p_Add);
    printf("\nsum of diagonals secondary is : %d", s_Add);
    
    return 0;
}