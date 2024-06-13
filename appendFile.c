#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *sourceFile, *destinationFile;
    char buffer[256];

    sourceFile = fopen("source.txt", "r");
    if (sourceFile == NULL) {
        printf("Error: Could not open source file");
        return 1;
    }

    destinationFile = fopen("destination.txt", "a");
    if (destinationFile == NULL) {
        printf("Error: Could not open destination file");
        fclose(sourceFile);
        return 1;
    }

    while (fgets(buffer, sizeof(buffer), sourceFile) != NULL) {
        fputs(buffer, destinationFile);
    }

    fclose(sourceFile);
    fclose(destinationFile);

    printf("Content from source.txt appended to destination.txt successfully.\n");

    return 0;
}
