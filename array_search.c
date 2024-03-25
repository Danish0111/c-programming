#include <stdio.h>
int search(int arr[], int n){
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] == n)
        {
            return i;
        }
        
    }
    return -1;
    
}
int main(){
    int arr[5] = {1,2,3,4,5};
    int x = sizeof(arr) / sizeof(arr[0]);
    int n;
    printf("enter the number you want to find\n");
    scanf("%d",&n);
    int result = search(arr, n);
    if (result == -1)
    {
        printf("element is not found\n");
        
    }
    else{
        printf("element is found\n");
        
    }
    
return 0;
}