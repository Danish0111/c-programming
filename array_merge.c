#include <stdio.h>
int main(){
    int a1[5] = {1,2,3,4,5};
    int a2[5] = {6,7,8,9,10};
    int a3[10];
    for (int i = 0; i < 5; i++)
    {
        a3[i] = a1[i];
    }
    for (int i = 0; i < 5; i++)
    {
        a3[5 + i] = a2[i];
    }
    printf("merged array is\n");
    
    for (int k = 0; k < 10; k++)
    {
        printf("%d ", a3[k]);
        
    }
    
    
return 0;
}