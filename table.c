#include <stdio.h>
int main(){
    int i,num;
    printf("enter a number\n");
    scanf("%d",&num);
    
    for (i = 0; i <=10; i++)
    {
        printf("%d * %d = %d\n",num,i,(num*i));
        
    }
    
return 0;
}