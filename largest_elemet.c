#include <stdio.h>
int main(){
    int arr[5] = {13,2,8,6,5};
    int largest = arr[0];
    for (int i = 1; i <= 5; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
        
    }
    printf("The largest element of the array is %d\n", largest);
    
return 0;
}