#include <stdio.h>
int main(){
    FILE *ptr = NULL;
    char string[64] = "This is another content of this file";

    // ******* Reading a file ********
    // ptr = fopen("file.txt", "r");
    // fscanf(ptr, "%s", string);
    // printf("the content of the file is %s\n", string);
    
    // ******* Writing a file ********
    // ptr = fopen("file.txt", "w");
    // fprintf(ptr, "%s", string);

    // ******* appending in a file ********
    ptr = fopen("file.txt", "a");
    fprintf(ptr, "%s", string);
return 0;
}