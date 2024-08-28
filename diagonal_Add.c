#include <stdio.h>
void main()
{
    int sumOfPrimaryDiagonals = 0;
    int sumOfSecondaryDiagonals = 0;
    int size;
    printf("enter the size of matrix: ");
    scanf("%d",&size);
    int arr[size][size];
    
    printf("enter elememts of matrix\n");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("enter A[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("matrix is \n");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%d  ", arr[i][j]);
        }
        printf("\n\n");
        
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (i==j)
            {
                sumOfPrimaryDiagonals += arr[i][j];
            }

            if ((i+j) == size-1)
            {
                sumOfSecondaryDiagonals += arr[i][j];
            }
            
            
        }
    }

    printf("\nsum of diagonals primary is : %d", sumOfPrimaryDiagonals);
    printf("\nsum of diagonals secondary is : %d", sumOfSecondaryDiagonals);
}