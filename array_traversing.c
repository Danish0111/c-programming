#include <stdio.h>
int main(){
    int arr[5] = {1,2,3,4,5};
    int* ptr = arr;
    while (ptr < arr+5)
    {
        printf("%d ", *ptr);
        ptr++;
    }
    
    
return 0;
}