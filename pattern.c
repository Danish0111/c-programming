#include <stdio.h>
int main(){
    int num;
    printf("enter a number : ");
    scanf("%d",&num);

    // for printing triangular star pattern
    // for (int i = 0; i < num; i++){
    //     for (int j = 0; j <= i; j++){
    //         printf("*");
    //     }
    //     printf("\n");
    // }

    // for printing square star pattern
    // for (int i = 0; i < num; i++){
    //     for (int j = 0; j < num; j++){
    //         printf("* ");
    //     }
    //     printf("\n");
    // }
    
    // for printing reverse triangular star pattern
    // for (int i = 1; i <= num; i++){
    //     for (int j = i; j <= num; j++){
    //         printf("*");
    //     }
    //     printf("\n");
    // }

    for (int i = 1; i <= num; i++){
        for (int j = i; j < num; j++){
                printf(" ");   
        }
        for (int j = 1; j <= (2*i-1); j++){
            printf("*");
        }
        printf("\n");
    }

return 0;
}