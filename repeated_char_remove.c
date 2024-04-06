#include <stdio.h>
#include <string.h>

void removeDuplicates(char *str) {
    int len = strlen(str);
    if (len < 2)
        return;

    int tail = 1;
    for (int i = 1; i < len; ++i) {
        int j;
        for (j = 0; j < tail; ++j) {
            if (str[i] == str[j]) {
                break;
            }
        }
        if (j == tail) {
            str[tail] = str[i];
            ++tail;
        }
    }

    for (int i = tail; i < len; ++i) {
        str[i] = '\0'; // Null-terminate the string after the last unique character
    }
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    removeDuplicates(str);
    printf("String after removing duplicates: %s\n", str);
    return 0;
}
