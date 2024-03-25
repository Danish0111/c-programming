#include <stdio.h>
void insertion(int arr[],int size,int index,int value,int capacity){
    if (size >= capacity)
    {
        printf("array is full\n");
        
    }
    if (index > capacity)
    {
        printf("you exceded the capacity of array\n");
        
    }
    for (int i = size-1; i >= index; i--)
    {
        arr[i+1] = arr[i];
    }
    arr[index] = value;
    
    
}
int main(){
    int arr[100] = {1,2,3,4,5};
    int size = 5, index, value;
    printf("enter the the on which you want insertion\n");
    scanf("%d",&index);
    
    printf("enter the value\n");
    scanf("%d",&value);
    
    insertion(arr,size,index,value,100);
    size++;

    for (int j = 0; j < size; j++)
    {
        printf("%d ",arr[j]);
        
    }
    
return 0;
}