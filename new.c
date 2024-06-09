#include <stdio.h>
// void sort(int a[]){
    
    
// }
int main(){
    int arr[5] = {8,6,2,9,5};
    int n = 5;
    printf("array befor sorting\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    // sort(arr);
    int temp;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
            
        }
        
    }
    printf("\n");
    
    printf("array after sorting\n");
    for (int k = 0; k < 5; k++)
    {
        printf("%d ", arr[k]);
    }
    
return 0;
}