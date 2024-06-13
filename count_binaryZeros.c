#include <stdio.h>

int countLeadingZeros(unsigned int number) {
    if (number == 0) return 32;

    int count = 0;
    unsigned int mask = 1 << 31;  
    while ((number & mask) == 0) {
        count++;
        mask >>= 1;
    }

    return count;
}

int main() {
    unsigned int number;

    printf("Enter an unsigned integer: ");
    scanf("%u", &number);

    int leadingZeros = countLeadingZeros(number);

    printf("The number of leading zeros in %u is: %d\n", number, leadingZeros);

    return 0;
}
