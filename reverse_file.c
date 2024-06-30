#include <stdio.h>
#include <stdlib.h>

void reverseFileContent(const char *filename) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        perror("Error opening file");
        return;
    }

    fseek(file, 0, SEEK_END);
    long fileSize = ftell(file);
    fseek(file, 0, SEEK_SET);

    char *content = (char *)malloc(fileSize + 1);
    if (content == NULL) {
        perror("Memory allocation failed");
        fclose(file);
        return;
    }

    fread(content, 1, fileSize, file);
    content[fileSize] = '\0';

    fclose(file);

    for (long i = fileSize - 1; i >= 0; i--) {
        putchar(content[i]);
    }

    free(content);
}

int main() {
    const char *filename = "example.txt";

    reverseFileContent(filename);

    return 0;
}
