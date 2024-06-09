#include <stdio.h>

int main() {
    FILE *input, *odd, *even;
    int num;

    // Open the input file for reading
    input = fopen("INPUT.txt", "r");
    if (input == NULL) {
        perror("Error opening file");
        return 1;
    }

    // Open the output files for writing
    odd = fopen("ODD.txt", "w");
    if (odd == NULL) {
        perror("Error opening file");
        return 1;
    }

    even = fopen("EVEN.txt", "w");
    if (even == NULL) {
        perror("Error opening file");
        return 1;
    }

    // Read integers from input file
    while (fscanf(input, "%d", &num) == 1) {
        if (num % 2 == 0) {
            // Even number, write to EVEN file
            fprintf(even, "%d\n", num);
        } else {
            // Odd number, write to ODD file
            fprintf(odd, "%d\n", num);
        }
    }

    // Close all files
    fclose(input);
    fclose(odd);
    fclose(even);

    printf("Odd and even numbers separated and saved to ODD and EVEN files.\n");

    return 0;
}
