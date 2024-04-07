#include <stdio.h>
int main(){
    FILE *ptr = NULL;
    ptr = fopen("file2.txt", "a+"); //r, w, a, r+, w+, a+

    // ******* Reading a character ********
    // char c = fgetc(ptr);
    // printf("the readed is %c\n", c);

    // ******* Reading a string ********
    // char str[34];
    // fgets(str, 5, ptr);
    // printf("the string is %s\n", str);

    // ******* writing a character in file ********
    fputc('c', ptr);

    // ******* writing a string in file ********
    fputs("this is a stirng", ptr);
    return 0;
}