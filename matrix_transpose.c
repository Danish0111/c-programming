#include <stdio.h>
int main()
{
    int m, n, a[100][100];
    printf("enter no. of rows : ");
    scanf("%d", &m);
    printf("enter no. of columns : ");
    scanf("%d", &n);

    printf("enter matrix\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("enter [%d][%d] : ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("Your of matrix is\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d  ",a[i][j]);
            
        }
        printf("\n\n");
    }
    
    printf("Transpose of matrix is\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d  ",a[j][i]);
            
        }
        printf("\n\n");
    }
    return 0;
}