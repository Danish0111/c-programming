#include <stdio.h>
int main(){
    int arr[3][3];
    int *ptr = &arr[0][0];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("enter arr[%d][%d]: ", i, j);
            scanf("%d",&arr[i][j]);
            
        }
        
    }
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            // printf("%d ", *(ptr));
            printf("%d ", *(ptr + i*3 + j));
        }
        printf("\n");
        
    }
    
    
return 0;
}