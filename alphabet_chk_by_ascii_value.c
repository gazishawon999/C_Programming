#include <stdio.h>

int main() {
    char ch;

    // Prompt the user for input
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Check if the character is an alphabet using ASCII values
    if ((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122)) {
        printf("%c is an alphabet.\n", ch);
    } else {
        printf("%c is not an alphabet.\n", ch);
    }

    return 0;
}
