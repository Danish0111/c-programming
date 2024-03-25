#include <stdio.h>
int factorialRecursive(int num){
    if(num==1 || num==0){
        return 1;
    }
    else{
        return num * factorialRecursive(num-1);
    }
}
int factorialItrative(int num){
    int n=1;
    for (int i = num; i > 0; i--)           
    {
        n = n*i;
    }
    if(num==1 || num==0){
        return 1;
    }
    else{
        return n;
    }
}
int main(){
    int num,fac1,fac2;
    printf("enter number whose factorial you want to find\n");
    scanf("%d",&num);
    fac1 = factorialItrative(num);
    fac2 = factorialRecursive(num);
    printf("factorial of %d from itrative method is %d\n",num,fac1);
    printf("factorial of %d from recursive method is %d\n",num,fac2);
return 0;
}