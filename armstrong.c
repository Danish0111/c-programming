#include <stdio.h>
int main(){
    int n,t,rem,arm=0;
    printf("enter a number: ");
    scanf("%d",&n);
    t=n;
    while(n>100){
        rem = n%10;
        arm = (rem*rem*rem)+arm;
        n = n/10;
    }
    if(t == arm){
        printf("%d is armstrong\n",t);
    }
    else{
        printf("%d is not armstrong\n",t);
    }
    
    
return 0;
}