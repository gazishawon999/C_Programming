#include <stdio.h>

int main() {
    int a, b, size = 15;

    // Upper part of the pattern (Heart shape)
    for (a = size / 2; a <= size; a = a + 2) {
        // Print leading spaces
        for (b = 1; b < size - a; b = b + 2)
            printf(" ");

        // Print 'A' characters for the left half
        for (b = 1; b <= a; b++)
            printf("A");

        // Print spaces between the two halves
        for (b = 1; b <= size - a; b++)
            printf(" ");

        // Print 'A' characters for the right half
        for (b = 1; b <= a - 1; b++)
            printf("A");

        printf("\n");
    }

    // Lower part of the pattern (Inverted triangle)
    for (a = size; a >= 0; a--) {
        // Print leading spaces
        for (b = a; b < size; b++)
            printf(" ");

        // Print 'B' characters
        for (b = 1; b <= ((a * 2) - 1); b++)
            printf("B");

        printf("\n");
    }

    return 0;
}
    
