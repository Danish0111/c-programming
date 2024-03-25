#include <stdio.h>
int main(){
    int m, n, a[100][100];
    printf("enter no. of rows : ");
    scanf("%d", &m);
    printf("enter no. of columns : ");
    scanf("%d", &n);

    printf("enter matrix\n");
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            printf("enter [%d][%d] : ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    if (m==n){
        printf("primary diagonals are\n");
        
        for (int i = 0; i < m; i++){
            for (int j = 0; j < n; j++){
                if (i==j){
                    printf("%d ",a[i][j]);    
                }                
            }            
        }
        printf("\n");
        
        printf("secondary diagonals are\n");
        
        for (int i = 0; i < m; i++){
            for (int j = 0; j < n; j++){
                if (i+j == m-1){
                    printf("%d ",a[i][j]);    
                }                
            }            
        }
    }
    else{
        printf("matrix is not square\n");
    }
    
    
    return 0;
}