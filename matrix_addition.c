#include <stdio.h>
int main()
{
    int m, n, a[100][100], b[100][100], sum[100][100];
    printf("enter no. of rows : ");
    scanf("%d", &m);
    printf("enter no. of columns : ");
    scanf("%d", &n);

    printf("enter matrix A\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("enter A[%d][%d] : ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("enter matrix B\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("enter B[%d][%d] : ", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("sum of matrix A and B is\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d  ", sum[i][j]);
        }
        printf("\n\n");
    }

    return 0;
}