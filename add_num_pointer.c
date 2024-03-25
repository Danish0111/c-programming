#include <stdio.h>
void pointer_add(int *a, int *b, int *s){
    *s = *a + *b;
}
int main(){
    int num1, num2, sum;
    printf("enter first number : ");
    scanf("%d",&num1);
    printf("enter second number : ");
    scanf("%d",&num2);
    pointer_add(&num1, &num2, &sum);
    printf("sum = %d",sum);
    
return 0;
}