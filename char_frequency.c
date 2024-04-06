#include <stdio.h>
#include <string.h>
int main(){
    char str[100];
    char ch;
    int count = 0;
    printf("enter a string\n");
    gets(str);
    printf("enter the character to find\n");
    scanf("%c",&ch);
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ch)
        {
            count++;
        }
        
    }
    printf("frequency of character %c is %d\n", ch, count);
    
return 0;
}