#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *new, *tempFile;
    char buffer[256];
    int line, count = 1;

    printf("Enter the line number to delete: ");
    scanf("%d", &line);

    new = fopen("new.txt", "r");
    if (new == NULL) {
        printf("Error: Could not open new.txt\n");
        return 1;
    }

    tempFile = fopen("temp.txt", "w");
    if (tempFile == NULL) {
        printf("Error: Could not open temp.txt\n");
        fclose(new);
        return 1;
    }

    while (fgets(buffer, sizeof(buffer), new) != NULL) {
        if (count != line) {
            fputs(buffer, tempFile);
        }
        count++;
    }

    fclose(new);
    fclose(tempFile);

    if (remove("new.txt") != 0) {
        printf("Error: Could not delete the original file\n");
        return 1;
    }

    if (rename("temp.txt", "new.txt") != 0) {
        printf("Error: Could not rename the temporary file\n");
        return 1;
    }

    printf("Line %d deleted successfully from new.txt\n", line);

    return 0;
}
