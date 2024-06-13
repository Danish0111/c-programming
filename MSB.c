#include <stdio.h>

int main() {
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    unsigned int mask = 1 << ((sizeof(int) * 8) - 1);

    if (number & mask) {
        printf("The most significant bit of %d is set (1).\n", number);
    } else {
        printf("The most significant bit of %d is not set (0).\n", number);
    }

    return 0;
}
