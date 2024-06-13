#include <stdio.h>

int main() {
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    if (number & 1) {
        printf("The least significant bit of %d is set (1).\n", number);
    } else {
        printf("The least significant bit of %d is not set (0).\n", number);
    }

    return 0;
}
