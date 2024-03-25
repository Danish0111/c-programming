#include <stdio.h>
int main(){
    int num, sum=0;
    printf("enter a number : ");
    scanf("%d",&num);
    for (int i = 0; i < num+1; i++)
    {
        sum = sum+i;
    }
    printf("sum of first %d numbers is %d",num, sum);
    
return 0;
}                   