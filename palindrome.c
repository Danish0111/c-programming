#include <stdio.h>
int is_palimdrome(int n){
    int rev=0;
    int on = n;
    while(n!=0){
        rev = rev*10 + n%10;
        n = n/10;
    }
    if(on == rev){
        return 1;
    }
    return 0;
}
int main(){
    int num;
    printf("enter a number : ");
    scanf("%d",&num);
    if(is_palimdrome(num)){
        printf("number is pallindrome\n");
    }else{
        printf("number is not pallindrome\n");
    }
return 0;
}