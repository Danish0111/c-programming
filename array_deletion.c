#include <stdio.h>
void deletion(int arr[],int size,int index,int capacity){
    if (index > capacity)
    {
        printf("you exceded the capacity of array\n");
        
    }
    for (int i = index; i < size; i++)
    {
        arr[i] = arr[i+1];
    }
    
    
}
int main(){
    int arr[100] = {1,2,3,4,5};
    int size = 5, index;
    printf("enter the the on which you want deletion\n");
    scanf("%d",&index);
    
    deletion(arr,size,index,100);
    size--;

    for (int j = 0; j < size; j++)
    {
        printf("%d ",arr[j]);
        
    }
    
return 0;
}