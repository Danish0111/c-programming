#include <stdio.h>
int main(){
    int arr[5] = {1,2,3,4,5};
    int *ptr = arr;
    for (int i = 0; i < 5; i++)
    {
        *(ptr) += 1;
        printf("value at index %d is %d\n", i, *ptr);
        
    }
    
    
return 0;
}