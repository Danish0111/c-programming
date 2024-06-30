#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *one, *two;
    char buffer[256];

    one = fopen("one.txt", "r");
    if (one == NULL) {
        printf("Error: Could not open source file");
        return 1;
    }

    two = fopen("two.txt", "w");
    if (two == NULL) {
        printf("Error: Could not open destination file");
        fclose(one);
        return 1;
    }

    while (fgets(buffer, sizeof(buffer), one) != NULL) {
        fputs(buffer, two);
    }

    fclose(one);
    fclose(two);

    printf("Content from one.txt copied to two.txt successfully.\n");

    return 0;
}
