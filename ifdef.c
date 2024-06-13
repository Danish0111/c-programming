#include <stdio.h>
#define add
int main(){
    int a, b, sum;
    printf("enter value of a :");
    scanf("%d",&a);
    
    printf("enter value of b :");
    scanf("%d",&b);
#ifdef add
    sum = a + b;
    printf("sum of a and b is: %d", sum);
#endif
    
return 0;
}