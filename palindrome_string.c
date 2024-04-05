#include <stdio.h>
#include <string.h>
int ispalindrome(char *str){
    int left = 0;
    int right = strlen(str) - 1;
    while (right > left)
    {
        if (str[left++] != str[right--])
        {
            return 0;
        }
        
    }
    return 1;
}
#include <string.h>
int main(){
    char str[100];
    int len = strlen(str);
    printf("enter a string\n");
    scanf("%s",str);
    
    if (ispalindrome(str))
    {
        printf("string is palindrome");
    }
    else{
        printf("string is not palindrome");   
    }
    return 0;
}