#include <stdio.h>
int main()
{
    int m1, n, m2, a[100][100], b[100][100], mul[100][100];
    printf("enter no. of rows for A: ");
    scanf("%d", &m1);
    printf("enter the value of n\n(no. of columns for A and no. of rows for B): ");
    scanf("%d", &n);
    printf("enter no. of columns for B: ");
    scanf("%d", &m2);

    printf("enter matrix A\n");
    for (int i = 0; i < m1; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("enter A[%d][%d] : ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("enter matrix B\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m2; j++)
        {
            printf("enter B[%d][%d] : ", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    for (int i = 0; i < m1; i++)
    {
        for (int j = 0; j < m2; j++)
        {
            mul[i][j] = 0;
            for (int k = 0; k < n; k++)
            {
                mul[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    printf("multiplication of matrix A and B is\n");
    for (int i = 0; i < m1; i++)
    {
        for (int j = 0; j < m2; j++)
        {
            printf("%d  ", mul[i][j]);
        }
        printf("\n\n");
    }

    return 0;
}